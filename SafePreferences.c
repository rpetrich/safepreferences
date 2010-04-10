#include <unistd.h>

int main(int argc, const char* argv[])
{
	char *env[2] = { "DYLD_INSERT_LIBRARIES=/Library/MobileSubstrate/DynamicLibraries/PreferenceLoader.dylib:/Library/MobileSubstrate/MobileSubstrate.dylib", NULL };
	return execve("/Applications/Preferences.app/Preferences", (void *)argv, env);
}

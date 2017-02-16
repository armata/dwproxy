#include "StdInc.h"
#include "SteamUser016.h"

ISteamUser* g_steamUser;
ISteamUser* g_steamUserOriginal;

S_API ISteamUser* SteamUser()
{
	if (!g_steamUserOriginal)
	{
		HMODULE module = LoadLibraryA("steam_api.dll");
		FARPROC address = GetProcAddress(module, "SteamUser");

		g_steamUserOriginal = ((ISteamUser*(*)())(address))();
	}

	if (!g_steamUser)
	{
		g_steamUser = new SteamUser016();
	}

	return g_steamUser;
}
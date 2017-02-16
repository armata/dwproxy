#include "StdInc.h"
#include "SteamUser016.h"

extern ISteamUser* g_steamUserOriginal;

HSteamUser SteamUser016::GetHSteamUser()
{
	return g_steamUserOriginal->GetHSteamUser();
}

bool SteamUser016::BLoggedOn()
{
	return g_steamUserOriginal->BLoggedOn();
}

CSteamID SteamUser016::GetSteamID()
{
	return g_steamUserOriginal->GetSteamID();
}

int SteamUser016::InitiateGameConnection(void *pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
	return g_steamUserOriginal->InitiateGameConnection(pAuthBlob, cbMaxAuthBlob, steamIDGameServer, unIPServer, usPortServer, bSecure);
}

void SteamUser016::TerminateGameConnection(uint32 unIPServer, uint16 usPortServer)
{
	g_steamUserOriginal->TerminateGameConnection(unIPServer, usPortServer);
}

void SteamUser016::TrackAppUsageEvent(CGameID gameID, int eAppUsageEvent, const char *pchExtraInfo)
{
	g_steamUserOriginal->TrackAppUsageEvent(gameID, eAppUsageEvent, pchExtraInfo);
}

bool SteamUser016::GetUserDataFolder(char *pchBuffer, int cubBuffer)
{
	return g_steamUserOriginal->GetUserDataFolder(pchBuffer, cubBuffer);
}

void SteamUser016::StartVoiceRecording()
{
	g_steamUserOriginal->StartVoiceRecording();
}

void SteamUser016::StopVoiceRecording()
{
	g_steamUserOriginal->StopVoiceRecording();
}

EVoiceResult SteamUser016::GetAvailableVoice(uint32 *pcbCompressed, uint32 *pcbUncompressed, uint32 nUncompressedVoiceDesiredSampleRate)
{
	return g_steamUserOriginal->GetAvailableVoice(pcbCompressed, pcbUncompressed, nUncompressedVoiceDesiredSampleRate);
}

EVoiceResult SteamUser016::GetVoice(bool bWantCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, bool bWantUncompressed, void *pUncompressedDestBuffer, uint32 cbUncompressedDestBufferSize, uint32 *nUncompressBytesWritten, uint32 nUncompressedVoiceDesiredSampleRate)
{
	return g_steamUserOriginal->GetVoice(bWantCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, bWantCompressed, pUncompressedDestBuffer, cbUncompressedDestBufferSize, nUncompressBytesWritten, nUncompressedVoiceDesiredSampleRate);
}

EVoiceResult SteamUser016::DecompressVoice(const void *pCompressed, uint32 cbCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, uint32 nDesiredSampleRate)
{
	return g_steamUserOriginal->DecompressVoice(pCompressed, cbCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, nDesiredSampleRate);
}

uint32 SteamUser016::GetVoiceOptimalSampleRate()
{
	return g_steamUserOriginal->GetVoiceOptimalSampleRate();
}

HAuthTicket SteamUser016::GetAuthSessionTicket(void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
	return g_steamUserOriginal->GetAuthSessionTicket(pTicket, cbMaxTicket, pcbTicket);
}

EBeginAuthSessionResult SteamUser016::BeginAuthSession(const void *pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
	return g_steamUserOriginal->BeginAuthSession(pAuthTicket, cbAuthTicket, steamID);
}

void SteamUser016::EndAuthSession(CSteamID steamID)
{
	g_steamUserOriginal->EndAuthSession(steamID);
}

void SteamUser016::CancelAuthTicket(HAuthTicket hAuthTicket)
{
	g_steamUserOriginal->CancelAuthTicket(hAuthTicket);
}

EUserHasLicenseForAppResult SteamUser016::UserHasLicenseForApp(CSteamID steamID, AppId_t appID)
{
	return g_steamUserOriginal->UserHasLicenseForApp(steamID, appID);
}

bool SteamUser016::BIsBehindNAT()
{
	return g_steamUserOriginal->BIsBehindNAT();
}

void SteamUser016::AdvertiseGame(CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer)
{
	g_steamUserOriginal->AdvertiseGame(steamIDGameServer, unIPServer, usPortServer);
}

SteamAPICall_t SteamUser016::RequestEncryptedAppTicket(void *pDataToInclude, int cbDataToInclude)
{
	OutputDebugStringA("ticket: ");
	OutputDebugStringA((char*)pDataToInclude);
	OutputDebugStringA("\n");

	return g_steamUserOriginal->RequestEncryptedAppTicket(pDataToInclude, cbDataToInclude);
}

bool SteamUser016::GetEncryptedAppTicket(void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
	return g_steamUserOriginal->GetEncryptedAppTicket(pTicket, cbMaxTicket, pcbTicket);
}
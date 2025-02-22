// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGAdminInterface.h"

AFGAdminInterface::AFGAdminInterface() : Super() {
	this->bOnlyRelevantToOwner = true;
	this->bAlwaysRelevant = true;
	this->bReplicates = true;
}
bool AFGAdminInterface::IsNetRelevantFor(const AActor* realViewer, const AActor* viewTarget, const FVector& srcLocation) const{ return bool(); }
void AFGAdminInterface::KickPlayer_Implementation( APlayerState* playerState){ }
bool AFGAdminInterface::KickPlayer_Validate( APlayerState* playerState){ return bool(); }
void AFGAdminInterface::SaveGame(bool locally, const FString& saveName, FOnAdminSaveGameComplete completeDelegate){ }
void AFGAdminInterface::MakeAdmin(AFGPlayerState* playerState){ }
void AFGAdminInterface::LoadGame(bool locally, const FSaveHeader& save){ }
void AFGAdminInterface::LoadGameByName(const FString& saveGameName){ }
void AFGAdminInterface::EnumerateSaveGames(bool localSaves, FOnAdminEnumerateSaveGamesComplete completeDelegate){ }
void AFGAdminInterface::DeleteSaveSession(bool localSaves, const FSessionSaveStruct& session, FOnAdminDeleteSaveGameComplete completeDelegate){ }
void AFGAdminInterface::DeleteSaveFiles(bool localSaves, const TArray<FString>& saveNames, FOnAdminDeleteSaveGameComplete completeDelegate){ }
void AFGAdminInterface::DeleteSaveFile(bool localSaves, const FString& saveName, FOnAdminDeleteSaveGameComplete completeDelegate){ }
void AFGAdminInterface::Internal_EnumerateSaveGames(RequestIdType requestId){ }
void AFGAdminInterface::Internal_EnumerateSaveGamesCallback(bool success, const TArray<FSaveHeader>& saveGames, RequestIdType requestId){ }
void AFGAdminInterface::Server_EnumerateSaveGames_Implementation(int16 requestId){ }
bool AFGAdminInterface::Server_EnumerateSaveGames_Validate(int16 requestId){ return bool(); }
void AFGAdminInterface::Client_OnEnumerateSaveGamesCompleted_Implementation(bool success, int16 requestId, const TArray<FSaveHeader>& saves){ }
void AFGAdminInterface::Internal_DeleteSaveFiles(const TArray<FString>& saveNames, RequestIdType requestId){ }
void AFGAdminInterface::Server_DeleteSaveFiles_Implementation(const TArray<FString>& saveNames, int16 requestId){ }
bool AFGAdminInterface::Server_DeleteSaveFiles_Validate(const TArray<FString>& saveNames, int16 requestId){ return bool(); }
void AFGAdminInterface::Client_DeleteSaveFilesCompleted_Implementation(bool success, int16 requestId){ }
void AFGAdminInterface::Server_LoadGame_Implementation(const FSaveHeader& header){ }
bool AFGAdminInterface::Server_LoadGame_Validate(const FSaveHeader& header){ return bool(); }
void AFGAdminInterface::Client_OnSaveGameCompleted_Implementation(bool success, int16 requestId, const FText& errorMessage){ }
void AFGAdminInterface::Server_SaveGame_Implementation(int16 requestId, const FString& saveGame){ }
bool AFGAdminInterface::Server_SaveGame_Validate(int16 requestId, const FString& saveGame){ return bool(); }
void AFGAdminInterface::Internal_SaveGame(RequestIdType requestId, const FString& saveGame){ }
void AFGAdminInterface::Server_MakeAdmin_Implementation(AFGPlayerState* playerState){ }
void AFGAdminInterface::LoadGameByNameCallback(bool success, const TArray<FSaveHeader>& saveGames, FString saveGameName){ }
AFGPlayerControllerBase* AFGAdminInterface::GetOwningPlayer() const{ return nullptr; }
UFGLocalPlayer* AFGAdminInterface::GetOwningLocalPlayer() const{ return nullptr; }
AFGGameSession* AFGAdminInterface::GetGameSession() const{ return nullptr; }
bool AFGAdminInterface::IsOwnerAdmin() const{ return bool(); }
RequestIdType AFGAdminInterface::RequestIdCounter = RequestIdType();

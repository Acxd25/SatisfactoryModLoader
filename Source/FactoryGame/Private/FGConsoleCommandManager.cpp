// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGConsoleCommandManager.h"

bool FPatchTable::Init(const FString& patchTableFilePathName){ return bool(); }
const FPatchTable::FPatchTableRow* FPatchTable::FindRow(const FString& inNamespace, const FString& inKey) const{ return nullptr; }
#if WITH_EDITOR
bool UFGConsoleCommandManager::ParsePatchTableArgs(const TArray<FString>& args, TSet<FString>& out_paths, TSet<FString>& out_stringTables, int32& out_limit, bool& out_ignoreSourceStringMismatch){ return bool(); }
void UFGConsoleCommandManager::PatchUpFTextInAssets(const TArray<FString>& args){ }
void UFGConsoleCommandManager::PatchUpTextFiles(const TSet<TPair<FString, FString>>& textKeysToPatch, const FPatchTable& patchTable){ }
#endif 
UWorld* UFGConsoleCommandManager::GetWorld() const{ return nullptr; }
TMap<FString, FString> UFGConsoleCommandManager::GetFunctionCategories() const{ return TMap<FString,FString>(); }
void UFGConsoleCommandManager::MaterialFlowAnalysis(FString recipeNames){ }
void UFGConsoleCommandManager::MaterialLookup(FString itemName){ }
void UFGConsoleCommandManager::SetSessionName(FString newSessionName){ }
void UFGConsoleCommandManager::SaveWithNewSessionName(const FString& saveName, const FString& sessionName){ }
void UFGConsoleCommandManager::TrackAllAkStats(){ }
void UFGConsoleCommandManager::TrackAkComponents(bool byClass){ }
void UFGConsoleCommandManager::TrackAkComponentsWithNoPositionOrOwner(){ }
void UFGConsoleCommandManager::CrashTheGame(){ }
void UFGConsoleCommandManager::DumpCrashContext(){ }
void UFGConsoleCommandManager::ResetOnlineStats(){ }
void UFGConsoleCommandManager::FixupBuiltByRecipeInOldSave(bool reapplyRecipeIfBetterMatchFound){ }
void UFGConsoleCommandManager::DumpFactoryStatsToLog(){ }
void UFGConsoleCommandManager::CopyPlayerCoordinates(){ }
void UFGConsoleCommandManager::DumpPlayerCoordinates(const FString& label , bool copyToClipboard){ }
void UFGConsoleCommandManager::DumpDynamicOptionsSettings(){ }
void UFGConsoleCommandManager::ToggleRailroadBlockVisualization(bool enabled){ }
void UFGConsoleCommandManager::EnableTrainSchedulerBlackBox(int32 numRecordsToKeep){ }
void UFGConsoleCommandManager::DisableTrainSchedulerBlackBox(bool dump){ }
void UFGConsoleCommandManager::DismantleVehiclesUnderWorld(){ }

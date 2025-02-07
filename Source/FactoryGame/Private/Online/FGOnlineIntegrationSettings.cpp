// This file has been automatically generated by the Unreal Header Implementation tool

#include "Online/FGOnlineIntegrationSettings.h"

UFGOnlineIntegrationSettings::UFGOnlineIntegrationSettings() {
	this->mOnlineStatDataTable = FSoftObjectPath("/Game/FactoryGame/Testing/Achievements/DT_OnlineStats.DT_OnlineStats");
	this->mOnlineAggregatedStatDataTable = FSoftObjectPath("/Game/FactoryGame/Testing/Achievements/DT_OnlineStatsAggregated.DT_OnlineStatsAggregated");
	this->mSessionValidationRowDescTable = FSoftObjectPath("/Game/FactoryGame/Interface/UI/Online/SessionCreationSummaryFields/DT_SessionSummaryRowDescTable.DT_SessionSummaryRowDescTable");
	this->mSessionInformationRowDescTable = FSoftObjectPath("/Game/FactoryGame/Interface/UI/Online/DT_ReadOnlySessionInfoRowDescs.DT_ReadOnlySessionInfoRowDescs");
	this->mAddonEntitlements.Add(FSoftObjectPath("/Game/FactoryGame/DLC/AddOn_EarlySupporterPack.AddOn_EarlySupporterPack").ResolveObject());
}
const UFGOnlineIntegrationSettings* UFGOnlineIntegrationSettings::Get(){ return nullptr; }
UDataTable* UFGOnlineIntegrationSettings::GetOnlineStatDataTable() const{ return nullptr; }
UDataTable* UFGOnlineIntegrationSettings::GetOnlineAggregatedStatDataTable() const{ return nullptr; }
UDataTable* UFGOnlineIntegrationSettings::GetSessionValidationRowDescTable() const{ return nullptr; }
UDataTable* UFGOnlineIntegrationSettings::GetReadOnlySessionInfoRowDescTable() const{ return nullptr; }
TArray<UAddOnEntitlement*> UFGOnlineIntegrationSettings::LoadAddonEntitlements() const{ return TArray<UAddOnEntitlement*>(); }

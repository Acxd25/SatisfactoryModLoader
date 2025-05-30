// This file has been automatically generated by the Unreal Header Implementation tool

#include "LocalUserInfo.h"


UE_DEFINE_GAMEPLAY_TAG(FLocalUserInfoTags::IsPendingLoginStateChange, TEXT("Test.Test"));
ULocalUserInfo::ULocalUserInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) { }
FPlatformUserId ULocalUserInfo::GetPlatformUserId() const{ return FPlatformUserId(); }
int32 ULocalUserInfo::GetPlatformUserIndex() const{ return int32(); }
ECommonUserLoginStatus ULocalUserInfo::GetLoginStatusForBackend(UOnlineIntegrationBackend* Backend) const{ return ECommonUserLoginStatus(); }
UOnlineUserBackendLink* ULocalUserInfo::GetUserBackend(const UOnlineIntegrationBackend* Backend){ return nullptr; }
const UOnlineUserBackendLink* ULocalUserInfo::GetUserBackend(const UOnlineIntegrationBackend* Backend) const{ return nullptr; }
UOnlineUserBackendLink* ULocalUserInfo::GetPlatformBackend(){ return nullptr; }
const UOnlineUserBackendLink* ULocalUserInfo::GetPlatformBackend() const{ return nullptr; }
UOnlineUserBackendLink* ULocalUserInfo::GetBackendByIndex(int32 Index) const{ return nullptr; }
UOnlineUserBackendLink* ULocalUserInfo::GetUserBackendByProvider(FName ProviderName) const{ return nullptr; }
TArray<UOnlineUserBackendLink*> ULocalUserInfo::GetUserBackends() const{ return TArray<UOnlineUserBackendLink*>(); }
UOnlineUserInfo& ULocalUserInfo::GetOnlineUserInfo() const{ return *NewObject<UOnlineUserInfo>(); }
UOnlineUserBackendLink* ULocalUserInfo::GetUserBackendEpic() const{ return nullptr; }
int32 ULocalUserInfo::NumBackends() const{ return int32(); }
UCommonUserSubsystem* ULocalUserInfo::GetSubsystem() const{ return nullptr; }
FDelegateHandle ULocalUserInfo::BindOnFriendAddedDelegate(const FOnOnlineFriendListChangeNative::FDelegate& Delegate){ return FDelegateHandle(); }
FDelegateHandle ULocalUserInfo::BindOnFriendRemovedDelegate(const FOnOnlineFriendListChangeNative::FDelegate& Delegate){ return FDelegateHandle(); }
FDelegateHandle ULocalUserInfo::AddOnLoginStateChangeDelegate(const FOnPlayerLoginStateChanged::FDelegate& Delegate) const{ return FDelegateHandle(); }
FDelegateHandle ULocalUserInfo::AddOnResetFriendlistDelegate(const FOnFriendListReset::FDelegate& Delegate){ return FDelegateHandle(); }
FDelegateHandle ULocalUserInfo::AddOnQueryFriendsAllCompleted(const FOnQueryFriendsAllCompleted::FDelegate& Delegate){ return FDelegateHandle(); }
void ULocalUserInfo::RemoveOnQueryFriendsAllCompleted(FDelegateHandle handle){ }
bool ULocalUserInfo::IsSessionHost(){ return bool(); }
void ULocalUserInfo::RemoveLoginStatenChangeDelegate(FDelegateHandle &Handle) const{ }
void ULocalUserInfo::SetPresenceValue(const FString& Key, const FString& Value) const{ }
void ULocalUserInfo::SetPresenceValues(const TMap<FString, FString>& Value) const{ }
void ULocalUserInfo::ClearPresenceProperty(const FString& Key) const{ }
void ULocalUserInfo::SetPresenceString(const FString& InPresenceString) const{ }
void ULocalUserInfo::ShowExternalFriendsUI() const{ }
void ULocalUserInfo::ShowExternalInviteUI() const{ }
TArray<UOnlineFriend*> ULocalUserInfo::GetFriends() const{ return TArray<UOnlineFriend*>(); }
bool ULocalUserInfo::GetPrivilegeResult(EPrivilegeResults& privileges, EUserPrivilege Privilege) const{ return false; }
TFuture<ECommonUserPrivilegeResult> ULocalUserInfo::FetchPrivilegeResultForBackend(UOnlineIntegrationBackend* Backend, ECommonUserPrivilege Privilege) const{ return TFuture<ECommonUserPrivilegeResult>(); }
void ULocalUserInfo::UpdateCrossplayUGCPrivileges(){ }
void ULocalUserInfo::UpdatePrivileges(){ }
TArray<FLocalUserNetIdBundle> ULocalUserInfo::GetUserNetIdBundles(){ return TArray<FLocalUserNetIdBundle>(); }
void ULocalUserInfo::PollHasPremiumPrivilege(FUserHasPremiumAccountDelegate completeDelegate){ }
void ULocalUserInfo::UserCanCrossPlay(EPrivilegeCheckResult& privilegeResult){ }
void ULocalUserInfo::UserCanSeeUGC(EPrivilegeCheckResult& privilegeResult){ }
void ULocalUserInfo::UserHasNoTextCommunicationRestrictions(EPrivilegeCheckResult& privilegeResult){ }
void ULocalUserInfo::UserHasPrivilegeGeneric(EUserPrivilege Privilege, EPrivilegeCheckResult& privilegeResult) const{ }
void ULocalUserInfo::QueryFriends(){ }
void ULocalUserInfo::ResetFriends(){ }
void ULocalUserInfo::QueryFriendsAll(){ }
UOnlinePrivilegeObserver* ULocalUserInfo::GetPrivilegeObserverForSession(const USessionDefinition* SessionDefinition) const{ return nullptr; }
void ULocalUserInfo::RelationshipUpdated(const UE::Online::FRelationshipUpdated& RelationshipUpdated, UOnlineIntegrationBackend* Backend){ }
void ULocalUserInfo::QueryBlocked(UOnlineIntegrationBackend* Backend){ }
TFuture<bool> ULocalUserInfo::FetchFriendInfoAsync(UOnlineFriend* Friend, UOnlineIntegrationBackend* Backend){ return TFuture<bool>(); }
bool ULocalUserInfo::RetrievePrivileges(TOptional<EPrivilegeResults>& Result, EUserPrivilege PrivilegeToQuery) const{ return false; }
bool ULocalUserInfo::RetrievePrivileges(TOptional<EPrivilegeResults>& PrivilegeResult, EUserPrivilege PrivilegeToQuery, FOnPrivilegeQueryDone Callback) const{ return false; }
void ULocalUserInfo::DisplayPremiumInformation(const FOnShowStoreUIClosedDelegate2& OnShowStoreUIClosedDelegate) const{ }
bool ULocalUserInfo::HasUserBlocked(FUserNetIdBundles userBundlesToCheck){ return false; }
void ULocalUserInfo::QueryBlockedAll(){ }

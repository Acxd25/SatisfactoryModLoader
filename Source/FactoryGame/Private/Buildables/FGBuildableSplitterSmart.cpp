// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableSplitterSmart.h"
#include "Net/UnrealNetwork.h"

AFGBuildableSplitterSmart::AFGBuildableSplitterSmart() : Super() {
	this->mMaxNumSortRules = 64;
	this->mFactoryTickFunction.TickGroup = ETickingGroup::TG_PrePhysics;
	this->mFactoryTickFunction.EndTickGroup = ETickingGroup::TG_PrePhysics;
	this->mFactoryTickFunction.bTickEvenWhenPaused = false;
	this->mFactoryTickFunction.bCanEverTick = true;
	this->mFactoryTickFunction.bStartWithTickEnabled = true;
	this->mFactoryTickFunction.bAllowTickOnDedicatedServer = true;
	this->mFactoryTickFunction.TickInterval = 0.0;
	this->mToggleDormancyOnInteraction = true;
	this->NetDormancy = ENetDormancy::DORM_Initial;
}
void AFGBuildableSplitterSmart::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGBuildableSplitterSmart, mSortRules);
}
void AFGBuildableSplitterSmart::BeginPlay(){ Super::BeginPlay(); }
void AFGBuildableSplitterSmart::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGBuildableSplitterSmart::GetDismantleRefund_Implementation(TArray< FInventoryStack >& out_refund, bool noBuildCostEnabled) const{ }
void AFGBuildableSplitterSmart::Factory_Tick(float deltaTime){ }
FSplitterSortRule AFGBuildableSplitterSmart::GetSortRuleAt(int32 index) const{ return FSplitterSortRule(); }
void AFGBuildableSplitterSmart::AddSortRule(FSplitterSortRule rule){ }
void AFGBuildableSplitterSmart::RemoveSortRuleAt(int32 index){ }
void AFGBuildableSplitterSmart::SetSortRuleAt(int32 index, FSplitterSortRule rule){ }
void AFGBuildableSplitterSmart::SetSortRules(TArray< FSplitterSortRule > newSortRules){ }
bool AFGBuildableSplitterSmart::Factory_GrabOutput_Implementation( UFGFactoryConnectionComponent* connection, FInventoryItem& out_item, float& out_OffsetBeyond, TSubclassOf< UFGItemDescriptor > type){ return bool(); }
void AFGBuildableSplitterSmart::OnRep_SortRules(){ }
TArray<UFGFactoryConnectionComponent*> AFGBuildableSplitterSmart::GetAllOutputConnectionsForItem(const FInventoryItem& item, float deltaTime) const{ return TArray<UFGFactoryConnectionComponent*>(); }
void AFGBuildableSplitterSmart::FillDistributionTable(float deltaTime){ }
uint8 AFGBuildableSplitterSmart::EstimatedMaxNumGrabFromConveyor(UFGFactoryConnectionComponent* factoryConnection, float dt) const{ return uint8(); }

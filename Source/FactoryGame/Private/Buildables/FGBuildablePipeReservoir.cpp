// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildablePipeReservoir.h"
#include "Hologram/FGPipeReservoirHologram.h"
#include "Net/UnrealNetwork.h"

void FQuantizedReservoirIndicatorData::SetFlowFillPct(float pct){ }
float FQuantizedReservoirIndicatorData::GetFlowFillPct() const{ return float(); }
void FQuantizedReservoirIndicatorData::SetFlowDrainPct(float pct){ }
float FQuantizedReservoirIndicatorData::GetFlowDrainPct() const{ return float(); }
void FQuantizedReservoirIndicatorData::SetContentPct(float pct){ }
float FQuantizedReservoirIndicatorData::GetContentPct() const{ return float(); }
AFGBuildablePipeReservoir::AFGBuildablePipeReservoir() : Super() {
	this->mStackingHeight = 400.0;
	this->mStorageCapacity = 500.0;
	this->mHologramClass = AFGPipeReservoirHologram::StaticClass();
	this->PrimaryActorTick.TickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.EndTickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.bTickEvenWhenPaused = false;
	this->PrimaryActorTick.bCanEverTick = true;
	this->PrimaryActorTick.bStartWithTickEnabled = true;
	this->PrimaryActorTick.bAllowTickOnDedicatedServer = true;
	this->PrimaryActorTick.TickInterval = 0.0;
}
void AFGBuildablePipeReservoir::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGBuildablePipeReservoir, mIndicatorData);
}
void AFGBuildablePipeReservoir::BeginPlay(){ Super::BeginPlay(); }
void AFGBuildablePipeReservoir::EndPlay(const EEndPlayReason::Type endPlayReason){ Super::EndPlay(endPlayReason); }
void AFGBuildablePipeReservoir::Tick(float dt){ Super::Tick(dt); }
void AFGBuildablePipeReservoir::Factory_Tick(float dt){ }
FFluidBox* AFGBuildablePipeReservoir::GetFluidBox(){ return nullptr; }
TArray< class UFGPipeConnectionComponent* > AFGBuildablePipeReservoir::GetPipeConnections(){ return TArray<class UFGPipeConnectionComponent*>(); }
float AFGBuildablePipeReservoir::GetFluidContent() const{ return float(); }
float AFGBuildablePipeReservoir::GetFluidContentMax() const{ return float(); }
float AFGBuildablePipeReservoir::GetFlowFill() const{ return float(); }
float AFGBuildablePipeReservoir::GetFlowDrain() const{ return float(); }
float AFGBuildablePipeReservoir::GetFlowLimit() const{ return float(); }
TSubclassOf< UFGItemDescriptor > AFGBuildablePipeReservoir::GetFluidDescriptor() const{ return TSubclassOf<UFGItemDescriptor>(); }

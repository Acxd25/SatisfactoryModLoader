// This file has been automatically generated by the Unreal Header Implementation tool

#include "Hologram/FGResourceExtractorHologram.h"
#include "Net/UnrealNetwork.h"

AFGResourceExtractorHologram::AFGResourceExtractorHologram() : Super() {
	this->mDefaultExtractor = nullptr;
	this->mSnappedExtractableResource = nullptr;
	this->mUpgradeTarget = nullptr;
	this->mNeedsValidFloor = false;
	this->mUseBuildClearanceOverlapSnapp = false;
}
void AFGResourceExtractorHologram::BeginPlay(){ Super::BeginPlay(); }
void AFGResourceExtractorHologram::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGResourceExtractorHologram, mSnappedExtractableResource);
	DOREPLIFETIME(AFGResourceExtractorHologram, mUpgradeTarget);
}
bool AFGResourceExtractorHologram::TrySnapToActor(const FHitResult& hitResult){ return bool(); }
bool AFGResourceExtractorHologram::TryUpgrade(const FHitResult& hitResult){ return bool(); }
void AFGResourceExtractorHologram::SetHologramLocationAndRotation(const FHitResult& hitResult){ }
bool AFGResourceExtractorHologram::DoMultiStepPlacement(bool isInputFromARelease){ return bool(); }
bool AFGResourceExtractorHologram::IsValidHitResult(const FHitResult& hitResult) const{ return bool(); }
AActor* AFGResourceExtractorHologram::GetUpgradedActor() const{ return nullptr; }
bool AFGResourceExtractorHologram::CanNudgeHologram() const{ return bool(); }
void AFGResourceExtractorHologram::CheckValidPlacement(){ }
void AFGResourceExtractorHologram::ConfigureActor( AFGBuildable* inBuildable) const{ }
void AFGResourceExtractorHologram::CheckResourcesAvailable(){ }
void AFGResourceExtractorHologram::TrySnapToExtractableResource(const FHitResult& hitResult, FVector& newHitLocation){ }
bool AFGResourceExtractorHologram::CanOccupyResource(const TScriptInterface<  IFGExtractableResourceInterface >& resource) const{ return bool(); }
bool AFGResourceExtractorHologram::IsAllowedOnResource(const TScriptInterface<  IFGExtractableResourceInterface >& resource) const{ return bool(); }

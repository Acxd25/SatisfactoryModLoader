// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableConveyorAttachment.h"
#include "FGInventoryComponent.h"
#include "Hologram/FGConveyorAttachmentHologram.h"

AFGBuildableConveyorAttachment::AFGBuildableConveyorAttachment() : Super() {
	this->mInventorySize = 9;
	this->mBufferInventory = CreateDefaultSubobject<UFGInventoryComponent>(TEXT("StorageInventory"));
	this->mHologramClass = AFGConveyorAttachmentHologram::StaticClass();
	this->NetDormancy = ENetDormancy::DORM_DormantAll;
}
void AFGBuildableConveyorAttachment::BeginPlay(){ Super::BeginPlay(); }
bool AFGBuildableConveyorAttachment::ShouldShowCenterGuidelinesForHologram(const AFGHologram* hologram) const{ return bool(); }
void AFGBuildableConveyorAttachment::Dismantle_Implementation(){ }
AFGBuildableConveyorAttachmentLightweight::AFGBuildableConveyorAttachmentLightweight() : Super() {

}

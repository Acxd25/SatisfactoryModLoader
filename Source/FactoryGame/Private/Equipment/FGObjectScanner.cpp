// This file has been automatically generated by the Unreal Header Implementation tool

#include "Equipment/FGObjectScanner.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Equipment/FGEquipment.h"
#include "Net/UnrealNetwork.h"

AFGObjectScanner::AFGObjectScanner() : Super() {
	this->mScannerSkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ScannerSkeletalMesh"));
	this->mScannerSkeletalMesh->SetMobility(EComponentMobility::Movable);
	this->mBeepDelayMax = 1.5;
	this->mBeepDelayMin = 0.2;
	this->mDetectionRange = 500.0;
	this->mUpdateClosestObjectTime = 2.0;
	this->mClosestObject.Actor = nullptr;
	this->mClosestObject.ActorLocation = FVector::ZeroVector;
	this->mClosestObjectInScanRange = false;
	this->mNormalizedDistanceToClosestObject = 0.0;
	this->mAngleToClosestObject = 0.0;
	this->mScannerMenuWidgetClass = nullptr;
	this->mScreenMaterial3P = nullptr;
	this->mScreenMaterial1P = nullptr;
	this->mScannerMenuWidget = nullptr;
	this->mScreenMaterialInstance = nullptr;
	this->mScreenCanvasRenderTarget2D = nullptr;
	this->mCurrentScannableDescriptor = nullptr;
	this->mEquipmentSlot = EEquipmentSlot::ES_ARMS;
	this->mArmAnimation = EArmEquipment::AE_ObjectScanner;
	this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	this->RootComponent->SetMobility(EComponentMobility::Movable);
	this->mScannerSkeletalMesh->SetupAttachment(RootComponent);
}
void AFGObjectScanner::BeginPlay(){ Super::BeginPlay(); }
void AFGObjectScanner::Tick(float deltaTime){ Super::Tick(deltaTime); }
void AFGObjectScanner::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGObjectScanner, mClosestObject);
	DOREPLIFETIME(AFGObjectScanner, mCurrentScannableDescriptor);
}
void AFGObjectScanner::Equip(AFGCharacterPlayer* character){ }
void AFGObjectScanner::UnEquip(){ }
void AFGObjectScanner::OnCameraModeChanged_Implementation(ECameraMode newCameraMode){ }
void AFGObjectScanner::LoadFromItemState_Implementation(const FFGDynamicStruct& itemState){ }
FFGDynamicStruct AFGObjectScanner::SaveToItemState_Implementation() const{ return FFGDynamicStruct(); }
void AFGObjectScanner::AddEquipmentActionBindings(){ }
bool AFGObjectScanner::CycleForward(){ return bool(); }
bool AFGObjectScanner::CycleBackward(){ return bool(); }
bool AFGObjectScanner::HasValidCurrentDetails() const{ return bool(); }
void AFGObjectScanner::GetAvailableScannableDescriptors(TArray < TSubclassOf<UFGItemDescriptor> >& out_availableDescriptors){ }
void AFGObjectScanner::SetScannableDescriptor(TSubclassOf<UFGItemDescriptor> newScannableDescriptor, EFGScannerCycleDirection cycleDirection , bool shouldPlayAnimation){ }
void AFGObjectScanner::OnScannableResourceChanged(){ }
void AFGObjectScanner::OpenScannerInteractUI(){ }
void AFGObjectScanner::ForceCloseScannerInteractUI(){ }
void AFGObjectScanner::Input_OpenMenu(const FInputActionValue& actionValue){ }
void AFGObjectScanner::Input_Cycle(const FInputActionValue& actionValue){ }
AActor* AFGObjectScanner::GetClosestObjectIfLoaded() const { return nullptr; }
FVector AFGObjectScanner::GetClosestObjectLocation() const { return FVector(); }
void AFGObjectScanner::Server_SetScannableDescriptor_Implementation(TSubclassOf<UFGItemDescriptor> newScannableDescriptor, EFGScannerCycleDirection cycleDirection, bool shouldPlayAnimation){ }
void AFGObjectScanner::Multicast_PlayCycleAnimation_Implementation(EFGScannerCycleDirection cycleDirection){ }
void AFGObjectScanner::Multicast_PlayBeepAnimation_Implementation(){ }
void AFGObjectScanner::OnRep_CurrentScannableDescriptor(){ }
void AFGObjectScanner::OnRep_ClosestObject(){ }
bool AFGObjectScanner::Internal_CycleObjects(EFGScannerCycleDirection direction){ return bool(); }
void AFGObjectScanner::UpdateClosestObject(){ }
void AFGObjectScanner::UpdateDistanceToClosestObject(bool force){ }
void AFGObjectScanner::RecreateScreenMaterial(){ }
void AFGObjectScanner::DestroyScreenMaterial(){ }
void AFGObjectScanner::UpdateScreenMaterialData(float dt){ }
void AFGObjectScanner::RepaintScreenRenderTarget() const{ }
void AFGObjectScanner::Internal_PlayBeep(){ }
void AFGObjectScanner::Local_PlayBeep(){ }
void AFGObjectScanner::EquipDefaultScannableResource(){ }

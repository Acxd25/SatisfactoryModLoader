// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableWidgetSign.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

bool FFGSignPrefabLayoutWidgetConversionHelper::SerializeFromMismatchedTag(const FPropertyTag& PropertyTag, FArchive& Ar){ return bool(); }
AFGBuildableWidgetSign::AFGBuildableWidgetSign() : Super() {
	this->mSignProxyPlane = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProxyMesh"));
	this->mSignProxyPlane->SetMobility(EComponentMobility::Static);
	this->mSignTypeDescriptor = nullptr;
	this->mGainSignificanceDistance = 10000.0;
	this->mWidgetMaterial = nullptr;
	this->mEmissiveOnlySignMaterial = nullptr;
	this->mDefaultSignMaterial = nullptr;
	this->mWidgetClass = nullptr;
	this->mSoftActivePrefabLayout = nullptr;
	this->mForegroundColor = FLinearColor(0.0, 0.0, 0.0, 0.0);
	this->mBackgroundColor = FLinearColor(0.0, 0.0, 0.0, 0.0);
	this->mAuxilaryColor = FLinearColor(0.0, 0.0, 0.0, 0.0);
	this->mEmissive = 1.0;
	this->mGlossiness = 0.0;
	this->mDataVersion = 0;
	this->bForceBuildEffectSolo = true;
	this->mAllowColoring = false;
	this->mSignProxyPlane->SetupAttachment(RootComponent);
}
void AFGBuildableWidgetSign::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGBuildableWidgetSign, mDataVersion);
}
void AFGBuildableWidgetSign::BeginPlay(){ Super::BeginPlay(); }
void AFGBuildableWidgetSign::EndPlay(const EEndPlayReason::Type endPlayReason){ Super::EndPlay(endPlayReason); }
void AFGBuildableWidgetSign::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGBuildableWidgetSign::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGBuildableWidgetSign::OnConstruction(const FTransform& transform){ }
AFGBuildable* AFGBuildableWidgetSign::GetBuildable_Implementation(){ return nullptr; }
TSubclassOf< UFGSignTypeDescriptor > AFGBuildableWidgetSign::GetSignTypeDescriptor_Implementation(){ return TSubclassOf<UFGSignTypeDescriptor>(); }
FVector2D AFGBuildableWidgetSign::GetSignDimensions_Implementation(){ return FVector2D(); }
void AFGBuildableWidgetSign::GainedSignificance_Implementation(){ }
void AFGBuildableWidgetSign::LostSignificance_Implementation(){ }
UFGFactoryClipboardSettings* AFGBuildableWidgetSign::CopySettings_Implementation(){ return nullptr; }
bool AFGBuildableWidgetSign::PasteSettings_Implementation(UFGFactoryClipboardSettings* settings, class AFGPlayerController* player){ return bool(); }
void AFGBuildableWidgetSign::OnBuildEffectFinished(){ }
void AFGBuildableWidgetSign::OnBuildEffectActorFinished(){ }
void AFGBuildableWidgetSign::SetPrefabSignData(FPrefabSignData& signData, bool bFilterText){ }
void AFGBuildableWidgetSign::GetSignPrefabData(FPrefabSignData& out_signData) const{ }
void AFGBuildableWidgetSign::UpdateSignElements(FPrefabSignData& prefabSignData){ }
float AFGBuildableWidgetSign::GetAdjustedEmissiveValue(int32 Level) const{ return float(); }
bool AFGBuildableWidgetSign::WasLastChangedByLocalPlayer(){ return false; }
void AFGBuildableWidgetSign::GetDefaultSignMaps(TMap<FString, FString>& TextElementToDataMap, TMap<FString, int32>& IconElementToDataMap){ }
void AFGBuildableWidgetSign::UpdateRenderTargetReferenceInMaterialInstanceFromWidget(){ }
void AFGBuildableWidgetSign::OnRep_SignDataDirty(){ }
uint32 AFGBuildableWidgetSign::GenerateGUID(FPrefabSignData& signData, UClass* Prefab, FVector2D Size){ return uint32(); }
void AFGBuildableWidgetSign::ConvertToEmissiveOnly(FPrefabSignData& prefabSignData) const{ }
void AFGBuildableWidgetSign::SetupMaterialInstanceForProxyPlane(UMaterialInstanceDynamic* Instance, UTextureRenderTarget2D* RenderTarget){ }
bool AFGBuildableWidgetSign::IsEmissiveOnly(FPrefabSignData& prefabSignData, const TSubclassOf<UFGSignPrefabWidget>& activePrefabLayout){ return bool(); }
bool AFGBuildableWidgetSign::ShouldPrefabSignTick(FPrefabSignData& prefabSignData) const{ return bool(); }
UMaterialInterface* AFGBuildableWidgetSign::GetBackground(FPrefabSignData& prefabSignData) const{ return nullptr; }
void AFGBuildableWidgetSign::WaitForClientSubsystemsToInitializeSignPrefabData(){ }
void AFGBuildableWidgetSign::StartInitializeSignPrefabData(){ }
void AFGBuildableWidgetSign::InitializeSignPrefabData(){ }
void AFGBuildableWidgetSign::PreSerializedToBlueprint(){ }
void AFGBuildableWidgetSign::PostSerializedToBlueprint(){ }
void AFGBuildableWidgetSign::PostSerializedFromBlueprint(bool isBlueprintWorld){ }

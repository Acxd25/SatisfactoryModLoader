// Copyright Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "FactoryGame.h"
#include "CoreMinimal.h"
#include "FGBuildable.h"
#include "FGBuildableConveyorAttachment.generated.h"

/**
 * This is a struct that will assign an item to a certain connection. Used by splitters to cycle outputs so all items dont always go to one output
 */
USTRUCT()
struct FACTORYGAME_API FConnectionItemStruct
{
	GENERATED_BODY()

	FConnectionItemStruct() :
		Connection( nullptr ),
		Item( FInventoryItem() ),
		IndexInInventory( 0 ),
		OffsetBeyond( 0.0f ),
		Grabbed( false )
	{
	}

	FConnectionItemStruct( UFGFactoryConnectionComponent* inConnection, FInventoryItem inItem, float inOffsetBeyond, int32 indexInInventory ) :
		Connection( inConnection ),
		Item( inItem ),
		IndexInInventory( indexInInventory ),
		OffsetBeyond( inOffsetBeyond ),
		Grabbed( false )
	{
	}

	/** The connection to put the item on */
	UPROPERTY()
	class UFGFactoryConnectionComponent* Connection;

	/** The item to put on the connection */
	UPROPERTY()
	FInventoryItem Item;

	/** What is our index in the inventory component */
	int32 IndexInInventory;

	/** How far past the conveyor belt length this item is */
	float OffsetBeyond;

	/** To allow this to be thread safe, this bool marks if a table element has been consumed, to remove the need to delete from the table array */
	bool Grabbed;
};

/**
 * Base class for conveyor attachments such as the splitters and mergers.
 */
UCLASS()
class FACTORYGAME_API AFGBuildableConveyorAttachment : public AFGBuildable
{
	GENERATED_BODY()
public:
	AFGBuildableConveyorAttachment();

	// Begin AActor interface
	virtual void BeginPlay() override;
	// End AActor interface

	// Begin AFGBuildable interface
	virtual bool ShouldShowCenterGuidelinesForHologram( const AFGHologram* hologram ) const override;
	// End AFGBuildable interface

	//~ Begin IFGDismantleInterface
	virtual void Dismantle_Implementation() override;
	//~ End IFGDismantleInterface

	/** @return The buffer inventory for this attachment, always valid, server only. */
	FORCEINLINE class UFGInventoryComponent* GetBufferInventory() const { return mBufferInventory; }

protected:
	/** The size of the inventory for this attachment. Used to hold a buffer of incoming items */
	UPROPERTY( EditDefaultsOnly, Category = "Conveyor Attachment" )
	int32 mInventorySize;
	
	/** The buffer inventory to store the items in transit. */
	UPROPERTY( SaveGame )
	class UFGInventoryComponent* mBufferInventory;

	/** Cached input connections for faster lookup. */
	TArray< UFGFactoryConnectionComponent* > mInputs;

	/** Cached output connections for faster lookup. */
	TArray< UFGFactoryConnectionComponent* > mOutputs;

	/** Cached linear size of the inventory component*/
	int32 mCachedInventorySize;
};

/* Lightweight class containing no components, used for abstract instances etc. */
UCLASS()
class FACTORYGAME_API AFGBuildableConveyorAttachmentLightweight : public AFGBuildableConveyorAttachment
{
	GENERATED_BODY()
	AFGBuildableConveyorAttachmentLightweight();
};

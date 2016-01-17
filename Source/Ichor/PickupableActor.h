// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
//#include "CharacterInventoryComponent.h"
#include "PickupableActor.generated.h"


class UCharacterInventoryComponent;


// A PickupableActor can be picked up (and dropped again).
UCLASS()
class ICHOR_API APickupableActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickupableActor();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	

	UPROPERTY(Category = Mesh, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* Mesh;


	/* A PickupableActor is picked up if its ContainingCharacterInventoryComponent has a value (is not nullptr) */
	UFUNCTION(BlueprintCallable, Category = Inventory)
	bool IsPickedUp() const;

private:
	UCharacterInventoryComponent* m_ptrContainingCharacterInventoryComponent;
	
	
};

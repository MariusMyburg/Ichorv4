// Fill out your copyright notice in the Description page of Project Settings.

#include "Ichor.h"
#include "PickupableActor.h"


// Sets default values
APickupableActor::APickupableActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));

}

// Called when the game starts or when spawned
void APickupableActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APickupableActor::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}



bool APickupableActor::IsPickedUp() const
{
	return (m_ptrContainingCharacterInventoryComponent != nullptr);
}
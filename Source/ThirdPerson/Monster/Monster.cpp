// Fill out your copyright notice in the Description page of Project Settings.


#include "Monster.h"

#include "MonsterAIController.h"

// Sets default values
AMonster::AMonster()
{
	RootComponent=CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	SkeletalMeshComponent=CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
	SkeletalMeshComponent->SetupAttachment(RootComponent);
	
	AIControllerClass=AMonsterAIController::StaticClass();
	AutoPossessAI=EAutoPossessAI::PlacedInWorldOrSpawned;
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMonster::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMonster::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMonster::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AMonster::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
}

void AMonster::Attack()
{
}

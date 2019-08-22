// Fill out your copyright notice in the Description page of Project Settings.


#include "PositionReport.h"
#include "Gameframework/Actor.h"

// Sets default values for this component's properties
UPositionReport::UPositionReport()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	UE_LOG(LogTemp, Warning, TEXT("Position report reporting"));

}


// Called when the game starts
void UPositionReport::BeginPlay()
{
	Super::BeginPlay();
	//AActor *Player = GetOwner();
	//FString NameS = Player->GetName();
	//FString SName = GetOwner()->GetName();
	//FString SName = _
	//FString SPos = GetOwner()->GetActorLocation().ToString();
	//UE_LOG(LogTemp, Warning, TEXT("%s is thallee at %s"), *SName, *SPos);
	//UE_LOG(LogTemp, Warning, TEXT("asdfasasf"));
}


// Called every frame
void UPositionReport::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	
}


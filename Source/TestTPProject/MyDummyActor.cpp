// Fill out your copyright notice in the Description page of Project Settings.

#include "TestTPProject.h"
#include "MyDummyActor.h"


// Sets default values
AMyDummyActor::AMyDummyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyDummyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyDummyActor::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}


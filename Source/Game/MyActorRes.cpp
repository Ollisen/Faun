// Fill out your copyright notice in the Description page of Project Settings.

#include "Game.h"
#include "MyActorRes.h"


// Sets default values
AMyActorRes::AMyActorRes()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActorRes::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActorRes::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}


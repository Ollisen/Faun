// Fill out your copyright notice in the Description page of Project Settings.

#include "Game.h"
#include "MyFaun.h"


// Sets default values
AMyFaun::AMyFaun()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyFaun::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyFaun::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void AMyFaun::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);


}


// Fill out your copyright notice in the Description page of Project Settings.


#include "CheckerControll.h"


// Sets default values
AMyPlayerController::AMyPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	/* Initialize The Values */
	PawnToUse1= NULL;
	PawnToUse2= NULL;
	PawnToUse3= NULL;
	PawnToUse4= NULL;
	PawnToUse5= NULL;
	PawnToUse6= NULL;
	PawnToUse7= NULL;
	PawnToUse8= NULL;
 
	/* Make sure the PawnClass is Replicated */
	bReplicates = true;
}
 
void AMyPlayerController::BeginPlay()
{
	Super::BeginPlay();
 
	DeterminePawnClass();
}
 
// Pawn Class
void AMyPlayerController::DeterminePawnClass_Implementation()
{
	if (IsLocalController()) //Only Do This Locally (NOT Client-Only, since Server wants this too!)
	{
		/* Load Text File Into String Array */
		TArray<FString> TextStrings;
		const FString FilePath = FPaths::GameDir() + "Textfiles/PlayerSettings.txt";
 
	        /* Use PawnA if the Text File tells us to */
		if (TextStrings[0]== "1")
		{
			ServerSetPawn(PawnToUse1);
			return;
		}
 
	        /* Otherwise, Use PawnB :) */
		ServerSetPawn(PawnToUseB);
		return;
	}
}
 
bool AMyPlayerController::ServerSetPawn_Validate(TSubclassOf<APawn> InPawnClass)
{
	return true;
}
 
void AMyPlayerController::ServerSetPawn_Implementation(TSubclassOf<APawn> InPawnClass)
{
	MyPawnClass = InPawnClass;
 
	/* Just in case we didn't get the PawnClass on the Server in time... */
	GetWorld()->GetAuthGameMode()->RestartPlayer(this);
}
 
// Replication
void AMyPlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	DOREPLIFETIME(AMyPlayerController, MyPawnClass);
}
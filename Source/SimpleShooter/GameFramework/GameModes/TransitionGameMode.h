// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TransitionGameMode.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLESHOOTER_API ATransitionGameMode : public AGameModeBase
{
	GENERATED_BODY()

	virtual void GetSeamlessTravelActorList(bool bToTransition, TArray<AActor*>& ActorList) override;
};

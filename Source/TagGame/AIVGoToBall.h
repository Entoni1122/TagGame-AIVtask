// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIVBaseState.h"
#include "AIVGoToBall.generated.h"

/**
 * 
 */
UCLASS()
class TAGGAME_API UAIVGoToBall : public UAIVBaseState
{
	GENERATED_BODY()

public:
	void OnStateEnter(AAIStateMachineController* InStateMachine) override;
	void OnStateUpdate() override;
};

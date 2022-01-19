// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "Life.generated.h"

/**
 * 
 */
UCLASS()
class MEDIAENGINEERING_API ALife : public APlayerState
{
	GENERATED_BODY()
	

public:
	//Properties
	int lifes;
	bool isalive;
	//Functions
	virtual int increaseLife();
	virtual int increaseLife(int);
	virtual int decreaseLife();
	virtual int decreaseLife(int);
	virtual void tick(float DeltaTime);
	
protected:
	virtual void BeginPlay()override;
	const int maxlifes = 3;
};

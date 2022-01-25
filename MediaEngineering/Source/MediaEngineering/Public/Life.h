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
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int lifes;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool isalive;
	//Functions

	UFUNCTION(BlueprintCallable)
	virtual int increaseLife(int addlifes);

	UFUNCTION(BlueprintCallable)
	virtual int decreaseLife(int sublifes);

	UFUNCTION(BlueprintCallable)
	virtual int fullLifes();

	virtual void tick(float DeltaTime);
	
protected:
	virtual void BeginPlay()override;
	const int maxlifes = 3;
};

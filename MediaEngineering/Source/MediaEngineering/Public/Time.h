
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "Time.generated.h"

/**
 * 
 */
UCLASS()
class MEDIAENGINEERING_API ATime : public APlayerState
{
	GENERATED_BODY()
		// Atributes

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		int32 levelTime;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool timeexpired;




	// Sets default values for this actor's properties
	ATime();



public:
	// Called every frame
	void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void setLevelTime(int levelTimeSet);

	//void UpdateLevelTime();

	void LevelTimer();

protected:
	// Called when the game starts or when spawned
	void BeginPlay() override;
	//UFUNCTION(BlueprintNativeEvent)
	//void LevelTimeExpired();

	//virtual void LevelTimeExpired_Implementation();

	FTimerHandle LevelTimeHandle;




};

	


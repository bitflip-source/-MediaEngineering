
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "States.generated.h"




UCLASS()
class MEDIAENGINEERING_API AStates : public AActor
{
	GENERATED_BODY()

public:
	//Properties
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		int currentState = 0;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		int nextState = 1;

	// Sets default values for this actor's properties*/
	AStates();

	//Functions

	UFUNCTION(BlueprintCallable)
		void setNextState();

	UFUNCTION(BlueprintCallable)
		int getcurrentState();
		
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

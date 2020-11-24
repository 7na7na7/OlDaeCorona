#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TpsCharacter.generated.h"

UCLASS()
class OLDDAECORONA_API ATpsCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ATpsCharacter();

protected:
	void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	void MoveForward(const float axisValue);
	void MoveRight(const float axisValue);
	void LookUp(const float axisValue);

	void Jump();

	float mMoveForward;
	float mMoveRight;
	float mLookUp;
};
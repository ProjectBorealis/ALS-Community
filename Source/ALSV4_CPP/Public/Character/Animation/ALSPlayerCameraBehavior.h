// Project:         Advanced Locomotion System V4 on C++
// Copyright:       Copyright (C) 2020 Doğa Can Yanıkoğlu
// License:         MIT License (http://www.opensource.org/licenses/mit-license.php)
// Source Code:     https://github.com/dyanikoglu/ALSV4_CPP
// Original Author: Doğa Can Yanıkoğlu
// Contributors:    


#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Library/ALSCharacterEnumLibrary.h"

#include "ALSPlayerCameraBehavior.generated.h"

class AALSBaseCharacter;
class AALSPlayerController;

/**
 * Main class for player camera movement behavior
 */
UCLASS(Blueprintable, BlueprintType)
class ALSV4_CPP_API UALSPlayerCameraBehavior : public UAnimInstance
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = ALS)
	AALSBaseCharacter* ControlledPawn = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = ALS)
	APlayerController* PlayerController = nullptr;

protected:
	void NativeUpdateAnimation(float DeltaSeconds) override;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = ALS)
	EALSMovementState MovementState;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = ALS)
	EALSMovementAction MovementAction;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = ALS)
	EALSRotationMode RotationMode;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = ALS)
	EALSGait Gait;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = ALS)
	EALSStance Stance;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = ALS)
	EALSViewMode ViewMode;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = ALS)
	bool bRightShoulder;
};

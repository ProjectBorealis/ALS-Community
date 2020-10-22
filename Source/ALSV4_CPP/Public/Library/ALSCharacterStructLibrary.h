// Project:         Advanced Locomotion System V4 on C++
// Copyright:       Copyright (C) 2020 Doğa Can Yanıkoğlu
// License:         MIT License (http://www.opensource.org/licenses/mit-license.php)
// Source Code:     https://github.com/dyanikoglu/ALSV4_CPP
// Original Author: Doğa Can Yanıkoğlu
// Contributors:    


#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Library/ALSCharacterEnumLibrary.h"

#include "ALSCharacterStructLibrary.generated.h"

class UCurveVector;
class UAnimMontage;
class UAnimSequenceBase;
class UCurveFloat;

USTRUCT(BlueprintType)
struct FALSComponentAndTransform
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = ALS)
	FTransform Transform;

	UPROPERTY(EditAnywhere, Category = ALS)
	class UPrimitiveComponent* Component = nullptr;
};

USTRUCT(BlueprintType)
struct FALSCameraSettings
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = ALS)
	float TargetArmLength = 0.0f;

	UPROPERTY(EditAnywhere, Category = ALS)
	FVector SocketOffset;

	UPROPERTY(EditAnywhere, Category = ALS)
	float LagSpeed = 0.0f;

	UPROPERTY(EditAnywhere, Category = ALS)
	float RotationLagSpeed = 0.0f;

	UPROPERTY(EditAnywhere, Category = ALS)
	bool bDoCollisionTest = true;
};

USTRUCT(BlueprintType)
struct FALSCameraGaitSettings
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = ALS)
	FALSCameraSettings Walking;

	UPROPERTY(EditAnywhere, Category = ALS)
	FALSCameraSettings Running;

	UPROPERTY(EditAnywhere, Category = ALS)
	FALSCameraSettings Sprinting;

	UPROPERTY(EditAnywhere, Category = ALS)
	FALSCameraSettings Crouching;
};

USTRUCT(BlueprintType)
struct FALSCameraStateSettings
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = ALS)
	FALSCameraGaitSettings VelocityDirection;

	UPROPERTY(EditAnywhere, Category = ALS)
	FALSCameraGaitSettings LookingDirection;

	UPROPERTY(EditAnywhere, Category = ALS)
	FALSCameraGaitSettings Aiming;
};

USTRUCT(BlueprintType)
struct FALSMantleAsset
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = ALS)
	UAnimMontage* AnimMontage = nullptr;

	UPROPERTY(EditAnywhere, Category = ALS)
	UCurveVector* PositionCorrectionCurve = nullptr;

	UPROPERTY(EditAnywhere, Category = ALS)
	FVector StartingOffset;

	UPROPERTY(EditAnywhere, Category = ALS)
	float LowHeight = 0.0f;

	UPROPERTY(EditAnywhere, Category = ALS)
	float LowPlayRate = 0.0f;

	UPROPERTY(EditAnywhere, Category = ALS)
	float LowStartPosition = 0.0f;

	UPROPERTY(EditAnywhere, Category = ALS)
	float HighHeight = 0.0f;

	UPROPERTY(EditAnywhere, Category = ALS)
	float HighPlayRate = 0.0f;

	UPROPERTY(EditAnywhere, Category = ALS)
	float HighStartPosition = 0.0f;
};

USTRUCT(BlueprintType)
struct FALSMantleParams
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = ALS)
	UAnimMontage* AnimMontage = nullptr;

	UPROPERTY(EditAnywhere, Category = ALS)
	UCurveVector* PositionCorrectionCurve = nullptr;

	UPROPERTY(EditAnywhere, Category = ALS)
	float StartingPosition = 0.0f;

	UPROPERTY(EditAnywhere, Category = ALS)
	float PlayRate = 0.0f;

	UPROPERTY(EditAnywhere, Category = ALS)
	FVector StartingOffset;
};

USTRUCT(BlueprintType)
struct FALSMantleTraceSettings
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = ALS)
	float MaxLedgeHeight = 0.0f;

	UPROPERTY(EditAnywhere, Category = ALS)
	float MinLedgeHeight = 0.0f;

	UPROPERTY(EditAnywhere, Category = ALS)
	float ReachDistance = 0.0f;

	UPROPERTY(EditAnywhere, Category = ALS)
	float ForwardTraceRadius = 0.0f;

	UPROPERTY(EditAnywhere, Category = ALS)
	float DownwardTraceRadius = 0.0f;
};

USTRUCT(BlueprintType)
struct FALSMovementSettings
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = ALS)
	float WalkSpeed = 0.0f;

	UPROPERTY(EditAnywhere, Category = ALS)
	float RunSpeed = 0.0f;

	UPROPERTY(EditAnywhere, Category = ALS)
	float SprintSpeed = 0.0f;

	UPROPERTY(EditAnywhere, Category = ALS)
	UCurveVector* MovementCurve = nullptr;

	UPROPERTY(EditAnywhere, Category = ALS)
	UCurveFloat* RotationRateCurve = nullptr;

	float GetSpeedForGait(EALSGait Gait)
	{
		switch (Gait)
		{
		case EALSGait::Running:
			return RunSpeed;
		case EALSGait::Sprinting:
			return SprintSpeed;
		case EALSGait::Walking:
			return WalkSpeed;
		default:
			return RunSpeed;
		}
	}
};

USTRUCT(BlueprintType)
struct FALSMovementStanceSettings
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = ALS)
	FALSMovementSettings Standing;

	UPROPERTY(EditAnywhere, Category = ALS)
	FALSMovementSettings Crouching;
};

USTRUCT(BlueprintType)
struct FALSMovementStateSettings : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = ALS)
	FALSMovementStanceSettings VelocityDirection;

	UPROPERTY(EditAnywhere, Category = ALS)
	FALSMovementStanceSettings LookingDirection;

	UPROPERTY(EditAnywhere, Category = ALS)
	FALSMovementStanceSettings Aiming;
};

USTRUCT(BlueprintType)
struct FALSRotateInPlaceAsset
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = ALS)
	UAnimSequenceBase* Animation = nullptr;

	UPROPERTY(EditAnywhere, Category = ALS)
	FName SlotName;

	UPROPERTY(EditAnywhere, Category = ALS)
	float SlowTurnRate = 90.0f;

	UPROPERTY(EditAnywhere, Category = ALS)
	float FastTurnRate = 90.0f;

	UPROPERTY(EditAnywhere, Category = ALS)
	float SlowPlayRate = 1.0f;

	UPROPERTY(EditAnywhere, Category = ALS)
	float FastPlayRate = 1.0f;
};

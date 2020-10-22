// Project:         Advanced Locomotion System V4 on C++
// Copyright:       Copyright (C) 2020 Doğa Can Yanıkoğlu
// License:         MIT License (http://www.opensource.org/licenses/mit-license.php)
// Source Code:     https://github.com/dyanikoglu/ALSV4_CPP
// Original Author: Doğa Can Yanıkoğlu
// Contributors:    


#pragma once

#include "CoreMinimal.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "ALSCharacterEnumLibrary.h"


#include "ALSAnimationStructLibrary.generated.h"


USTRUCT(BlueprintType)
struct FALSDynamicMontageParams
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ALS)
	UAnimSequenceBase* Animation = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ALS)
	float BlendInTime = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ALS)
	float BlendOutTime = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ALS)
	float PlayRate = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ALS)
	float StartTime = 0.0f;
};

USTRUCT(BlueprintType)
struct FALSLeanAmount
{
	GENERATED_BODY()

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float LR = 0.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float FB = 0.0f;
};

USTRUCT(BlueprintType)
struct FALSVelocityBlend
{
	GENERATED_BODY()

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float F = 0.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float B = 0.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float L = 0.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float R = 0.0f;
};

USTRUCT(BlueprintType)
struct FALSTurnInPlaceAsset
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ALS)
	UAnimSequenceBase* Animation = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ALS)
	float AnimatedAngle = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ALS)
	FName SlotName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ALS)
	float PlayRate = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ALS)
	bool ScaleTurnAngle = true;
};

USTRUCT(BlueprintType)
struct FALSAnimCharacterInformation
{
	GENERATED_BODY()

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	FRotator AimingRotation;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	FRotator CharacterActorRotation;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	FVector Velocity;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	FVector RelativeVelocityDirection;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	FVector Acceleration;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	FVector MovementInput;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	bool bIsMoving = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	bool bHasMovementInput = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float Speed = 0.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float MovementInputAmount = 0.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float AimYawRate = 0.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float ZoomAmount = 0.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	EALSMovementState PrevMovementState = EALSMovementState::None;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	EALSViewMode ViewMode = EALSViewMode::ThirdPerson;
};


USTRUCT(BlueprintType)
struct FALSAnimGraphGrounded
{
	GENERATED_BODY()

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = ALS)
	EALSHipsDirection TrackedHipsDirection = EALSHipsDirection::F;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	bool bShouldMove = false; // Should be false initially

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	bool bRotateL = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	bool bRotateR = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = ALS)
	bool bPivot = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float RotateRate = 1.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float RotationScale = 0.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float DiagonalScaleAmount = 0.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float WalkRunBlend = 0.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float StandingPlayRate = 1.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float CrouchingPlayRate = 1.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float StrideBlend = 0.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float FYaw = 0.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float BYaw = 0.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float LYaw = 0.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float RYaw = 0.0f;
};

USTRUCT(BlueprintType)
struct FALSAnimGraphInAir
{
	GENERATED_BODY()

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	bool bJumped = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float JumpPlayRate = 1.2f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float FallSpeed = 0.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float LandPrediction = 1.0f;
};

USTRUCT(BlueprintType)
struct FALSAnimGraphAimingValues
{
	GENERATED_BODY()

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	FRotator SmoothedAimingRotation;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	FRotator SpineRotation;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	FVector2D AimingAngle;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float AimSweepTime = 0.5f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float InputYawOffsetTime = 0.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float ForwardYawTime = 0.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float LeftYawTime = 0.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float RightYawTime = 0.0f;
};

USTRUCT(BlueprintType)
struct FALSAnimGraphLayerBlending
{
	GENERATED_BODY()

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	int32 OverlayOverrideState = 0;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float EnableAimOffset = 1.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float BasePose_N = 1.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float BasePose_CLF = 0.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float Arm_L = 0.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float Arm_L_Add = 0.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float Arm_L_LS = 0.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float Arm_L_MS = 0.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float Arm_R = 0.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float Arm_R_Add = 0.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float Arm_R_LS = 0.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float Arm_R_MS = 0.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float Hand_L = 0.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float Hand_R = 0.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float Legs = 0.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float Legs_Add = 0.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float Pelvis = 0.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float Pelvis_Add = 0.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float Spine = 0.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float Spine_Add = 0.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float Head = 0.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float Head_Add = 0.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float EnableHandIK_L = 1.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float EnableHandIK_R = 1.0f;
};

USTRUCT(BlueprintType)
struct FALSAnimGraphFootIK
{
	GENERATED_BODY()

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float FootLock_L_Alpha = 0.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float FootLock_R_Alpha = 0.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	bool UseFootLockCurve_L;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	bool UseFootLockCurve_R;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	FVector FootLock_L_Location;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	FVector TargetFootLock_R_Location;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	FVector FootLock_R_Location;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	FRotator TargetFootLock_L_Rotation;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	FRotator FootLock_L_Rotation;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	FRotator TargetFootLock_R_Rotation;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	FRotator FootLock_R_Rotation;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	FVector FootOffset_L_Location;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	FVector FootOffset_R_Location;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	FRotator FootOffset_L_Rotation;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	FRotator FootOffset_R_Rotation;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	FVector PelvisOffset;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = ALS)
	float PelvisAlpha = 0.0f;
};

USTRUCT(BlueprintType)
struct FALSAnimTurnInPlace
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ALS)
	float TurnCheckMinAngle = 45.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ALS)
	float Turn180Threshold = 130.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ALS)
	float AimYawRateLimit = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ALS)
	float ElapsedDelayTime = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ALS)
	float MinAngleDelay = 0.75f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ALS)
	float MaxAngleDelay = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ALS)
	FALSTurnInPlaceAsset N_TurnIP_L90;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ALS)
	FALSTurnInPlaceAsset N_TurnIP_R90;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ALS)
	FALSTurnInPlaceAsset N_TurnIP_L180;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ALS)
	FALSTurnInPlaceAsset N_TurnIP_R180;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ALS)
	FALSTurnInPlaceAsset CLF_TurnIP_L90;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ALS)
	FALSTurnInPlaceAsset CLF_TurnIP_R90;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ALS)
	FALSTurnInPlaceAsset CLF_TurnIP_L180;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ALS)
	FALSTurnInPlaceAsset CLF_TurnIP_R180;
};

USTRUCT(BlueprintType)
struct FALSAnimRotateInPlace
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ALS)
	float RotateMinThreshold = -50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ALS)
	float RotateMaxThreshold = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ALS)
	float AimYawRateMinRange = 90.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ALS)
	float AimYawRateMaxRange = 270.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ALS)
	float MinPlayRate = 1.15f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ALS)
	float MaxPlayRate = 3.0f;
};

USTRUCT(BlueprintType)
struct FALSAnimConfiguration
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ALS)
	float AnimatedWalkSpeed = 150.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ALS)
	float AnimatedRunSpeed = 350.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ALS)
	float AnimatedSprintSpeed = 600.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ALS)
	float AnimatedCrouchSpeed = 150.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ALS)
	float VelocityBlendInterpSpeed = 12.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ALS)
	float GroundedLeanInterpSpeed = 4.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ALS)
	float InAirLeanInterpSpeed = 4.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ALS)
	float SmoothedAimingRotationInterpSpeed = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ALS)
	float InputYawOffsetInterpSpeed = 8.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ALS)
	float TriggerPivotSpeedLimit = 200.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ALS)
	float FootHeight = 13.5f;

	/** Threshold value for activating dynamic transition on various animations */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ALS)
	float DynamicTransitionThreshold = 8.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ALS)
	float IK_TraceDistanceAboveFoot = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ALS)
	float IK_TraceDistanceBelowFoot = 45.0f;
};

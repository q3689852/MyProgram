// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "FPSCharacter.generated.h"

UCLASS()
class DGZ_GAME_API AFPSCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFPSCharacter();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// 处理前后移动的输入。
	UFUNCTION()
		void MoveForward(float Value);

	// 处理左右移动的输入。
	UFUNCTION()
		void MoveRight(float Value);

	// 按下按键时设置跳跃标记。
	UFUNCTION()
		void StartJump();

	// 松开按键时清除跳跃标记。
	UFUNCTION()
		void StopJump();

	// FPS 摄像机。
	UPROPERTY(VisibleAnywhere)
		UCameraComponent* FPSCameraComponent;
	
	// 第一人称模型（手臂），仅对拥有玩家可见。
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
		USkeletalMeshComponent* FPSMesh;
	
};

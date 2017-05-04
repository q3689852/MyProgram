// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/HUD.h"
#include "FPSHUD.generated.h"

/**
 * 
 */
UCLASS()
class DGZ_GAME_API AFPSHUD : public AHUD
{
	GENERATED_BODY()
	
protected:
	// �⽫����Ļ������ơ�
	UPROPERTY(EditDefaultsOnly)
		UTexture2D* CrosshairTexture;

public:
	// HUD �������Ƶ��á�
	virtual void DrawHUD() override;
};


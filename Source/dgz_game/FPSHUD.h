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
	// 这将在屏幕中央绘制。
	UPROPERTY(EditDefaultsOnly)
		UTexture2D* CrosshairTexture;

public:
	// HUD 的主绘制调用。
	virtual void DrawHUD() override;
};


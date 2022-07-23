// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Peoject1HUD.generated.h"

UCLASS()
class APeoject1HUD : public AHUD
{
	GENERATED_BODY()

public:
	APeoject1HUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};


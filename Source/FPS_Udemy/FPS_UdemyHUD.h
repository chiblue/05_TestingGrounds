// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "FPS_UdemyHUD.generated.h"

UCLASS()
class AFPS_UdemyHUD : public AHUD
{
	GENERATED_BODY()

public:
	AFPS_UdemyHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};


#pragma once 

UENUM(BlueprintType)
enum class EWeaponType : uint8
{
	EWT_SubmachineGun UMETA(DisplayName = "SubmaachineGun"),
	EWT_AssaultRifle UMETA(DisplayNAme = "AssaultRifle"),
	EWT_Pistol UMETA(DisplayNAme = "Pistol"),

	EWT_MAX UMETA(DisplayName = "DefaultMAX")
};

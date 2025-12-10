#pragma once

UENUM(BluePrintType)
enum class ECharacterState : uint8
{
	ECS_Unequipped UMETA(DispalyName = "Unequipped"),
	ECS_EquippedOneHandedWeapon UMETA(DispalyName = "Equipped One-Handed Weapon"),
	ECS_EquippedTwoHandedWeapon UMETA(DispalyName = "Equipped Two-Handed Weapon")
};

UENUM(BluePrintType)
enum class EActionState : uint8
{
	EAS_Unoccupied UMETA(DisplayName = "Unoccupied"),
	EAS_Attackimg UMETA(DisplayName = "Attacking"),
	EAS_EquippingWeapon UMETA(DisplayName = "Equipping Weapon")
};
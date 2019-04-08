// This file is generated by xresloader, please don't edit it.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RoleUpgradeCfg.generated.h"


USTRUCT(BlueprintType)
struct FRoleUpgradeCfg : public FTableRowBase
{
    GENERATED_USTRUCT_BODY()

    // Start of fields
    /** Field Type: FString, Name: Name, skipped tag field**/

    /** Field Type: INT, Name: Value **/
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = XResConfig)
    int32 Value;

};
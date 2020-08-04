/**
 * This file is generated by xresloader 2.9.2, please don't edit it.
 * You can find more information about this xresloader on https://xresloader.atframe.work/ .
 * If there is any problem, please find or report issues on https://github.com/xresloader/xresloader/issues .
 */
#include "Config/ArrInArr.h"



UArrInArrHelper::UArrInArrHelper() : Super()
{
    UArrInArrHelper::ClearRow(this->Empty);
}

void UArrInArrHelper::ClearRow(FArrInArr& TableRow)
{
    TableRow.Name = TEXT("");
    TableRow.IntArr.Reset(0);
    TableRow.StrArr.Reset(0);
    TableRow.TestOnof = TEXT("");
    TableRow.TestInfoRole.Id = 0;
    TableRow.TestInfoRole.UnlockLevel = 0;
    TableRow.TestInfoRole.CostType = 0;
    TableRow.TestInfoRole.CostValue = 0;
    TableRow.TestInfoRole.Name = TEXT("");
    TableRow.TestInfoRole.DepTest.Id = 0;
    TableRow.TestInfoRole.DepTest.Name = TEXT("");
    TableRow.TestInfoRole.DepTest.Dep2.Id = 0;
    TableRow.TestInfoRole.DepTest.Dep2.Level = TEXT("");
    TableRow.TestInfoRole.TestArray.Reset(0);
    TableRow.TestInfoRole.IntAsString = TEXT("");
    TableRow.TestRoleUpgradeCfg.Id = 0;
    TableRow.TestRoleUpgradeCfg.Level = 0;
    TableRow.TestRoleUpgradeCfg.CostType = 0;
    TableRow.TestRoleUpgradeCfg.CostValue = 0;
    TableRow.TestRoleUpgradeCfg.ScoreAdd = 0;
}

void UArrInArrHelper::ClearDataRow(FArrInArr& TableRow) const
{
    UArrInArrHelper::ClearRow(TableRow);
}


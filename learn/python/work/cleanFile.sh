#!/bin/bash

# 清理删除文件或文件夹的规则
# 删除当前时间第前五天的相关文件文件

last_week=$(date -d last-week +%Y-%m-%d)
last_week_str=$(date -d last-week +%Y"年"%m"月"%d"日")

# 删除报表的旧文件夹
bao_biao_path="/data/baobiao01/"$last_week
if [ -x $bao_biao_path ];then
    rm -rf $bao_biao_path
fi

# 删除select临时文件的旧文件
select_file="/data/select/select_$last_week.xls"
if [ -f $select_file ];then
    rm  $select_file -f
fi

# 删除sjshuju临时的旧文件
sjshuju_file="/data/select/sjshuju_$last_week.xls"
if [ -f $sjshuju_file ];then
    rm  $sjshuju_file -f
fi

# 删除xbb的旧文件
xbb_file="/data/select/xbb_$last_week.xls"
if [ -f $xbb_file ];then
    rm  $xbb_file -f
fi

# 删除暴风影音Android_风秀_流量监测文件
bao_feng_file="/data/select/暴风影音Android_风秀_流量监测$last_week_str.xlsx"
if [ -f $bao_feng_file ];then
    rm  $bao_feng_file -f
fi

# 删除手机端数据文件
mobile_file="/data/select/手机端数据-$(date -d last-week +%Y%m%d).xlsx"
if [ -f $mobile_file ];then
    rm  $mobile_file -f
fi

# 删除运营文件
yunying_file="/data/select/运营$(date -d last-week +%Y%m%d).xlsx"
if [ -f $yunying_file ];then
    rm  $yunying_file -f
fi

echo "清除第前七天的文件任务完成~~~"

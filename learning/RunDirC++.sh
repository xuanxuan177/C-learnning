g++ -Wall -g -o $1 $1.cpp
rm -r $1.dSYM
cd ..
#RecentDir=$(pwd)
./learning/$1
rm ./learning/$1
# 此脚本用于测试单个cpp文件，输入参数为不带后缀的文件名（但是后缀必须为cpp）
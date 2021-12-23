#include <iostream>
using namespace std;
#include <cmath>
#include <ctime>
#include <string>
// 判断是否为闰年
int is_leap_year(int year){
	if(year%4==0){			
		if(year%100==0){
			if(year%400==0){
				return 1;
			}
		}else{
			return 1;
		}
	}
	return 0;
}
//获取年的月长
int get_days_in_month(int year){
	return is_leap_year(year);
}
int main(){
	int day_in_month[2][12]={
		{31,28,31,30,31,30,31,31,30,31,30,31},
		{31,29,31,30,31,30,31,31,30,31,30,31}
	};
	int day_in_year[2]={365,366};
	
	//需要查询的列表
	int person_nmb=1;     //每加一个人都要加一
	string name_list={"张皓程"}; 
	int bir_list[][4]={
		{2002,9,22}
	};
	//基于当前系统的当前日期/时间
   	time_t now = time(0);
   	tm *ltm = localtime(&now);
	int n_year=ltm->tm_year;
	//获取年龄
	for(int i=0;i<person_nmb;i++){
		int p_year=bir_list[i][1];
		int year=n_year-p_year+1900;
   		cout << name_list[i]<<"今年生日后" << year <<"岁"<< endl;
		//判断现在日期与出生日期间有几个闰年
		for(int i=p_year;i<=n_year;i++){
			
		}
	}
	return 0;
}

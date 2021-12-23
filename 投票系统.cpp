#include <iostream>
#include <string>
using namespace std;
int main(){
	//设置投票人数
    int person_nmb;
	cout<<"共多少人投票：";
	cin>>person_nmb;
	//设置投票可选择数
	int choose_nmb;
	cout<<"请输入共多少种投票选择：";
	//设置选项
	cin>>choose_nmb;
	string choose_list[choose_nmb];
	for(int i=0;i<choose_nmb;i++){
		cout<<"请输入第"<<i+1<<"个投票选择：";
		cin>>choose_list[i];
	}
	//输出选项供参考
	for(int i=0;i<choose_nmb;i++){
		cout<<i+1<<". "<<choose_list[i]<<endl;
	}
	//填入每个人的选择
	int person_list[person_nmb];
	for(int i=0;i<person_nmb;i++){
		cout<<"请输入第"<<i+1<<"个人的选择(请填入数字)：";
		cin>>person_list[i];
	}
	//初始化结果列表
	int result_list[choose_nmb]={};
	//对结果进行统计
	for(int i=0;i<person_nmb;i++){
		int result=person_list[i];
		result_list[result-1]++;
	}
	//输出结果
	for(int i=0;i<choose_nmb;i++){
		cout<<choose_list[i]<<":"<<result_list[i]<<endl;
	}
    return 0;
}


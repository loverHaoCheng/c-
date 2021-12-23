#include <iostream>
#include <string>
using namespace std;
int main(){
	//设置投票人数
    int person_nmb;
	cout<<"共多少人投票：";
	cin>>person_nmb;
	//设置投票可选择数
	int choose_nmb=3;
	//初始化选择列表
	string choose_list[choose_nmb]={"优秀(10~8)","良好(8~6)","差(6~0)"};
	//输出选项供参考
	for(int i=0;i<choose_nmb;i++){
		cout<<i+1<<". "<<choose_list[i]<<endl;
	}
	//填入每个人的选择
	int person_list[person_nmb];
	for(int i=0;i<person_nmb;i++){
		cout<<"请输入第"<<i+1<<"个人的成绩(10～0)：";
		cin>>person_list[i];
	}
	//初始化结果列表
	int result_list[choose_nmb]={};
	//对结果进行统计
	for(int i=0;i<person_nmb;i++){
		int result;
		if(person_list[i]>8){
			result=1;
		}else if(person_list[i]<6){
			result=3;
		}else{
			result=2;
		}

		switch(result){
			case 1:result_list[0]++;break;
			case 2:result_list[1]++;break;
			case 3:result_list[2]++;break;
		}
	}
	//输出结果
	for(int i=0;i<choose_nmb;i++){
		cout<<choose_list[i]<<":"<<result_list[i]<<endl;
	}
}


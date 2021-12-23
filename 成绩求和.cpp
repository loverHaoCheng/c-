#include <iostream>
#include <string>
using namespace std;
int main(){
	//初始化姓名列表
	int p_nmb;
	cout<<"请输入统计的人数：";
	cin>>p_nmb;
	string name_ls[p_nmb];
	for(int i=0;i<p_nmb;i++){
		cout<<"请输入第"<<i+1<<"个人的姓名：";
		cin>>name_ls[i];
	}
	//初始化成绩列表
	int class_nmb;
	cout<<"请输入录入的科目数量：";
	cin>>class_nmb;
	int score[p_nmb][class_nmb+2];
	//成绩录入
	for(int i=0;i<p_nmb;i++){
		for(int j=0;j<class_nmb;j++){
			cout<<"请输入第"<<i+1<<"个人的第"<<j+1<<"门成绩：";
			cin>>score[i][j];
		}
	}
	//计算成绩总和、平均分
	for(int i=0;i<p_nmb;i++){
		int sum=0,avg;
		for(int j=0;j<class_nmb;j++){
			sum+=score[i][j];
		}
		avg=sum/class_nmb;
		score[i][class_nmb]=sum;
		score[i][class_nmb+1]=avg;
	}
	//打印结果
	cout<<"姓名\t";
	for(int i=0;i<class_nmb;i++){
		cout<<"第"<<i+1<<"门\t";
	}
	cout<<"总分\t平均分\t"<<endl;
	for(int i=0;i<p_nmb;i++){
		cout<<name_ls[i]<<"\t";
		for(int j=0;j<class_nmb+2;j++){
			cout<<score[i][j]<<"\t";
		}
		cout<<endl;
	}
    return 0;
}


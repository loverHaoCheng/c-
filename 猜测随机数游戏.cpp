#include <iostream>
#include <ctime>
using namespace std;
int main(){
    srand((unsigned int)time(NULL));
	int num = rand()% 100;
	int cai_nmb=0;
	while(1){
		cai_nmb++;
		cout<<"请输入您要猜测的数（0～100）：";
		int result;
		cin>>result;
		if(result==num){
			cout<<"恭喜你，输入正确！！"<<endl;
			cout<<"您一共猜了"<<cai_nmb<<"次！"<<endl;
			break;
		}else if(result<num){
			cout<<"您输入的数偏小！"<<endl;
		}else{
			cout<<"您输入的数偏大！"<<endl;
		}
	}
    return 0;
}


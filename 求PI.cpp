#include <iostream>
using namespace std;
int main(){
	double i=1;
	int choose=0;
	double nmb=0;
	while((1/i)>10e-6){
		if(choose%2==0){
			nmb=nmb+(1/i);
		}else{
			nmb=nmb-(1/i);
		}
		choose++;
		i+=2;
	}
	double PI=4*nmb;
	cout<<PI<<endl;
    return 0;
}


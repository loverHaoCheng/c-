#include <iostream>
using namespace std;
int main(){
	int nmb=100;
	while(nmb<1000){
		int gewei=nmb%10;
		int shiwei=(nmb/10)%10;
		int baiwei=nmb/100;
		if(gewei*gewei*gewei+shiwei*shiwei*shiwei+baiwei*baiwei*baiwei==nmb){
			cout<<nmb<<endl;
		}
		nmb++;
	}
    return 0;
}


#include <iostream>
using namespace std;

void paixu(int* nmb_list,int nmb){
	for(int i=nmb-1;i>=0;i--){
		for(int j=0;j<nmb-1;j++){
			if(nmb_list[j]>nmb_list[j+1]){
				int change;
				change=nmb_list[j];
				nmb_list[j]=nmb_list[j+1];
				nmb_list[j+1]=change;
			}
		}
	}
}
void printlist(int *list,int nmb){
	for(int i=0;i<nmb;i++){
		cout<<list[i]<<endl;
	}
}
int main(){
	int list[]={1,23,4,56,7,3,34,5};
	int nmb=sizeof(list)/sizeof(list[0]);
	paixu(list,nmb);
	printlist(list,nmb);
}

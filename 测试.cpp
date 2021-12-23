#include <iostream>
using namespace std;
#include "listfunc.h"
int main(){
    int list[]={1,2,3,4,2,3,1,5};
	int llong=sizeof(list)/sizeof(list[0]);
	list_upsort(list,llong);
	onelist_print(list,llong);
	list_downsort(list, llong);
	onelist_print(list,llong);
	int list1[2][3]={};
	twolist_print(2, 3,(int **) list);
}


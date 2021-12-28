#include <iostream>
using namespace std;
void list_upsort(int *list,int listlong);
void list_downsort(int *list,int listlong);
void onelist_print(int *list,int listlong);
void twolist_print(int listrow,int listcol,int **list);


void list_upsort(int *list,int listlong){
	for(int i=listlong-1;i>0;i--){
		for(int j=0;j<i-1;j++){
			if(list[j]>list[j+1]){
				int change=list[j];
				list[j]=list[j+1];
				list[j+1]=change;
			}
		}
	}
}


void list_downsort(int *list,int listlong){
	for(int i=listlong-1;i>0;i--){
		for(int j=0;j<i;j++){
			if(list[j]<list[j+1]){
				int change=list[j];
				list[j]=list[j+1];
				list[j+1]=change;
			}
		}
	}
}

void onelist_print(int *list,int listlong){
	for(int i=0;i<listlong;i++){
		cout<<"第"<<i+1<<"个元素为:"<<list[i]<<endl;
	}
	cout<<endl;
}


void twolist_print(int listrow,int listcol,int **list){
	for(int i=0;i<listrow;i++){
		for(int j=0;j<listcol;j++){
			cout<<"第"<<i+1<<"行第"<<j+1<<"列为："
				<< *((int*)list + j + i *listcol)
				<<endl;
		}
	cout<<endl;
	}
}

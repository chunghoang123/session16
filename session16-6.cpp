#include<stdio.h>
int timKiem(int *arr,int size,int value){
	for(int i=0;i<size;i++){
		if(arr[i]==value){
			return i;
		}
	}
	return -1;
}
int main(){
	int array[]={1,2,3,4,5};
	int size=sizeof(array)/sizeof(int);
	int timValue=4;
	int position=timKiem(array,size,timValue);
	if(position!=-1){
		printf("phan tu dc tim thay %d",position);
	}else{
		printf("phan tu ko ton tai trong mang");
	}
	return 0;
}

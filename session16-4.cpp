#include<stdio.h>
void inarray(int *arr,int size){
	for(int i=0;i<size;i++){
		printf("%d, ",arr[i]);
	}
}
int main(){
	int array[]={1,2,3,4,5};
	int size=sizeof(array)/sizeof(int);
	inarray(array,size);
	return 0;
	
}

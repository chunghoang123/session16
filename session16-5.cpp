#include<stdio.h>
	void update(int *arr,int size,int newValue,int position){
		if(position>=0&&position<size){
			arr[position]=newValue;
		}else{
			printf("sai vi tri\n");
		}
	}
void inArray(int *arr,int size){
	for(int i=0;i<size;i++){
		printf("%d, ",arr[i]);
	}
	printf("\n");
}
int main(){
	int array[]={1,2,3,4,5};
	int size=sizeof(array)/sizeof(int);
	printf("mang ban dau\n");
	inArray(array,size);
	update(array,size, 92,1);
	
	printf("mang sau cap nhat\n");
	inArray(array,size);
	return 0;
}

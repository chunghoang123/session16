#include<stdio.h>
void tong(int *a,int *b,int *result){
	*result=*a+*b;
	
}
int main(){
	int num1=10,num2=20,result=0;
	tong(&num1,&num2,&result);
	printf("tong bang: %d",result);
}

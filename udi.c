#include<stdio.h>
int max(int a,int b){
	int max;
	if(a<b){
		max = b;
	}
	else{
		max = a;
	}	return max;
}
int main(){
	int num1,num2;
	scanf("%d %d",&num1,&num2);
	int large;
	large=max( num1,num2);
	printf("%d",large);
	
	return 0;
}

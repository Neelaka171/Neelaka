#include<stdio.h>

int main(){
	int x,y,temp;
	printf("enter your values:");
	scanf("%d %d",&x,&y);
	printf("before swapping value of x:%d and y:%d",x,y);
	
	//swap
	temp=x;
	x=y;
	y=temp;
	printf("afer swap value of x:%d y:%d",x,y);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

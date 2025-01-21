#include<stdio.h>

int sum(int,int);

int main(){
	int a,b;
	a=20;
	b=40;
	
	int s = sum(a,b);
	printf("sum is:%d",s);
	
}

int sum(int x,int y){
	return x+y;
}

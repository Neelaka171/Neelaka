#include<stdio.h>

int main(){
	int Sarea;
	int Tarea;
	int base,height;
	int side;
	printf("enter the side of square:");
	scanf("%d",&side);
	if(Sarea=side*side){
		printf("answer is %d",Sarea);
	} 
	printf("\n");
	
	printf("enter base of triangular:");
	scanf("%d",&base);
	printf("enter height of triangular:");
	scanf("%d",&height);
	
	if(Tarea=base*height*1/2){
		printf("triangular area is:%d",Tarea);
	}
	
	
	
	
	
	
	
	return 0;
}

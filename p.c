#include<stdio.h>

int main(){
	int marks;
	printf("enter your marks");
	scanf("%d",&marks);
	/*if(marks<=35){
		if(marks>=0){
	
		printf("fail");
       }else{
       	printf("invalid");
	   }
	}
	else{
		if(marks<=100){
			printf("pass");
		}else{
			printf("invalid");
		}		
		
	}
	(marks>=35)?printf("pass"):printf("fail");
	*/
	if(marks>=35 && marks<=100){
		printf("pass");
	}
	else if(marks<=35&&marks>=0){
		printf("fail");
	}
	else{
		printf("invalid");
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}

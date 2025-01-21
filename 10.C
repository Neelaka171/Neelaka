#include<stdio.h>
int main(){
	int marks;
	printf("enter your marks:");
	scanf("%d",&marks);
	if(marks>=70){
		printf("CSC1113 MARKS:'A'");
	}else if(marks>60&&marks<69){
		printf("marks:B");
	}else if(marks>50&&marks<59){
		printf("marks:C");
	}else if(marks>40&&marks<49){
		printf("marks:D");
	}else if(marks>30&&marks<39){
	
		printf("marks:E");
}
	
	
	
	
	
	return 0;
}

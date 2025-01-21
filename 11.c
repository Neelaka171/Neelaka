#include<stdio.h>
int main(){
	int num1,num2,operation,ans;
	printf("enter num1:");
	scanf("%d",&num1);
	
	printf("enter num2:");
	scanf("%d",&num2);
	printf("\t operation \n");
	printf("\t +   ->1\n");
	printf("\t -   ->2\n");
	printf("\t *   ->3\n");
	printf("\t /   ->4\n");
	printf("chosse your operator\n\n");
	scanf("%d",&operation);
	switch(operation){
		case 1:
		ans=num1+num2;
		printf("addition:%d",ans);
		break;
		case 2:
		ans=num1-num2;
		printf("subs:%d",ans);
		break;
		case 3:
		ans=num1*num2;
		printf("answer:%d",ans);
		break;
		case 4:
		ans=num1/num2;
		printf("division:%d",ans);
		break;
		break;
	}
	
	
	
	
	
	
	return 0;
}

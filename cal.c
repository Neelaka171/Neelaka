#include<stdio.h>
int main(){
	int num1,num2,operation,ans;
	printf("enter your number 1:\n");
	scanf("%d",num1);
	printf("enter number 2:\n");
	scanf("%d",num2);
		printf("\t operations\n");
		printf("\t addition       ->1\n");
		printf("\t substraction   ->2\n");
		printf("\t multiplication ->3\n");
		printf("\t division       ->4\n");
		printf("\t reminders      ->5\n");
		printf("\t choose operation:");
		scanf("%d",&operation);
	switch(operation){
		case '1':
			ans=num1+num2;
			printf("answer for add:%d",ans);
			break;
		case '2':
			ans=num1-num2;
			printf("%d",ans);
			break;
		case '3':
			ans=num1*num2;
			printf("answer for mult:%d",ans);
			break;
		case '4':
			ans=num1/num2;
			printf("answer for div:%d",ans);
			break;
		case '5':
			ans=num1%num2;
			printf("answer for adreminder:%d",ans);
			break;
		default:
			printf("moda pakaya");
		
	}
	
	
	
	return 0;
}

#include<stdio.h>

int main(){
     int A;
	 int B;
	 int C;
	 printf("enter your numbers");
	 scanf("%d %d %d",&A,&B,&C);
	  
	int largest=A;
	if(B>largest){
		largest=B;
		
	}if (C>largest){
		largest=C;
	}
	printf("largest number is %d",largest);
	
}

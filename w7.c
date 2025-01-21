#include<stdio.h>

int main(){
	int i,j,k,l;
	/*for(i=0;i<5;i++){
		for(j=0;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	for(i=0;i<5;i++){
		for(j=5;i<j;j--){
			printf("*");
		}
		printf("\n");
	}*/
	for(i=0;i<5;i++){
		for(j=5;j>=i;j--)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
		    printf("*");
		}
		for(l=0;l<=i;l++)
		{
			printf("*");
		}
	
	printf("\n");
    }
	
	
	
	
	
	
	
	
	return 0;
}

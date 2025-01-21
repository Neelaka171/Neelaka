#include<stdio.h>

int main(){
	int i,j;
	for(i=1;i<=10;i++){
		printf("multi plication table for %d\n",i);
		for(j=1;j<=12;j++){
			printf("%d\t",j*i);
		}
		printf("\n\n");
		
	}
}

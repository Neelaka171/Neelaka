#include<stdio.h>
int main(){
	int array1[2][3]={{1,2,3},{4,5,6}};
	int i,j;
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
		printf("enter value for disp[%d][%d]=%d",i,j,array1[i][j]);
		printf("\n");
		}
	
	}
	printf("two dimensional array elements:\n %d %d %d\n%d %d %d",j,j+1,j+2,j+4,j+5,j+6);
}

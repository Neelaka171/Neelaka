#include<stdio.h>
int main(){
	/*int numbers[10]={21,22,23,24,25,26,27,28};
	int i;
	printf("array element\n");
	for(i=0;i<10;i++){
		printf("%d\n",numbers[i]);
	}*/
	/*int n=5;
	int numbers[5];
	
	numbers[0]=12;
	numbers[1]=22;
	numbers[2]=33;
	numbers[4]=44;
	numbers[6]=66;
	
	int i;
	for(i=0;i<7;i++){
		printf("%d\n",numbers[i]);
		
		
	}
	int array1[3][4]={{6,7,8,9},{8,9,6,7},{3,8,88,99}};
	
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%d\n",array1[i][j]);
		}
		
		printf("\n");
		
	}*/
	int array2[2][4][4]={{{3,4,56,6},{2,4,6,8},{3,3,4,5},{6,7,78,89}},
						{{1,1,2,2},{2,3,4,5},{8,9,0,0},{8,88,89,98}
						}};
	int i,j,k;
	for(i=0;i<2;i++){
		for(j=0;j<4;j++){
			for(k=0;k<4;k++){
				printf("a[%d][%d]=%d\n",i,j,array2[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	return 0;
}

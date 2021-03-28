#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void PRTF(int a[8][6]){
	int i,j;
	for(i=0;i<8;i++){
		for(j=0;j<6;j++){
			printf("%d ",a[i][j]);
		}
	}
}
void SUMF(int a[8][6], int b[8][6]){
	int i, j ,sum=0;
	for(i=0; i<8;i++){
		for(j=0;j<6;j++){
			sum+= a[i][j] + b[i][j];
		}
	}
	printf("\nsum is =%d\n",sum);
}
int main(){
	int A[8][6],i,j;
	srand(time(NULL));
	for(i=0;i<8;i++){
		for(j=0;j<6;j++){
			A[i][j]= rand()%9000000 +1000000;
		}
	}
	int B[8][6];
	for(i=0;i<8;i++){
		for(j=0;j<6;j++){
			B[i][j]= rand()%9000000 +1000000;
		}
	}
	PRTF(A);
	SUMF(A,B);
	PRTF(B);
	
}

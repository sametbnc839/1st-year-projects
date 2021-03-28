#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int FUNCTION( int A[7][5], int B[]){
	int i, j, l ,z, k;
	for(i=0;i<6;i++){
		for(j=0;j<4;j++){
			for(z=2; z<A[i][j]/2 ; z++){
				if(A[i][j]%z==0){
					k=1;
					break;
				}
			}
			if(k==0){
					B[l]=A[i][j];
					l++;
			}
			k=0;
		}
		
	}
	return l;
}
int main(){
	int A[7][5], B[35],i,j,z,k=0,l=0;
	srand(time(NULL));
	for(i=0;i<6;i++){
		for(j=0;j<4;j++){
			A[i][j]= rand()%97 + 2;
		}
	}
	printf("Elements of A =");
	for(i=0;i<6;i++){
		for(j=0;j<4;j++){
			printf("%d ",A[i][j] );
		}
	}
	FUNCTION(A,B);
	printf("\nSize of B is %d",FUNCTION (A,B));
	printf("\nNumbers that inserted in B=");
	for(i=0; i<=l-1;i++){
		printf("%d ",B[i]);
	}
	return 0;
}

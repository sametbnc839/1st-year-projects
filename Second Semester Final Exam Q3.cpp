#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
	int n,i;
	srand(time(NULL));
	for(i=0;i<9;i++){
		n= rand()%70 + 20;
		printf("%d ",n);
	}
	
}

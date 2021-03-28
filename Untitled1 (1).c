#include <stdio.h>
#define N 20

// Sort algorithm with Bubble Sort
void sortArray(float array[], int n){
	
	int i,j;
	float temp;
	for(i=0;i<n;i++){
		for(j=1;j<n-i;j++)
		if(array[j-1]>array[j]){
			temp=array[j-1];
			array[j-1]=array[j];
			array[j]=temp;
		}
	}
	
}

// This function returns how many platforms do we have to have for trains.
int countPlatforms(float arrived[], float departed[], int n){
	
	int i, j, max=0, count=0;
	int platforms[6]; 
	
	// When the train enters the platform, it finds how many platforms are full.
	for(i=0;i<n;i++){
		platforms[i]=1;
		for(j=i-1;j>=0;j--){
			if(departed[j]>arrived[i]){
				platforms[i] = platforms[i] + 1;
			}
		}
	}
	// It compares platforms array's elements and find max element.
	for(i=0;i<n;i++){
		if(max<platforms[i]){
			max = platforms[i];
		}
	}
	
	return max;
}

int main(){
	
	float arrived[N] = {2.00, 2.10, 2.40, 3.10, 4.00, 4.30};
	float departed[N] = {2.30, 2.50, 3.50, 3.40, 4.20, 5.00};
	int n=6, platform;
	sortArray(arrived,n);
	sortArray(departed,n);

	platform = countPlatforms(arrived, departed, n);
	printf("%d", platform);
	
	return 0;
}

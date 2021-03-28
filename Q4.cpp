#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char studentname[20], studentLname[20];
	char fstudentname[20], fstudentLname[20];
	int ID, k=0;
	FILE *sg;
	sg = fopen("C:\\Users\\USER\\Desktop\\inf.txt","r");
	fgets(studentname, sizeof(studentname), sg);
	fgets(studentLname, sizeof(studentname), sg);
	while(!feof(sg)){
		if(strcmp(studentname,fstudentname)==0&&strcmp(studentLname,fstudentLname)==0){
			printf("It has found");
			k=1;
			break;
		}
	}
	if(k==0){
		printf("Inputs are not matched or there is no student such that");
	}
	fclose(sg);
}

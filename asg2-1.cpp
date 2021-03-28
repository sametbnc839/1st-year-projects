#include <stdio.h>

void Insert(int A[])
{
	int pass=0,ID,i;
	printf("Enter the ID to be stored:");
	scanf("%d",&ID);
	for(i=ID%100;i<100;i++)
	{
		if(A[i]=-1)
		{
			A[i]=ID;
			pass=1;
			break;
		}
		else continue;
		
	}
	if(pass==0)
	{
		for(i=0;i<ID%100;i++)
		{
			if(A[i]==-1)
			{
				A[i]=ID;
				pass=0;
				break;
			}
			else continue;
		}
	}
	if(pass==0)
	{
		printf("Could not assign: Memory full.\n");
	}
	else
	{
		printf("Assign to index %d.\n",i);
	}
}

void Search(int A[])
{
	int pass=0,ID,i;
	printf("Enter the ID to be found:");
	scanf("%d",&ID);
	for(i=0;i<100;i++)
	{
		if(A[i]==ID)
		{
			pass=1;
			break;
		}
		else continue;
	}
	if(pass=1)
	{
		printf("ID %d has been found into index %d",A[i],i);
	}
	else
	{
		printf("ID %d is not found",A[i]);
	}
	return;
	
	
}

void Show_All_IDs(int A[])
{
    int i;
    for(i=0; i<100; i++)
    {
        if(A[i]!=-1)
        {
		printf("A[%d]=%d",i,A[i]);
		}
    }
    return;
}
int main()
{
    int choice,A[100],i;
    for(i=0; i<100; i++) A[i]=-1;
    do
    {
        printf("==========MENU==========\n");
        printf("1. Insert a new ID\n");
        printf("2. Find an ID\n");
        printf("3. Show all IDs\n");
        printf("4. Exit\n");
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1:
				Insert(A);
				break;
            case 2:
				Search(A);
				break;
            case 3:
				Show_All_IDs(A);
				break;
            case 4:
				printf("Thanks for using Indexr!");
				break;
        }
    }while(choice!=4);
}

#include<stdio.h>

#define VERTEX 5
int discovered[VERTEX];

void dfs(int arr[VERTEX][VERTEX],int strt)
{
	//printf("Hello");
	int i=0;
	
	discovered[strt] = 1;
	
	for(i=0;i<VERTEX;i++)
	{
		if(arr[strt][i] == 1 && discovered[i] == 0)
		{
			discovered[i] = 1;
			printf("%d\t",i);
			dfs(arr,i);
						
		}
	}
}

int main()
{
	int arr[VERTEX][VERTEX]={
			{0,1,1,0,0},
			{1,0,1,0,1},
			{1,1,0,1,1},
			{0,0,1,0,0},
			{0,1,1,0,0}
		};

	int strt;

	scanf("%d",&strt);
	printf("%d\t",strt);
	dfs(arr,strt);
	//printf("%d\t",strt);

	return 0;
}

#include<stdio.h>
//int puller(int arr[i][j],int sz)
//{
//	int i = 0;
//	for(i=0;i<sz-1;i++)
//
//}


int main()
{

	int arr[5][5] = { {1,2,3,4},{5,6,7} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for(i=0;i < 5;i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("&arr[%d][%d]%p\n",i,j, &arr[i][j]);
		}
		
	}
	return 0;
}
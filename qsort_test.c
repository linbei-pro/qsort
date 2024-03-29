#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int com(const void *a,const void*b)
{
	return (*(int*)a-*(int *)b);
}
int uncom(const void *a,const void*b)
{
	return (*(int*)b-*(int *)a);
}


int main(int argc, char *argv[]) {
	int i=0,j=0;
	int arr[10]={34,76,17,1,25,38,77,56,52,99};
	int size=sizeof(arr)/sizeof(arr[0]);
	for( i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	qsort(arr,size,sizeof(int),com);
	for( j=0;j<size;j++)
	{
		printf("%d ",arr[j]);
	}
	printf("\n");
	qsort(arr,size,sizeof(int),uncom);
	for( i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}

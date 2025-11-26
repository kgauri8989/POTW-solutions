#include <stdio.h>
int main()
{
	int n;
	printf("Enter the size of the array: ");
	fflush(stdout);
	scanf("%d",&n);

	int arr[n];
	int i,j,temp;
	//asking user for array elements input
	printf("Enter elements of the array\n");
	for(i=0;i<n;i++)
	{
		printf("arr[%d] is: ",i);
		fflush(stdout);
		scanf("%d",&arr[i]);
	}
	//printing the user input array
	for(i=0;i<n;i++)
	{
		printf("\t%d",arr[i]);
	}
	//sorting array
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(arr[i]<arr[j])
			{
				temp = arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	//printing sorted array
	printf("\nSorted array is\n");
	for(i=0;i<n;i++)
	{
		printf("\t%d",arr[i]);
	}
return 0;
}

#include <stdio.h>
int main()
{
	int i,j,n;
	int temp;
	printf("Enter size of array: ");
	fflush(stdout);
	scanf("%d",&n);

	if(0<n && n<=1000000)
	{
		int arr[n];
		printf("Enter array elements\n");
		for(i=0;i<n;i++)
		{
			printf("arr[%d]: ",i);
			fflush(stdout);
			scanf("%d",&arr[i]);
		}

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

	    int key;
	    printf("Enter key to be searched");
	    fflush(stdout);
	    scanf("%d",&key);

	    int max=n-1;
	    int min=0;
	    int found=0;
		while(min<=max)
		{
	      int mid= (max+min)/2;
	      if(arr[mid]==key)
	      {
	          printf("Number found at %d position",mid);
	          found = 1;
	          break;
	      }

	      else if(arr[mid]<key)
	    	  min = mid+1;
	      else
	    	  max = mid - 1;
		}
		if(found!=1)
			printf("Element not found");
	}
	else
		printf("Not acceptable");
return 0;
}

#include <stdio.h>
int main()
{
	int n,i;
	//User input for array size
	printf("Enter size of the array: ");
	fflush(stdout);
	scanf("%d",&n);
	int arr[n];
	int count=0;
	int valid=1;

	if(n<0 || n>1000)
	{
	    printf("Invalid! Enter value between 1 and 1000 ");
	    return 0;
	}

	else
	{
		//User input for array elements
		printf("Enter elements of array\n");
		for(i=0;i<n;i++)
		{
			printf("Enter a[%d]",i);
			fflush(stdout);
			scanf("%d",&arr[i]);

			if(arr[i]<=0 || arr[i]>1000)
			{
				valid=0;
			}
		}

		if(valid==0)
		{
			printf("Enter value greater than 0 and less than or equal to 1000");
		    return 0;
	     }

		else
		{
			//printing array elements
		     printf("Your array is: ");
			 for(i=0;i<n;i++)
			 {
			  printf("\t%d",arr[i]);
			 }
			 //to add elements of array
			 for(i=0;i<n;i++)
			 {
				count = count + arr[i];
			 }
			 printf("\nAddition of elements is %d",count);
	     }


	 }
	return 0;
}
}

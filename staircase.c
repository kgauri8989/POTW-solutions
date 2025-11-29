#include <stdio.h>
int main()
{
	int n;
	printf("Enter n: ");
	fflush(stdout);
	scanf("%d",&n);

	if(n>100)
		printf("Not valid");
	else if(n<=0)
		printf("Not valid");
	else
	{
		printf("Staircase function is given below\n");
	    int i,j;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n-i;j++)
			{
				printf(" ");
			}
			for(j=1;j<=i;j++)
			{
				printf("#");
			}
			printf("\n");
		}
	}

return 0;
}


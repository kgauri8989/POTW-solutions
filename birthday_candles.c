#include <stdio.h>
int main()
{
	int n,i,j,b;
	int valid=1;
	int count=0;
	printf("Enter number of candles: ");
	fflush(stdout);
	scanf("%d",&n);
	int candles[n];

	if (n>=1 && n<100000)
	{
		//to get heights of candle
		for(i=0;i<n;i++)
		{
			printf("Candle %d is",i+1);
			fflush(stdout);
			scanf("%d",&candles[i]);

			if(candles[i]>=1 && candles[i]<10000000)
				valid=1;
		}

		if(valid==1)
		{
			//arranging given array in ascending order
			for(i=0;i<n;i++)
			{
				int temp;
				for(j=0;j<i;j++)
				{
				    if(candles[i]<candles[j])
				    {
				    	temp=candles[i];
				    	candles[i]=candles[j];
				    	candles[j]=temp;
				    }
				}
			}
			for(i=0;i<n;i++)
			{
				printf("\t%d",candles[i]);
			}
			printf("\nGreatest candle's height is %d cm",candles[n-1]);
			for(i=0;i<n;i++)
			{
				b=candles[n-1];
				if(candles[i]==b)
				{
					count++;
				}
			}
			printf("\nTotal number of such candles present are %d",count);
		}

		else
		{
			printf("Enter value between 1 and 10000000");
		}
	}
	else
	{
		printf("Enter value between 1 and 100000");
	}
return 0;
}

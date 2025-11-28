#include <stdio.h>
#include <string.h>
int main()
{
	//Code for time conversion

	//Asking user for time
	char time12[50];
	printf("Enter the time in 12hr format (hh:mm:ss AM/PM): ");
	fflush(stdout);
	fgets(time12, sizeof(time12), stdin);

	//removing new line character from fgets
	time12[strcspn(time12, "\n")]='\0';

    //defining strings
	char first2[3], last2[3];
	int len = strlen(time12);

	//Assigning values
	first2[0]=time12[0];
	first2[1]=time12[1];
	first2[2]='\0';
    last2[0]=time12[len-2];
	last2[1]=time12[len-1];
	last2[2]='\0';

	//Applying conditions
	if(strcmp(first2, "12")==0 && strcmp(last2, "AM")==0)
	{
		strcpy(first2, "00");
		time12[0]=first2[0];
	    time12[1]=first2[1];
	    printf("\nTime in 24hr format is %s",time12);
	}
	else if(strcmp(first2, "12")!=0 && strcmp(last2, "PM")==0)
	{
         if(strcmp(first2, "01")==0)
    		 strcpy(first2, "13") ;
         else if(strcmp(first2, "02")==0)
             strcpy(first2, "14") ;
         else if(strcmp(first2, "03")==0)
             strcpy(first2, "15") ;
         else if(strcmp(first2, "04")==0)
             strcpy(first2, "16") ;
         else if(strcmp(first2, "05")==0)
             strcpy(first2, "17") ;
         else if(strcmp(first2, "06")==0)
             strcpy(first2, "18") ;
         else if(strcmp(first2, "07")==0)
              strcpy(first2, "19") ;
         else if(strcmp(first2, "08")==0)
              strcpy(first2, "20") ;
         else if(strcmp(first2, "09")==0)
              strcpy(first2, "21") ;
         else if(strcmp(first2, "10")==0)
              strcpy(first2, "22") ;
         else if(strcmp(first2, "11")==0)
              strcpy(first2, "23") ;

     	time12[0]=first2[0];
        time12[1]=first2[1];
        printf("\nTime in 24hr format is %s",time12);
     }


return 0;
}


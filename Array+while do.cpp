#include<stdio.h>
#include<string.h>
int main(){
	int maxattempt = 6;
	int attempt    =0;
do{
	int rating[5];
	printf("\n Rating in services   : ");
	scanf ("%d",&rating[0]);         //for first rating
	printf("\n Rating in cleanliness: ");
	scanf ("%d",&rating[1]);         //for second rating
	printf("\n Rating in price      : ");
	scanf ("%d",&rating[2]);         //for third rating	
	 if (rating[0] > 5 || rating[1] > 5 || rating[2] > 5)
    	{
		printf("\n\t\t Please double check rating."); //for condition
	    }
	else
     	{
	    printf("\n\t\t Thanks for rating.");
	    }                                  //if condition is not true
	float average = (rating[0] + rating[1] + rating[2])/3;
	printf("\n\n The average rating is: %.2f",average);     //taking average
	
//for another condition
	if (average >= 4.5 && average <= 5)
     	{
		printf("\n\n\t\t\t Excellent\n");
    	}
	else if (average >= 3.5 && average <= 4.4)
    	{
		printf("\n\n\t\t\t Good\n");
    	}
    else if (average >= 2.5 && average <= 3.4)
    	{
		printf("\n\n\t\t\t Average\n");
    	}
    else if (average < 2.5)
    	{
		printf("\n\n\t\t\t Need Improvement\n");
    	}
//print in files
    FILE *file = fopen ("Customers Rating.txt","a");
//fprintf function
    fprintf(file,"\n Rating in services   : %d",rating[0]);
    fprintf(file,"\n Rating in cleanliness: %d",rating[1]);
    fprintf(file,"\n Rating in price      : %d",rating[2]);
//printf function
    printf("\n Rating in services   : %d",rating[0]);
    printf("\n Rating in cleanliness: %d",rating[1]);
    printf("\n Rating in price      : %d\n",rating[2]);
    printf("\n\n------------------------------<>-------------------------------\n\n\n");
    attempt++;
}while (attempt < maxattempt);
	return 0;
}

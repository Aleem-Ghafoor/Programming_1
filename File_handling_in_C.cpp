#include<stdio.h>
#include<string.h>
int main (){
//TYPE and NAME
	int range;
	char student[40];
	int marks;
	int marks2;
	int total,total_physics,total_calculas,r,s;
	float average;
	    total_physics =0;
	    total_calculas=0;
		    printf("\nEnter the number 5 to 35: ");
		    scanf ("%d",&range);
//if else function
		if ( range < 2 || range > 35)
		{
			printf("\n*--------------Invalid! Please double check.----------------------*");
			return 1;
	    }
//for loop
    	for (int i = 0 ; i < range ; i++)
	    {
//do while loop
  do{
//student,marks,marks2
    		printf("\n\t\t\t\t\t%d-Enter the Student name: ",i);
	    	scanf ("%s",student);
		    printf("\n\tEnter the Physics marks: ");
		    scanf ("%d",&marks);
		    printf("\n\tEnter the Calculus marks: ");
		    scanf ("%d",&marks2);
		    total = marks + marks2;
		    printf("\n\tTotal numbers are: %d\n",total);
//if else function
	    if (marks < 0 || marks > 100 || marks2 < 0 || marks2 > 100)
	    {
		    printf ("\nInvalid number!\n\n");
		    return 1;
		}
//if else
		if (total >= 180)
           printf("\n\t\t\t\t\tYou got A Grade\n");
        else if (total >= 160 && total < 180)
           	    printf("\n\t\t\t\t\tYou got B Grade\n");
        else if (total >= 140 && total < 160)
                printf("\n\t\t\t\t\tYou got C Grade\n");
        else if (total >= 120 && total < 140)
           	   printf("\n\t\t\t\t\tYou got D Grade\n"); 
        else if (total < 120)
           	   printf("\n\t\t\t\t\tYou got F Grade\n");
//over all total of physics and calculas
		    total_physics=total_physics+marks;
			total_calculas=total_calculas+marks2;
//Save in files
		FILE *file = fopen("Chat GPT GRADE TASK.txt","a+");
    if (file == NULL) {printf ( "erorr please re-check!" ); return 1; }
        fprintf(file,"\n\t\t\t\t\t%d-The Student name is: %s",i,student);
        fprintf(file,"\n\n\tPhysics marks is : %d",marks);
        fprintf(file,"\n\n\tCalculas marks is: %d",marks2);
        fprintf(file,"\n\tTotal numbers are  : %d\n",total);
        fprintf(file,"________________________________________________/_____________________________________________\n");
    fclose(file);
        printf("\n\t\t\t\t\t%d-The Student name is: %s",i,student);
        printf("\n\n\tPhysics marks is : %d",marks);
        printf("\n\n\tCalculas marks is: %d",marks2);
        printf("\n\n\tTotal numbers are  : %d\n",total);
        printf("________________________________________________/_____________________________________________\n");
//do while loop condition
	}
	    while (range < 2 || range > 35);
    }
//printing of over all total of physics and calculas
        printf("\nThe total of Physics is : %d",total_physics);
        printf("\nThe total of Calculus is: %d",total_calculas);
// Average
        r = total_physics + total_calculas;
	    s = range*2;
		average =(float)r/s;
		     printf("\nThe avrage of students is: %.2f\n",average);
// save in files
FILE *file = fopen("Chat GPT GRADE TASK.txt","a+");
        fprintf(file,"\nThe total of Physics is : %d",total_physics);
        fprintf(file,"\nThe total of Calculus is: %d",total_calculas);
        fprintf(file,"\nThe avrage of students is: %.2f\n",average);
fclose(file);
        printf("\nThe total of Physics is  : %d",total_physics);
        printf("\nThe total of Calculus is : %d",total_calculas);
        printf("\nThe avrage of students is: %.2f\n",average);
	return 0;
}

/*
-----------------------------/\------------------------------
                              Author Name: Aleem
                              Date       :29th August,2024
                              Time       :11:03
----------------------------/\-------------------------------
*/
#include <stdio.h>
int main(){
	//First command
    char home[10];
    char township[10];
    char age[3];
    //Printing and scanning
    printf ("\n\tname: ");
    scanf (" %s",&home);
    printf ("\n\tcity: ");
    scanf ("%s",&township);
    printf ("\n\tage: ");
    scanf ("%s",&age);
	//Print whole command    
    printf ("\n\tYour name is %s", home);
    printf ("\n\tYour city is %s",township);
    printf ("\n\tYour age is %s\n",age);
    //Second command
    char home1[10];
    char township1[10];
    char age1[4]; 
    //Printing and scanning
    printf ("\n\tname1: ");
    scanf ("%s", &home1);
    printf ("\n\tcity1: ");
    scanf ("%s",&township1);
    printf ("\n\tage1: ");
    scanf ("%s",&age1);
	//Print whole second command    
    printf ("\n\tYour name is %s", home1);
    printf ("\n\tYour city is %s",township1);
    printf ("\n\tYour age is %s\n",age1);
    //Third comand
    char Saad[40];
    char Aleem[40];
    char Saad1[40];
    char Aleem2[40];
    char Saad2[40]; 
    //Printing and scanning
    printf ("\n\tFriend Saad: ");
    scanf ("%s",&Saad);
    printf ("\n\tFriend Aleem: ");
    scanf ("%s",&Aleem);
    printf ("\n\tFriend Saad1: ");
    scanf ("%s",&Saad1);
    printf ("\n\tFriend Aleem2: ");
    scanf ("%s",&Aleem2);
    printf ("\n\tFriend Saad2: ");
    scanf ("%s",&Saad2);
	//Print whole thir command         
    printf ("\n\tSaad: who are you %s",Saad);
    printf ("\n\tAleem: %s.",Aleem);
    printf ("\n\tSaad: Now what goning on %s.",Saad1);
    printf ("\n\tAleem: Nothing Special %s.",Aleem2);
    printf ("\n\tSaad: It too late we have to go %s.\n",Saad2);
    return 0;
}

#include<stdio.h>
// if-else Float for marks
float marks (float m){
if (m >= 85){return 4.0;}                 //A
else if (m >=  70 && m <85){return 3.0;}   //B
else if (m >= 50 && m <70){return 2.0;}   //C 
else if (m >= 35 && m <50){return 1.0;}   //D
else if (m < 35){return 0.0;}              //F
}
// if-else char for grade
char  grade (float m){
if (m >= 85){return 'A';}                 //A
else if (m >= 70 && m <85){return 'B';}   //B
else if (m >= 50 && m <70){return 'C';}   //C 
else if (m >= 35 && m <50){return 'D';}   //D
else if (m < 35){return 'F';}              //F
}
int main(){
//Type and names
    char s[40];
    printf ("\n Student name: ");
	scanf  ("%s",s);
    float  m;
    float  m2;
    float  m3;
//Appling functions
    printf("\nPF marks      : ");
	scanf ("%f",&m);
	printf("\nCalculus marks: ");
	scanf ("%f",&m2);
	printf("\nPhysics marks : ");
	scanf ("%f",&m3);
if (m > 100 || m2 > 100 || m3 > 100){printf ("Erorr, please double check the numbers!");
return 1;
}
//Total 
	float mark= marks(m)+marks(m2)+marks(m3);
	printf ("\n\tTotal marks: %f",mark);
//Grades
	char gr=grade(m);
	char gr2=grade(m2);
	char gr3=grade(m3);
    printf("\nPF grade      : %c",gr);
	printf("\nCalculus grade: %c",gr2);
	printf("\nPhysics grade : %c",gr3);
	float  total_grades=mark/3;
	printf("\n\t GPA: %f",total_grades);
//Save in files
    FILE *file = fopen ("Students_record.txt","w+");
//If for erorr
    if (file == NULL) {printf ( "erorr please re-check!" ); return 1; }
//fprintf
    fprintf (file,"\nStudent name: %s\n",s);
    fprintf (file,"PF marks      : %f\n",m);
    fprintf (file,"Calculus marks: %f\n",m2);
    fprintf (file,"Physics marks : %f\n",m3);
    fprintf (file,"PF grade      : %c\n",gr);
    fprintf (file,"Calculus grade: %c\n",gr2);
    fprintf (file,"Physics grade : %c\n",gr3);
//fclose function
    fclose(file);
    printf("\nStudent name: %s\n",s);
    printf("Student marks : %f\n",m);
    printf("Calculus marks: %f\n",m2);
    printf("Physics marks : %f\n",m3);
    printf("Student grade : %c\n",gr);
    printf("Calculus grade: %c\n",gr2);
    printf("Physics grade : %c\n",gr3);
    return 0;
}

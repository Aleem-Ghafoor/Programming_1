#include<stdio.h>
int main (){
	int num = 0;
	int maxnum = 5;
	do{
	    int choice;
            printf("\nEnter the number below");
	        printf("\n1-Addition function");
	        printf("\n2-Multiplication function");
	        printf("\n3-Subtraction function");
	        printf("\n4-Divion function");
	        printf("\n5-Modulus function");
	        printf("\nEnter your choice (1-5): ");
	        scanf("%d",&choice);
	    double num1,num2,result;
	        printf("\nEnter the first number: ");
	        scanf ("%lf",&num1);
	        printf("\nEnter the second number: ");
	        scanf ("%lf",&num2);
	    switch(choice)
		{
		    case 1:
			    result = num1 + num2;
			      break;
	        case 2:
			    result = num1 * num2;
			      break;
		    case 3:
			    result = num1 - num2;
			      break;	
		    case 4:
			if (num2 !=0){
			    result = num1 / num2;
		    }else{printf("\nerror");return 1;}
		    break;
		    case 5:
		    if ((int)num2 != 0)
		        {
                result = (int)num1 % (int)num2;
				}
			      break;
	        default:
		        printf("\n\n\t\tinvalid choice!\n"); 
	    }
	            printf("\n\t\tResult: %.2f\n\n",result);
	        FILE *file=fopen("Calculator.txt","a+");
	        if (file == NULL)
			{
				printf("\nError to open");
				return 0;
			}
	        if (choice == 1)
			    {
	            fprintf(file,"\n\tThe Addition result = %.2f",result);
		        printf("\n\tThe Addition = %.2f",result);
				}
		    else if (choice == 2)
			    {
	            fprintf(file,"\n\tThe Multiplication result = %.2f",result);
		        printf("\n\tThe Multiplication result = %.2f",result);
				}
	    	else if (choice == 3)
			    {
	            fprintf(file,"\n\tThe Subtraction result = %.2f",result);
		        printf("\n\tThe Subtraction result = %.2f",result);
				}
			else if (choice == 4)
			    {
	            fprintf(file,"\n\tThe Division result = %.2f",result);
		        printf("\n\tThe Division result = %.2f",result);
		        }
			else if (choice == 5)
			    {
	            fprintf(file,"\n\tThe Modulous result = %.2f",result);
		        printf("\n\tThe Modulous result = %.2f",result);
		        }
			    fclose(file);
	        printf("\n\n\t\t------------------------------------/----------------------------");

	    num++;
    }while(num < maxnum);
	return 0;
}

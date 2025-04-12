#include<iostream>
#include<ctime>
#include<ios>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
	srand(time(0));
	int num[5] , num2[5] , num3[5] , num4[5] , num5[5], correct , j = 0 , choice , roll_no , k = 0 , l = 0;
	char name[40];
	double result;
	    cout<<"\n\t\t\t\t-----------[We are going to take your Quick quiz.]-----------";
	    cout<<"\nEnter your name: ";
	    cin>>name;
	    cout<<"\nEnter your roll number: ";
	    cin>>roll_no;
	    cout<<"\n\n\t\t\t\t============='Choose the difficulty level of the quiz.'=================";
	    cout<<"\n\n1st level is that you given 3 tasks.";
	    cout<<"\n\n2nd level is that you given 1 task with 5 questions.";
	    cout<<"\n\n3rd level is that you given only 1 question.";
	    cout<<"\n\n\t\t\t\t\t\tEnter your choice(1-3): ";
	    cin>>choice;
	switch(choice)
	{
	    case 1:
	            cout<<"\n\n-----------Task 1 is Adding and Subtracting.----------------";
	            cout<<"\n\nGive the answer of the following questions:";
        for(int i = 1 ; i <= 5 ; i++)
    {
            num[i] = rand()%100;
            num2[i]= rand()%100;
        if(i == 1 || i == 3 || i == 5)
    {
            result = num[i] + num2[i];
            correct= result;
    	        cout<<"\n\nAdding the "<<num[i]<<" + "<<num2[i]<<" = ";
    }
        else if(i == 2 || i == 4)
    {
            result = num[i] - num2[i];
            correct= result;
                cout<<"\n\nSubtracting the "<<num[i]<<" - "<<num2[i]<<" = ";
	}
            	cin>>correct;
        if(result == correct)
            j = j + 1;
   	} 
		        cout<<"\nYour total score is: "<<j; 
//		        cout<<"\nThe 1 num is: "<<num[3];
//		        cout<<"\nThe 2 num is: "<<num2[3]; 
	            cout<<"\n\n--------------Task 2 is Multiplication.----------------";
	    for(int i = 1 ; i <= 5 ; i++)
    {
            num[i] = rand()%50;
            num2[i]= rand()%50;
            result = num[i] * num2[i];
            correct= result;
    	        cout<<"\n\nMultipling the "<<num[i]<<" X "<<num2[i]<<" = ";
    	        cin>>correct;
        if(correct == result)
            k = k + 1;
   	} 
	          	cout<<"\nYour total score is: "<<k;  
//	        	cout<<"\nThe 1 num is: "<<num[4];
//		        cout<<"\nThe 2 num is: "<<num2[4];  
	            cout<<"\n\n--------------Task 3 is Division.----------------";
	    for(int i = 1 ; i <= 5 ; i++)
    {
            num[i] = rand()/100;
            num2[i]= rand()/100;
            result = num[i] / num2[i];
            correct= result;
    	        cout<<"\n\nDividing the "<<num[i]<<" / "<<num2[i]<<" = "<<setprecision(2);
    	        cin>>correct;
        if(result == correct)
            l = l + 1;
   	} 
		        cout<<"\nYour total score is: "<<l;  
//		        cout<<"\nThe 1 num is: "<<num[2];
//		        cout<<"\nThe 2 num is: "<<num2[2];
    	break;
    	case 2:
    	for(int i = 1 ; i <= 5 ; i++)
		{
		num[i] = rand()*.001;
        num2[i]= rand()*.001;
        num3[i]= rand()*.001;
        num4[i]= rand()*.001;
        num5[i]= rand()*.001;
		}
		        cout<<"\n\n\t\t==================[You are given only 1 hour to solve the questions.]=====================";
		        cout<<"\n\nSolve the following questions:";
//question 1
		    result=(num[1] * num2[1]) +num3[1] / num4[1] - num5[1];
		    correct = result;
		        cout<<"\n\nThe 1st question is ("<<num[1]<<" X "<<num2[1]<<") + "<<num3[1]<<" / "<<num4[1]<<" - "<<num5[1]<<" = ";
		        cin>>correct;
		if(result == correct)
            j = j+1;
//question 2
		    result=(pow (num[2] , 2) - num2[2]) * num3[2] + (num4[2] / num5[2]);
		    correct = result;
		        cout<<"\n\nThe 2nd question is ("<<num[2]<<"^2 -"<<num2[1]<<") X "<<num3[2]<<" + ("<<num4[2]<<" / "<<num5[2]<<") = ";
		        cin>>correct;
		if(result == correct)
            j = j+1;
//question 3
            result=((num[3] / num2[3]) + num3[3] * num4[3]) - (num5[3] / num4[3] + num2[3] * num2[3]);
            correct = result;
		        cout<<"\n\nThe 3nd question is (("<<num[3]<<" / "<<num2[3]<<") + "<<num3[3]<<" X "<<num4[3]<<") - ("<<num5[3]<<" / "<<num4[3]<<" + "<<num2[3]<<" X "<<num2[3]<<" ) = ";
		        cin>>correct;
		if(result == correct)
            j = j+1;
//question 4
            result=(num[4] - num2[4]) + (num3[4] / pow(num4[4],2)) - num5[4];
            correct = result;
		        cout<<"\n\nThe 4th question is ("<<num[4]<<" - "<<num2[4]<<"^3) + ("<<num3[4]<<" / "<<num4[4]<<"^2) - "<<num5[4]<<" = ";
		        cin>>correct;
		if(result == correct)
            j = j+1;
//question 5
            result=(num[5] / num2[5]) + num3[5] - num4[5] + (num2[5] * num5[5]);
            correct = result;
		        cout<<"\n\nThe 5th question is ("<<num[5]<<" / "<<num2[5]<<") + "<<num3[5]<<" - "<<num4[5]<<" + ("<<num2[5]<<" X "<<num5[5]<<") = ";
                cin>>correct;
        if(result == correct)
            j = j+1;
                cout<<"\n\nYour total score is: "<<j; 
		break;   
	}
return 0;
}
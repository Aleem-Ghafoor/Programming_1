#include<iostream>
#include<ctime>
#include<ios>
#include<iomanip>
#include<cmath>
using namespace std;
//calculation for case 2 questions
int q1 (int num , int num2 , int num3 , int num4 , int num5)
{
    int result = (num * num2) +static_cast<float>(num3) / num4 - num5;
    return result;
}
int q2 (int num , int num2 , int num3 , int num4 , int num5)
{
    int result=( pow (num , 2) - num2 ) * num3 + (static_cast<float>(num4) / num5);
    return result;
}
int q3 (int num , int num2 , int num3 , int num4 , int num5)
{
    int result=((static_cast<float>(num) / num2) + num3 * num4) - (static_cast<float>(num5) / num4 + num2 * num2);
    return result;
}
int q4 (int num , int num2 , int num3 , int num4 , int num5)
{
    int result=(num - pow(num2 , 3)) + (static_cast<float>(num3) / pow(num4 , 2)) - num5;
    return result;
}
int q5 (int num , int num2 , int num3 , int num4 , int num5)
{
    int result=(static_cast<float>(num) / num2) + num3 - num4 + (num2 * num5);
    return result;
}
int main(){
	srand(time(0));
//declare types and name
	int  j = 0 , choice , roll_no , k = 0 , a = 0 , b = 0;
	int num[5] , num2[5] , num3[5] , num4[5] , num5[5];
	float result, correct;
	char name[40];
//printing name and roll no
	    cout<<"\n\n\t\t\t\t-----------[We are going to take your Quick quiz.]-----------";
	    cout<<"\n\nEnter your name: ";
	    cin>>name;
	    cout<<"\nEnter your roll number: ";
	    cin>>roll_no;
//printing menu
	    cout<<"\n\n\t\t\t\t============='Choose the difficulty level of the quiz.'=================";
	    cout<<"\n\n1st level is that you given 3 tasks.";
	    cout<<"\n\n2nd level is that you given 1 task with 5 questions.";
	    cout<<"\n\n3rd level is that you given only 1 question.";
	    cout<<"\n\n\t\t\t\t\t\tEnter your choice(1-3): ";
	    cin>>choice;
//switch
	switch(choice)
	{
//case 1
	    case 1:
//add and sub task
	    	srand(time(0));
	            cout<<"\n\n-----------Task 1 is Adding and Subtracting.----------------";
	            cout<<"\n\nGive the answer of the following questions:";
//for loop
        for(int i = 0 ; i < 5 ; i++)
    {
            num[i] = rand()%100;
            num2[i]= rand()%100;
        if(i == 0 || i == 2 || i == 4)
    {
            result = num[i] + num2[i];
            correct= result;
    	        cout<<"\n\nAdding the "<<num[i]<<" + "<<num2[i]<<" = ";
    }
        else if(i == 1 || i == 3)
    {
            result = num[i] - num2[i];
            correct= result;
                cout<<"\n\nSubtracting the "<<num[i]<<" - "<<num2[i]<<" = ";
	}
            	cin>>correct;
        if(result == correct)
            j = j + 1;
   	} 
		        cout<<"\nYour total score is: "<<j<<"/5";  
//multiplication
	            cout<<"\n\n--------------Task 2 is Multiplication.----------------";
//for loop
	    for(int i = 0 ; i < 5 ; i++)
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
	          	cout<<"\nYour total score is: "<<k<<"/5";   
//divion
	            cout<<"\n\n--------------Task 3 is Division.----------------";
	            cout<<"\n\t[After decimal only 2 digits]";
//for loop
	    for(int i = 0 ; i < 5 ; i++)
    {
            num[i] = rand()%100 + 1;
            num2[i]= rand()%100 + 1;
            result =static_cast<float>(num[i]) / num2[i];
            cout<<fixed<<setprecision(2);
            correct = result;
    	        cout<<"\n\nDividing the "<<num[i]<<" / "<<num2[i]<<" = ";
    	        cin>>correct;   
        if(fabs(correct - result) < 0.01)
            a+=1;
   	} 
		        cout<<"\nYour total score is: "<<a<<"/5"; 
			b = a + k + j; 
		        cout<<"\nOver all your total marks is: "<<b<<"/15";
    	break;
//case 2
    	case 2:
    	srand(time(0));
//for loop for declaring numbers
    	for(int i = 0 ; i < 5 ; i++)
		{
		num[i] = rand()%50 + 1;
        num2[i]= rand()%50 + 1;
        num3[i]= rand()%50 + 1;
        num4[i]= rand()%50 + 1;
        num5[i]= rand()%50 + 1;
		}
//printing values
		        cout<<"\n\n==================[You are given only 1 hour to solve the questions.]=====================";
		        cout<<"\n\t\t\t[After decimal only 2 digits]";
		        cout<<"\n\nSolve the following questions:";
//question 1
            result = q1(num[0],num2[0],num3[0],num4[0],num5[0]);
            cout<<fixed<<setprecision(2);
		    correct= result;
		        cout<<"\n\nThe 1st question is ("<<num[0]<<" X "<<num2[0]<<") + "<<num3[0]<<" / "<<num4[0]<<" - "<<num5[0]<<" = ";
		        cin>>correct;
		if(fabs(result - correct)<0.01)
            j = j+1;
//question 2
            result = q2(num[1],num2[1],num3[1],num4[1],num5[1]);
		    correct = result;
		        cout<<"\n\nThe 2nd question is ("<<num[1]<<"^2 -"<<num2[1]<<") X "<<num3[1]<<" + ("<<num4[1]<<" / "<<num5[1]<<") = ";
		        cin>>correct;
		if(fabs(result - correct)<0.01)
            j = j+1;
//question 3
           result = q3(num[2],num2[2],num3[2],num4[2],num5[2]);
           correct = result;
		        cout<<"\n\nThe 3nd question is (("<<num[2]<<" / "<<num2[2]<<") + "<<num3[2]<<" X "<<num4[2]<<") - ("<<num5[2]<<" / "<<num4[2]<<" + "<<num2[2]<<" X "<<num2[2]<<" ) = ";
		        cin>>correct;
		if(fabs(result - correct)<0.01)
            j = j+1;
//question 4
            result = q1(num[3],num2[3],num3[3],num4[3],num5[3]);
            correct = result;
		        cout<<"\n\nThe 4th question is ("<<num[3]<<" - "<<num2[3]<<"^3) + ("<<num3[3]<<" / "<<num4[3]<<"^2) - "<<num5[3]<<" = ";
		        cin>>correct;
		if(fabs(result - correct)<0.01)
            j = j+1;
//question 5
            result = q1(num[4],num2[4],num3[4],num4[4],num5[4]);
            correct = result;
		        cout<<"\n\nThe 5th question is ("<<num[4]<<" / "<<num2[4]<<") + "<<num3[4]<<" - "<<num4[4]<<" + ("<<num2[4]<<" X "<<num5[4]<<") = ";
                cin>>correct;
        if(fabs(result - correct)<0.01)
            j = j+1;
                cout<<"\n\nYour total score is: "<<j<<"/5"; 
		break;
//case 3 
		case 3:
//declare random number
    	num[0] = rand()%100 + 1;
        num2[0]= rand()%100 + 1;
		num3[0]= rand()%100 + 1;
        num4[0]= rand()%100 + 1;
        num5[0]= rand()%100 + 1;
//result
			result = ((static_cast<float>(num[0]) / num2[0]) + pow(num3[0], 3)) - num4[0] + (num2[0] * (num5[0] - num[0]));
			cout<<fixed<<setprecision(2);
//printing values
			    cout<<"\n\n==================[You are given only 30 min to solve the question.]=====================";
			    cout<<"\n\n\t\t\t[After decimal only 2 digits]";
			    cout<<"\n\nThe hardest question is (("<<num[0]<<" / "<<num2[0]<<") + ("<<num3[0]<<"^"<<3<<")) - "<<num4[0]<<" + ("<<num2[0]<<" X ("<<num5[0]<<" - "<<num[0]<<")) = ";
                cin>>correct;
//if statement
			if(fabs(correct - result)<0.01)
			{
			     cout<<"\nCongratulation you solve the hardest one.";
			     cout<<"\nYour total score is 5.";
		    }
		break;
		default:
			     cout<<"Please put the correct number.";
	}
return 0;
}
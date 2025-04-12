#include<iostream>
using namespace std;
int main(){
	int num[20], choice, sum, sum2, b, max, min, key, num2;
	float average = 1;
	sum = 0;
	b   = 0;
	sum2= 0;
	    cout<<"\n\t\t\t-------------Enter the -1 to finish.-----------";
	for(int i = 0 ; i < 20 ; i++)
	{
		    cout<<"\nEnter the "<<i<<" value: ";
		    cin>>num[i];
		if(num[i] == -1)
		{
			
		    b = i;
		    break;
		}
	}
do{
	    cout<<"\n--------Main Menu-----------";
        cout<<"\n1. Calculate sum";
        cout<<"\n2. Calculate average";
        cout<<"\n3. Find smallest and largest values";
        cout<<"\n4. Count occurrences of a specific integer";
        cout<<"\n5. Print all elements in reverse order";
        cout<<"\n6. Exit";
        cout<<"\nChoose an option: ";
        cin>>choice;
    switch(choice)
    {
    	case 1: 
    	    for(int i = 0 ; i < b ; i++)
    	    {
    	    	sum += num[i];
			}
			cout<<"\nThe sum is: "<<sum;
		break;	
		case 2:
		    for(int i = 0 ; i < b ; i++)
    	    {
    	    	sum2 += num[i];
			} 
		    average = (float)sum2/(b);
		    cout<<"\nThe average is: "<<average;
		break;
		case 3: 
		    for(int i = 1 ; i < b ; i++)
    	    {
    	    	min = num[0];
    	    	max = num[0];
    	    	if(max < num[i])
    	    	{
    	    	    max = num[i];	
				}
				if(min > num[i])
				{
					min = num[i];
				}
	        }
	            cout<<"\nThe maximum number is: "<<max;
	            cout<<"\nThe minimun number is: "<<min;
	    break;
	    case 4:
	    	        cout<<"\nEnter the number to find location: ";
	    	        cin>>num2;
	    	for(int i = 1 ; i < b ; i++)
    	    {
    	    	if(num2 == num[i])
    	    	{
	    	        cout<<"\nThe location is: "<<i;
	    	    }
	    	}
    	break;
    	case 5:
    		    cout<<"\nThe reverse numbers are: ";
    		for(int i = b - 1 ; i >= 0 ; i--)
    		{
    			    cout<<"   "<<num[i];
			}
		case 6:
			    cout<<"\nYou exist the program.";
			    return 0;
		break;
		default:
			    cout<<"\nYou enter the wrong number.";
			    cout<<"\nHosh kr.";
	}
}while(true);
	return 0;
}
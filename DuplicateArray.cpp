#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n, i = 0, j = 0;
	    
		cout<<"Enter the n: ";
	    
		cin>>n;
	
	int num[n] , num2[n];
	
	    cout<<"\nEnter the number: ";

for(int i = 0 ; i < n ; i++)
        cin>>num[i];
      cout<<"\nEnter second the number: ";
for(int j = i ; j < n ; j++)
      cin>>num2[j];                    //only when we take two numbers from user and if we have to take one number enter j = 0 & i = j+1

for(int j = 0 ; j < n ; j++)
{
for(int i = 0 ; i < n ; i++)
{
	
        if(num2[j] == num[i] && i == j)
           {

	    	 cout<<"\nThe memory location of first number is "<<j<<" and the second one is "<<i;

	         cout<<endl<<num[i]<<" present twice.";
	        }
}	    
}
	return 0;

}
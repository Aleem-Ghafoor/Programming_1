#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,a;
	    cout<<"Enter the size: ";
	    cin>>n;
	a = n;
	int num[n],num2[n],b[n];
	    cout<<"Enter the number: ";
	for(int i = 0 ; i < n ; i++)
	{
	    cin>>num[i];
    }
    for(int i = 0 , j = i+1 ; i < n , j < n; i++ ,j++)
	{
           if(num[i] < num[j])
           {
		    cout<<" "<<num[i]<<" ";
		    b[i] = num[i];
		   }
		   else
		   {
		    cout<<" "<<num[j]<<" ";
		    b[i] = num[j];
		    num[i+1] = num[i];
		   }
	}
	   cout<<endl;
	for(int i = 0 , j = i+1 ; i < n , j < n; i++ ,j++)
	{
		   if(b[i] < b[j])
           {
		    cout<<" "<<b[i]<<" ";
		    num2[i] = b[i];
		   }
		   else
		   {
		    cout<<" "<<b[j]<<" ";
		    num2[i] = b[j];
		    b[i+1] = b[i];
		   }
	}
	return 0;
}
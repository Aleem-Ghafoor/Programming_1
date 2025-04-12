#include<iostream>
using namespace std;
int main(){
	int n, j = 0, i = 0;
	    cout<<"\nEnter the size: ";
	    cin>>n;
	int num[n], sum[n] = {0},max;
	    cout<<"\nEnter the number: ";
	for(int i = 0 ; i < n ; i++)
	{
		cin>>num[i];
	}
	for(int k = 0 ; k < n ; k++)
	{
	    for(int j = k ; j < n ; j++)
		{
		 sum[j] = 0;
	    }
		for(int j = k ; j < n ; j++)
		{
			for(int i = k ; i <= j ; i++)
			{
	  			cout<<" "<<num[i];
				sum[j] += num[i];
			}
			cout<<endl;
		}
		cout<<endl;
		 j = n;
		sum[k] = sum[n - 1];
	}
	for(int k = 1; k < n; k++)
	{
		max = sum[0];
		if(max < sum[k])
		max = sum[k];
	}
	    cout<<"\nThe max sum value is: "<<max;
//	for(int i = 0 ; i < n ; i++)
//	{
		
//	}
	/*
		for(int j = 1 ; j < n ; j++)
		{
			for(int i = 1 ; i <= j ; i++)
			{
				cout<<num[i];
			}
			cout<<endl;
		}
		for(int j = 2 ; j < n ; j++)
		{
			for(int i = 2 ; i <= j ; i++)
			{
				cout<<num[i];
			}
			cout<<endl;
		}
		for(int j = 3 ; j < n ; j++)
		{
			for(int i = 3 ; i < n ; i++)
		    {
	         cout<<num[i];
			}
			cout<<endl;
			
		}
		*/
	return 0;
}
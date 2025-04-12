#include<iostream>
using namespace std;
int main(){
	int n;
	    cout<<"\nEnter the size: ";
	    cin>>n;
	int num[n], i = 1;
	    cout<<"\nEnter the numbers: ";
	for(int i = 0 ; i < n ; i++)
	{
		cin>>num[i];
	}
//	    max = num[0];
	for(int j = 0 ; j < n ; j++)
	{
	for(int i = j+1 ; i < n ; i++)
	{
		if(num[j] < num[i])
		{
            int temp = num[j];
            num[j] = num[i];
            num[i] = temp;
        }
	}
    }
	for(int j = 0 ; j < n ; j++)
    {
	    cout<<"\n "<<num[j];
	}
	return 0;
}
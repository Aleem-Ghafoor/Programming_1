#include<iostream>
using namespace std;
int counteven(int);
int countodd(int);
int main(){
	int sum, average;
	sum = 0;
	average = 0;
	int num[4],num3, num2;
		cout<<"Enter the numbers: ";
	for(int i = 0 ; i < 4 ; i++)
	{
	    cin>>num[i];
	}
	for(int i = 0 ; i < 4 ; i++)
	{
		counteven(num[i]);
		countodd(num[i]);
	}
	    cout<<"\nThe even numbers are: "<<counteven(num3);
	    cout<<"\nThe odd numbers are: "<<countodd(num2);
}
int counteven (int num3)
{
	int count = 0, num;
		if(num%2 == 0)
		    count++;
	return count;
}
int countodd (int num2)
{
	int count2, num;
		if(num%2 != 0)
		    count2++;
	return count2;
}
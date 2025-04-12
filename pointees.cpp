#include<iostream>
using namespace std;
int calculatesum(int*, int);
int main(){
	int num[5] = {40,15,20,13,22}, size,sum;
	float  average;
	size = 5;
	average = 0;
	int *p;
	p = num; 
	sum = calculatesum(p, size);
	average = sum/float(size);
	    cout<<"\nThe sum is: "<<calculatesum(p, size);
	    cout<<"\nThe aveage is: "<<average;
	return 0;
}
int calculatesum(int* p, int size)
{
	int sum;
	sum = 0;
	for(int i = 0 ; i < size ; i++)
	{
		sum += *(p + i);
	}
	return sum;
}
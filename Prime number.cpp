#include<iostream>
using namespace std;
int main(){
	int num,counter_zero;
        cout<<"Enter the number: ";
	    cin>>num;
	counter_zero=0;
for(int i =2 ; i<=num/2 ; i++)
{
	if(num % i == 0)
	{
	counter_zero++ ;
    }
}
if(counter_zero==0)
cout<<"The number is prime";
else
cout<<"The number is not prime";

return 0;
}
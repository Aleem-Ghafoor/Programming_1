#include<iostream> 
 #include<cmath> 
 using namespace std; 
 int main(){  
int n;
cout<<"Enter the size of array: ";
cin>>n;
int num[n];
cout<<"Enter the number: ";
for (int i = 0; i < n; i++)
cin>>num[i];
for (int i = 0; i < n - 1 ; i++)
 {
 for (int j  = i + 1; j < n; j++) 
 {
 	if(num[j] >  num[i])
 	{
 	 int temp = num[j];
 	    num[j] = num[i];
 	    num[i] = temp;
 	}
 }
}
for(int j = 0; j < n; j++)
{
	cout<<num[j]<<" ";
}
return 0;
}
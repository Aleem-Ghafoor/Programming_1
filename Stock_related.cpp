#include<iostream>
using namespace std;
int main(){
	int choice, key, add, sub, update;
	int inventory[10] = {0,0,0,0,0,0,0,0};
do{
	    cout<<"\nSelect an option:";
	    cout<<"\n1. View Inventory";
	    cout<<"\n2. Add Stock";
	    cout<<"\n3. Remove Stock";
	    cout<<"\n4. Find Product";
	    cout<<"\n5. Update stock";
	    cout<<"\n6. Exit Program";
	    cout<<"\n\nEnter your choice: ";
	    cin>>choice;
	switch(choice)
	{
		case 1:
		    for(int i = 0 ; i < 10 ; i++)
		    {
		    	if(inventory[i] < 0)
		    	{
		    		inventory[i] = 0;
			        cout<<"\nItem "<<i<<": "<<inventory[i]<<" units";
			        cout<<"\n[You have zero stocks.]";
			    }
                else    		    
			        cout<<"\nItem "<<i<<": "<<inventory[i]<<" units";
		    }
		        cout<<"\n---------------------<>--------------------\n";
		break;
		case 2: 
		        cout<<"\nEnter the item index(0-9): ";
		        cin>>key;
//we can do it like this with if else inventory[key] without for loop
            if(key < 0 || key > 9)
            {
            	cout<<"Invalid entery of item index.";
			}
			else
			{
		    for(int i = 0 ; i < 10 ; i++)
		    {
		    	inventory[i];
		        if(i == key)
		        {
		        	    cout<<"\nEnter quantity to add: ";
		        	    cin>>add;
		        	if(add < 0)
					{
						cout<<"\nInvalid number.";
					}
					else
					{
		        	    inventory[i] += add;
		        	}
				}
			}
		    }
			    cout<<"\n---------------------<>--------------------\n";
		break;
		case 3:
			    cout<<"\nEnter the item index(0-9): ";
		        cin>>key;
//we can do it like this with if else inventory[key] without for loop
            if(key < 0 || key > 9)
            {
            	cout<<"Invalid entery of item index.";
			}
			else
			{
			for(int i = 0 ; i < 10 ; i++)
		    {
		    	inventory[i];
		        if(i == key)
		        {
		        	cout<<"\nEnter quantity to subtract: ";
		        	cin>>sub;
		        	inventory[i] -= sub;
	        if(inventory[i] < 0)
		        {
	               cout<<"\n\t\t\t\t["<<i<<" Item has zero units.]";
		             inventory[i] = 0;
		        }     
				}
			}
		    }
			    cout<<"\n---------------------<>--------------------\n";
		break;
		case 4:
			    cout<<"\nEnter item index to find(0-9): ";
		        cin>>key;
//we can do it like this with if else inventory[key] without for loop
            if(key < 0 || key > 9)
            {
            	cout<<"Invalid entery of item index.";
			}
			else
			{
		    for(int i = 0 ; i < 10 ; i++)
		    {
		    	inventory[i];
		        if(i == key)
		        {
		        	cout<<"\nItem "<<i<<" has "<<inventory[i]<<" units.";
				}
			} 
		    }
			    cout<<"\n---------------------<>--------------------\n";
		break;
		case 5: 
		        cout<<"\nEnter the item index(0-9): ";
		        cin>>key;
//we can do it like this with if else inventory[key] without for loop
            if(key < 0 || key > 9)
            {
            	cout<<"Invalid entery of item index.";
			}
			else
			{
		   for(int i = 0 ; i < 10 ; i++)
		    {
		    	inventory[i];
		        if(i == key)
		        {
		        	    cout<<"\nEnter quantity to update: ";
		        	    cin>>update;
		        	if(update < 0)
					{
						cout<<"\nInvalid number.";
					}
					else
					{
		        	    inventory[i] = update;
		        	}
				}
			}
		    }
			    cout<<"\n---------------------<>--------------------\n"; 
		break;
		case 6:
			   cout<<"You Exit the program.";
			   cout<<"\n---------------------<>--------------------\n";
			   return 0;
		break;
		default:
			   cout<<"You enter the wrong number.Please enter correct number";
			   cout<<"\n       ----     ----";
			   cout<<"\n     -       -       -";
			   cout<<"\n    -                  -";
			   cout<<"\n    -                  -";
			   cout<<"\n     -               -";
			   cout<<"\n      -            -";
			   cout<<"\n        -        -";
			   cout<<"\n             -";
	}
}while(true);
	return 0;
}
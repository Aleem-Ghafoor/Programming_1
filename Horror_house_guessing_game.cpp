#include<iostream>
using namespace std;
int main(){
// decler the name and the type
	int choice;
	int j = 100;
// starting point of game
	    cout<<"-------------------Welcome to the dungon. It is an Adventure game----------------------";
//for loop
	for ( int i = 1 ; i < 6 ; i++)
	{
		cout<<"\n\n\nYou are in Room "<<i<<".Your health is: "<<j<<endl;
//menu	
	    cout<<"\nChoose your action:";
	    cout<<"\n1-Fight";
	    cout<<"\n2-Heal";
	    cout<<"\n3-Run"<<endl;
	    cout<<"\n[Warning do not use two time healing at a time.]"<<endl;
//taking choice from user
	    cout<<"\nEnter your choice: ";
	    cin>>choice;
//switch statement
	switch(choice)
	{
//case 1
		case 1:
			cout<<"\n\t\t\t'You choose to fight. You may be die in there be careful young man!'\n";
//for first room
		if(i == 1)
	    {
            cout<<"\nThe dangrous monster run towards me, shaking the ground.";
            cout<<"\nI dodge as it swings its big arm, barely missing me.";
            cout<<"\nI spot a glowing weak point on its chest and shoot it with my bow.";
            cout<<"\nThe golem slows down, so I rush in and hit it with my sword.";
            cout<<"\nAfter a few more hits, the golem falls apart into a pile of rocks.";
            cout<<"\nYou fought bravely and you are a strong Adventurer";
	    	cout<<"\n\n\t\t\t[You lose 17 health due to exhaustion.]";
	    	cout<<"\n\t\t\t[You gain 7 health.]";
	    j -= 10;
	        cout<<"\n\nYour current health is "<<j<<endl;
	        cout<<"============================================/========================================";
	    }
//for second room
	    if(i == 2)
	    {
	        cout<<"\nThe skeletal knight slashes at me with its sword, and I block it with my shield.But he manage to strike on my hand.";
            cout<<"\nI quickly strike back, hitting its legs to knock it down.";
            cout<<"\nIt tries to cast a dark spell, but I dodge and get closer.";
            cout<<"\nI break its sword, and it starts to fall apart.";
            cout<<"\nOne final hit to its head, and the skeleton crumbles into bones.";
            cout<<"\n\n\t\t\t[You fought bravely and but you lost a lot of blood.]";
	    	cout<<"\n\t\t\t[You lose 30 health due to exhaustion.]";
	    j -= 30;
	    	cout<<"\n\nYour current health is "<<j<<endl;
	    	cout<<"============================================/========================================";
		}
//for third room
		if(i == 3)
		{
			cout<<"\nThe fire drake roars and shoots a huge fireball at me, and I try to dodge, but I get burned.";
            cout<<"\nI manage to cast a weak water spell, but it doesn’t stop the drake’s flames.";
            cout<<"\nThe drake charges, and I swing my sword at its belly, but I miss and stumble.";
            cout<<"\nBefore I can get up, it breathes fire again, and I can feel my health dropping fast.";
            cout<<"\nI try to block with my shield, but it's too late the flames surround me, and I fall, defeated.";
            cout<<"\n\n\t\t\t[you lose all health and the game is over.]"<<endl;
            cout<<"============================================/========================================";
        return 0;
		}
//for fourth room
		if(i == 4)
		{
			cout<<"\nThe giant spider jumps at me and shoots sticky webs, but I dodge them.";
            cout<<"\nI hit its eyes with an arrow, blinding it for a moment.";
            cout<<"\nIt tries to bite me, but I quickly stab one of its legs.";
            cout<<"\nThe spider backs off and tries to trap me in more webs, but I keep moving.";
            cout<<"\nI land a final blow to its head, and the spider collapses.";
            cout<<"\nYou played well. You are brave worrier.";
            cout<<"\n\n\t\t\t[You lose 40 health because you are exhausted.]";
            cout<<"\n\t\t\t[You play very well and you got 25 health.]";
        j -= 15;
            cout<<"\n\nYour current health is "<<j<<endl;
            cout<<"============================================/========================================";
		}
		if(i == 5)
//for fifth room
		{
			cout<<"\nThe frost troll swings a huge ice club, and I roll out of the way.";
            cout<<"\nI use a fire spell to melt the ice covering its body.";
            cout<<"\nThe troll charges at me, but I dodge and hit its chest where it's weak.";
            cout<<"\nIt grabs me, but I break free and hit it again with my sword.";
            cout<<"\nAfter more fire attacks, the troll finally falls down, defeated.";
            cout<<"\n\n\t\t\t[You are wonderfull. You got 10 health.]";
        j += 10;
            cout<<"\n\nYour current health is "<<j<<endl; 
            cout<<"============================================/========================================";
		}
	break;
//case 2
	    case 2:
//for first room
	    if(i == 1)
	    {
			cout<<"\n\nYou already in full health"<<endl;
			cout<<"============================================/========================================";
		}
//for second room
	    else if(i == 2)
		{
		j += 10;
			cout<<"\n\nYou healed yourself for 10 health points.";
		if ( j > 100)
		{
			j = 100;
			cout<<"\n\nYour current health is "<<j<<endl;
		}
		else
			cout<<"\n\nYour current health is "<<j<<endl; 
			cout<<"============================================/========================================";
	    }
//for third room
	    else if(i == 3)
		{
		j += 20;
            cout<<"\n\nYou healed yourself for 20 health points.";
        if ( j > 100)
		{
			j = 100;
			cout<<"\n\nYour current health is "<<j<<endl;
		}
		else
			cout<<"\n\nYour current health is "<<j<<endl;
		    cout<<"============================================/========================================";
		}
//for fourth room
		else if(i == 4)
		{
		j += 13;	
		    cout<<"\n\nYou healed yourself for 13 health points.";
		if ( j > 100)
		{
			j = 100;
			cout<<"\n\nYour current health is "<<j<<endl;
		}
		else
			cout<<"\n\nYour current health is "<<j<<endl;
			cout<<"============================================/========================================"; 
	    }
//for fifth room
		else
		{
		j += 5;	
		    cout<<"\n\nYou healed yourself for 05 health points.";
		if ( j > 100)
		{
			j = 100;
			cout<<"\n\nYour current health is "<<j<<endl;
		}
		else
			cout<<"\n\nYour current health is "<<j<<endl; 
			cout<<"============================================/========================================";
		}
		break;
//case 3
		case 3:
//for first room
			if(i == 1)
			{
			j -= 20;
				cout<<"\n\n\t\t\tYou ran from the room to save your life";
				cout<<"\n\t\t\tYou are exhausted and you lose 20 health points";
				cout<<"\n\nYour current health is "<<j<<endl; 
				cout<<"============================================/========================================";
			}
//for second room
			if(i == 2)
			{
			j -= 10;
				cout<<"\n\n\t\t\tYou are exhausted. You lose 10 health points";
				cout<<"\n\nYour current health is "<<j<<endl;
				cout<<"============================================/========================================";
			}
//for third room
			if(i == 3)
			{
			j -= 30;
				cout<<"\n\n\t\t\t[You ran from room this monster might kill you.]";
				cout<<"\n\t\t\t[Your 30 health points has been deducted]";
				cout<<"\n\nYour current health is "<<j<<endl;
				cout<<"============================================/========================================";
			}
//for fourth room
			if(i == 4)
			{
			j -= 15;
				cout<<"\n\n\t\t\tYour 15 health points has been deducted";
				cout<<"\n\nYour current health is "<<j<<endl;
				cout<<"============================================/========================================";
			}
//for fifth room
			if(i == 5)
			{
				cout<<"\n\n\t\t\tYou ran from final stage of game.";
				cout<<"\n\n[Runer should be punished you lose with shame.]"<<endl;
				cout<<"============================================/========================================";
			}
			break;
// default
			default:
				cout<<"\n\nChutia mazy na lga or sahi sy number dal.";
			}
	        }
	return 0;
}
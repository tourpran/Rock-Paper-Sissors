/*	code for rock-paper-sissors:	*/
#include <bits/stdc++.h> 
#include <cstdlib>
#include <boost/algorithm/string.hpp>

using namespace std;

#define ll long long

int main() 
{
	ll testcase,NoOfWins=0;
	cout<<"How many times do you want to play the game : ";
	cin>>testcase;
	cout<<"-----------ARE YOU READY-----------"<<endl;
	ll noofcomputerwins = testcase;
	while(testcase--)
	{
		string weaponchosen;
		cout<<"The weapons are rock/paper/sissors\n";
		cout<<"Enter your weapon: ";
		cin>>weaponchosen;
		boost::to_lower(weaponchosen);
		do		
		{
			if(weaponchosen != "rock" && weaponchosen != "paper" && weaponchosen != "sissors")
			{
				cout<<"Are you kidding ? You chose "<<weaponchosen<<end;
				cout<<"chose something :";
				string newweaponchosen;
				cin>>newweaponchosen;
				weaponchosen = "";
				boost::to_lower(newweaponchosen);
				weaponchosen = newweaponchosen;
			}
			else
			{
				break;
			}
		}
		while(true);
		srand(time(0));
		ll r = (rand()%3)+1;
		if(r==1)
		{
			cout<<"computer chose ---- rock\n";	 
			if(weaponchosen == "rock" || weaponchosen == "sissors")
			{
				cout<<"Better luck next time\n";
			}
			else
			{
				cout<<"You won!!\n";
				NoOfWins++;
			}
		}
		if(r==2)
		{
			cout<<"sissors\n";
			if(weaponchosen == "sissors" || weaponchosen == "paper")
			{
				cout<<"Better luck next time\n";
			}
			else
			{
				cout<<"You won!!\n";
				NoOfWins++;
			}
		}
		if(r==3)
		{
			cout<<"paper\n";
			if(weaponchosen == "paper" || weaponchosen == "rock")
			{
				cout<<"Better luck next time\n";
			}
			else
			{
				cout<<"You won!!\n";
				NoOfWins++;
			}
		}	
	}
	cout<<"Total scoreboard: \n";
	cout<<"Computers score : "<<noofcomputerwins-NoOfWins<<endl;
	cout<<"Your score      : "<<NoOfWins<<endl;
}


#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
using namespace std;

int main()
{
	int rounds,player;
	string name;
	cout<<"Enter your name: ";
	cin>>name;
	cout<<"How many rounds you want to play? ";
	cin>>rounds;
	int player_score=0,computer_score=0;
	for (int round=1; round <= rounds;round++)
	{
		system("cls");
		cout<<"Round no: "<<round<<endl;
		cout<<"1. Keo "<<endl
			<<"2. Bua "<<endl
			<<"3. Bao "<<endl
			<<"Select Keo Bua or Bao? ";cin>>player;
		srand(time(0));
		int computer;
		computer = (rand () % 3)+1;
		if (player == 1 && computer == 2)
		{
			cout << "COMPUTER WIN"<<endl;
			computer_score++;				
    	}
    	else if (player == 2 && computer == 3)
    	{
    		cout << "COMPUTER WIN"<<endl;
			computer_score++;
		}
		else if (player == 3 && computer == 1)
    	{
    		cout << "COMPUTER WIN"<<endl;
			computer_score++;
		}
		else if (player == computer)
		{
			cout<< "DRAW :)) "<<endl;
		}
		else
		{
			cout<<"YOU WIN "<<endl;
			player_score++;
		}
		cout<<name<<"'s Score = "<<player_score<<endl
			<<"Computer's Score = "<<computer_score<<endl;
		cout<<"Press any key to continue....... "<<endl;
		getch();
		system("cls");
	}
	if (computer_score>player_score)
	{
		cout<<"YOU LOSE!!!! TRY AGAIN";	
	}
	else if (computer_score<player_score)
	{
		cout<<"GREAT! YOU ARE THE WINNER!!";
	}
	else 
	{
		cout<<"DRAW! PLAY AGAIN :))";
	}
	return 0;
}
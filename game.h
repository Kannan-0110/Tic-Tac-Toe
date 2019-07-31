using namespace std;
#include"Board.h"
#include"check.h"
#include<iomanip>
int game()
{
	extern int M1,M2,M3;
	extern char gt;
	int player=1,i,choice,j;
	char mark,sa;
	int s[26];
	for(int b=0;b<26;b++)
		s[b]=b;
	system("cls");

	//PlaySound(TEXT("C:\\Users\\saf\\Documents\\Visual Studio 2010\\Projects\\Tic Tac Toe\\minecraft_click.wav"),NULL,SND_SYNC);
	do
	{
		board(s);
		player=(player%2)?1:2;

		cout<<"\t\t\t\tTurn: player "<<player<<" :";
		cin>>choice;
		//PlaySound(TEXT("C:\\Users\\saf\\Documents\\Visual Studio 2010\\Projects\\Tic Tac Toe\\minecraft_click.wav"),NULL,SND_SYNC);

		mark = (player == 1) ? 'X' : 'O';

		j=choice;
		if(j==0)
			return -1;
		if(s[j] ==choice)
			s[j] =(int)mark;


		else if(choice==-1)
			return -1;

		else 
		{
			cout<<"\tInvalid move ";
			player-=1;
			 sa=_getch();
			}
		i=checkwin(s);
		player+=1;

	}while (i ==-1);

    board(s);
    if(i == 1)
	{
		cout<<"\t\t\tPlayer "<<--player<<" win";
		if(player==1)
			M1++;
		else
			M3++;
	}
    else
	{
		cout<<"\t\t\tGame draw";
		M2++;
	}
	sa=_getch();
    
    return 0;
}
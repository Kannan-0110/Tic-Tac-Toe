// Tic Tac Toe.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdio.h>
#include <tchar.h>
#include<iostream>
#include<stdlib.h>
#include<windows.h>
#include<MMSystem.h>
#include "game.h"

using namespace std;

char gt;
int M1=0,M2=0,M3=0;
int main()
{
	int opt,i,ex=0;
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
	while(1){
		M1=0;M2=0;M3=0;
	system("cls");
	std::cout<<"\n\n\n\n\t\t\t\t    TIC TAC TOE "<<std::endl;
	cout<<"\n\n\n";
	cout<<"\t\t\t   1.New Game\n"<<endl;
	cout<<"\t\t\t   2.How to Play\n"<<endl;
	cout<<"\t\t\t   3.About\n"<<endl;
	cout<<"\t\t\t   4.Exit\n"<<endl;
	opt=_getch();
	//PlaySound(TEXT("C:\\Users\\saf\\Documents\\Visual Studio 2010\\Projects\\Tic Tac Toe\\minecraft_click.wav"),NULL,SND_SYNC);


	switch(opt)
	{
	case '1':
		system("cls");
			cout<<"\n\n\n\n";
	cout<<"\n\n\n\n\t\t\t    Select Level\n\n"<<endl;
	cout<<"\t\t\t   1.3X3 (easy)\n"<<endl;
	cout<<"\t\t\t   2.5x5 (medium)\n"<<endl;
	gt=_getch();
	for(i=0;i<3;i++)
    {
		ex=game();
		if(ex==-1)
			break;
	}


	break;
	case '2':system("cls");cout<<"\n\n\t\t\tgeneral instruction\n\n\t	this game is playable for 2 players\nboth players will have 2 marks 'X' and 'O' respectively.\n\n\n\t\t 3X3 Mode\n\n\t if consequetive three 'X's or 'O's in vertical or horizontaly or diagonally placed then the corresponding player wins the round\nif all places are occupied and there is no winning condition then the game will be draw\n\n\n\t\t5X5 Mode\n\n\tif consequetive Four 'X's or 'O's in vertical or horizontaly or diagonally placed then the corresponding player wins the round\nif all places are occupied and there is no winning condition then the game will be draw\n" ;
	  	_getch();break;
	case '3':system("cls");cout<<"\n\n\t\t\tAbout\n This project is developed in c++ language using visual studio 2010 express.\n\n\n\tCredits:\n\n\tKannan-4JK17CS025\n\tUnni-4JK17CS056\n\tSafvan T-4JK17CS042\n\tAnugrah C-4JK17CS058\n" ;
	 _getch();break;
	case '4':return 0;
	}
	}
	_getch();
	return 0;
       }
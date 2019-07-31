
using namespace std;

void board(int s[])
{
extern int M1,M2,M3;
extern char gt;
int k;
if(gt=='1')
{
k=1;
system("cls");
cout<<"\n\n\n\t\t\t   TIC TAC TOE\n\n\n";
cout<<"\t\tplayer1(X):"<<M1<<"         Draw:"<<M2<<"\t    player2(O):"<<M3<<endl;
cout<<endl<<endl;
cout<<"\t\t\t ------------------------------"<<endl;
for(int i=1;i<=3;i++){
cout<<"\t\t\t|         |         |         |"<<endl<<"\t\t\t";
for(int j=1;j<=3;j++){

cout<<"|    ";
if(s[k]=='X')
	cout<<"X";
else if(s[k]=='O')
	cout<<"O";
else 
	cout<<k;
cout<<"    ";
k++;
}
cout<<"|"<<endl<<"\t\t\t|         |         |         |"<<endl;
cout<<"\t\t\t ------------------------------"<<endl;
}cout<<"\t\t 0-Exit";
}
else
{
	k=1;
system("cls");
cout<<"\n\n\t\t\t    TIC TAC TOE\n\n\n";
cout<<"\t\tplayer1(X):"<<M1<<"         Draw:"<<M2<<"\t    player2(O):"<<M3<<endl;
cout<<endl<<endl;
cout<<"\t\t ------------------------------------------------------"<<endl;
for(int i=1;i<=5;i++){
cout<<"\t\t|          |          |          |          |          |"<<endl<<"\t\t";
for(int j=1;j<=5;j++){

cout<<"|    ";
//if((s[k]=='X'||s[k]=='O')||k<10)
	//cout<<" "<<s[k];
if(s[k]=='X')
	cout<<" X";
else if(s[k]=='O')
	cout<<" O";
else if(k<10)
	cout<<" "<<k;
else 
	cout<<k;
cout<<"    ";
k++;
}
cout<<"|"<<endl<<"\t\t|          |          |          |          |          |"<<endl;
cout<<"\t\t ------------------------------------------------------ "<<endl;

}
cout<<"\t\t 0-Exit";
}

}
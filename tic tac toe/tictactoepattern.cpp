//"Shree Ganesh"
//"Jay Mataji"
// Design the front Page
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	for(int i=1;i<=25;i++)
	{
		for(int j=1;j<=25;j++)
		{
			if(i==1)
			{
				if(j==1||j==9||j==17)
				cout<<" * ";
				else
				cout<<"   ";
			}
			else if(i==2)
			{
				if(j==2||j==9||j==17||j==19||j==23)
				cout<<" * ";
				else
				cout<<"   ";
			}
			else if(i==3)
			{
				
				if(j==3||j==4||j==5||j==9||j==17||j==20||j==22)
				cout<<" * ";
				else
				cout<<"   ";
			}
			else if(i==4)
			{
				
				if(j==3||j==4||j==6||j==9||j==17||j==21)
				cout<<" * ";
				else
				cout<<"   ";
			}
			else if(i==5)
			{
				
				if(j==3||j==5||j==6||j==9||j==17||j==20||j==22)
				cout<<" * ";
				else
				cout<<"   ";
			}
			else if(i==6)
			{
				
				if(j==3||j==6||j==19||j==9||j==17||j==23)
				cout<<" * ";
				else
				cout<<"   ";
			}
			else if(i==7)
			{
				
				if(j==4||j==5||j==7||j==9||j==17)
				cout<<" * ";
				else
				cout<<"   ";
			}
			else if(i==8)
			{
				
				if(j==8||j==9||j==17)
				cout<<" * ";
				else
				cout<<"   ";
			}
			else if(i==9||i==17)
			{
				cout<<" * ";
			}
			else if(i==10)
			{
				
				if(j==9||j==17||j==10)
				cout<<" * ";
				else
				cout<<"   ";
			}
			else if(i==11)
			{
				
				if(j==11||j==12||j==13||j==9||j==17)
				cout<<" * ";
				else
				cout<<"   ";
			}
			else if(i==12)
			{
				
				if(j==11||j==12||j==14||j==9||j==17)
				cout<<" * ";
				else
				cout<<"   ";
			}
			else if(i==13)
			{
				
				if(j==11||j==13||j==14||j==9||j==17)
				cout<<" * ";
				else
				cout<<"   ";
			}
			else if(i==14)
			{
				
				if(j==11||j==14||j==9||j==17)
				cout<<" * ";
				else
				cout<<"   ";
			}
			else if(i==15)
			{
				
				if(j==15||j==12||j==13||j==9||j==17)
				cout<<" * ";
				else
				cout<<"   ";
			}
			else if(i==16)
			{
				
				if(j==16||j==9||j==17)
				cout<<" * ";
				else
				cout<<"   ";
			}
			else if(i==18)
			{
				
				if(j==18||j==9||j==17)
				cout<<" * ";
				else
				cout<<"   ";
			}
			else if(i==19)
			{
				
				if(j==2||j==6||j==19||j==20||j==21||j==9||j==17)
				cout<<" * ";
				else
				cout<<"   ";
			}
			else if(i==20)
			{
				
				if(j==3||j==5||j==19||j==20||j==22||j==9||j==17)
				cout<<" * ";
				else
				cout<<"   ";
			}
			else if(i==21)
			{
				
				if(j==4||j==19||j==21||j==22||j==9||j==17)
				cout<<" * ";
				else
				cout<<"   ";
			}
			else if(i==22)
			{
				
				if(j==3||j==5||j==19||j==22||j==9||j==17)
				cout<<" * ";
				else
				cout<<"   ";
			}
			else if(i==23)
			{
				
				if(j==2||j==6||j==20||j==21||j==23||j==9||j==17)
				cout<<" * ";
				else
				cout<<"   ";
			}
			else if(i==24||i==25)
			{
				
				if(j==9||j==17)
				cout<<" * ";
				else
				cout<<"   ";
			}
			
			
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<"Play the Game \n";
	cout<<"Play 1 Player Game Press ---------------->>>>>>>>>>>>1\n\n";
	cout<<"Play 2 Player Game Press ---------------->>>>>>>>>>>>2\n\n";
	return 0;
}

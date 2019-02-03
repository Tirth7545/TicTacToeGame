//"Shree Ganesh"
//"Jay Mataji"
//Final Cpp
//"Shree Ganesh"
//"jay mataji"
// Trying to make simple game
#include<cstdlib>//for random function
#include<ctime>	//for the random time
#include<iostream>
#include<iomanip>		
using namespace std;
int main(void);
int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//void display(int ,int);	
	/***********************************************************************************************************************************************************
													Defining Fun Function
	************************************************************************************************************************************************************/
	
	
	fun(int tun,int sss_var)    		//this function is for to againg play 
	{
		if(sss_var==2)
		{
			char ch;
			cout<<tun+1<<" Winner"<<endl<<endl;
			cout<<"If You Want to Continue Press y Else n\n";
			cin>>ch;
			if(ch=='y'||ch=='Y')
			{
				system("cls");
				main();
			}
			else 
			exit(0);	
		}
		else if(sss_var==1)
		{
			char ch;
			if(tun+1==2)
			{
				cout<<"CPU IS"<<" Winner"<<endl<<endl;
				cout<<"If You Want to Continue Press y Else n\n";
				cin>>ch;
				if(ch=='y'||ch=='Y')
				{
					system("cls");
					main();
				}
				else 
				exit(0);	
			}
			else
			{
				char ch;
			cout<<tun+1<<" Winner"<<endl<<endl;
			cout<<"If You Want to Continue Press y Else n\n";
			cin>>ch;
			if(ch=='y'||ch=='Y')
			{
				system("cls");
				main();
			}
			else 
			exit(0);	
			}
			
		}
		
	}
	
	
	
	/************************************************************************************************************************************************
										Defination of Displaying Function
	***********************************************************************************************************************************************/
	
display(int nn,int turnn,int ss_var)
{

	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
				
			if(a[i][j]==nn)
			{
				if(turnn==1)
				a[i][j]=44;											//x	
				else if(turnn==0)
				a[i][j]=55;											//y
			}
			
/********************************************************************************************************************************************************
											This Part is the Displaying the Table format
**********************************************************************************************************************************************************/
			if(a[i][j]==44)
			cout<<"X"<<"  ";
			else if(a[i][j]==55)
			cout<<"O"<<"  ";
			else
			cout<<a[i][j]<<"  ";
		}
		cout<<endl<<endl;
	}
	/************************************************************************************************************************************************************
											Check  Defination
*************************************************************************************************************************************************************/

	
		if(((a[0][0]==a[0][1])&&(a[0][1]==a[0][2])))
		{
			fun(turnn,ss_var);
		}
		else if(((a[0][0]==a[1][0])&&(a[1][0]==a[2][0])))
		{
			fun(turnn,ss_var);
		}
		else if( ((a[0][0]==a[1][1])&&(a[1][1]==a[2][2])))
		{
			fun(turnn,ss_var);
		}
		else if(((a[0][1]==a[1][1])&&(a[1][1]==a[2][1])))
		{
			fun(turnn,ss_var);
		}
		else if(((a[0][2]==a[1][2])&&(a[1][2]==a[2][2])))
		{
			fun(turnn,ss_var);
		}
		else if(((a[0][2]==a[1][1])&&(a[1][1]==a[2][0])))
		{
			fun(turnn,ss_var);
		}
		else if(((a[1][0]==a[1][1])&&(a[1][1]==a[1][2])))
		{
			fun(turnn,ss_var);
		}
		else if(((a[2][0]==a[2][1])&&(a[2][1]==a[2][2])))
		{
			fun(turnn,ss_var);
		}
		
}

/***********************************************************************************************************************************************************
														Show Pattern
*************************************************************************************************************************************************************/
Show_Pattern()
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
}

	
	
	/*********************************************************************************************************************************************************
					
											Main Function
**********************************************************************************************************************************************************/


int main()
{
	Show_Pattern();
	int s_var;
	cin>>s_var;
	system("cls");
	switch(s_var)
	{
		/*********************************************************************************************************************************************
											Case 1 Start
		*************************************************************************************************************************************************/									
	case 1:
	system("color f3");   //for changing the colour of the consol to display attractivee.....
	a[0][0]=1,a[0][1]=2,a[0][2]=3,a[1][0]=4,a[1][1]=5,a[1][2]=6,a[2][0]=7,a[2][1]=8,a[2][2]=9;  //Because of the Problem of the Globale variable..
	char x;
	cout<<"This Is The 1 Player Tic Tac Toe Game \n\n";
	cout<<"Player 1 Has :-O\n\n";
	cout<<"CPU Has :-X\n\n";
	cout<<"Please Enter the Key To Play This Game\n\n"<<endl;
	cin>>x;										//this variable to use is for start play game
	if(x)
	{
	system("cls");
	
	//This for displaying function
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<a[i][j]<<"  ";
		}
		cout<<endl<<endl;
	}
	/*********************************************************************************************************************************************************
										In this part to to checking use to turn 
	******************************************************************************************************************************************************/
	int turn=0,n,c[10]={0,1,2,3,4,5,6,7,8,9};
	for(int i=1;i<=9;i++)
	{
		if(i%2!=0)
		turn=0;
		else
		turn=1;
		
		
		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		if(turn==1)
		{
			cout<<"Now Turn is for player:"<<"CPU"<<endl;
				srand(time(0));
			 	n=1+(rand()%9);
			 	if(c[n]!=n)
			 	{
			 		while(c[n]!=n)   //Matha no dukha vo
					 {
							srand(time(0));
			 				n=1+(rand()%9); 	
					 }	
				}
				/*while(c[n]!=0)
				{
					srand(time(0));
					n=1+(rand()%9);
				}*/
				//a[n]=1;
		}
		else
		{
			cout<<"Now Turn is for player:"<<turn+1<<endl;
			cin>>n;
		}
			
		while(c[n]!=n)
		
		{
			cout<<"Please Enter the Correct Value\n\n";			//For The Correctness Of the Values
			cin>>n;
		}
		c[n]=0;								// Because to prevetn the conflict the value of repeats occur
		system("cls");
			display(n,turn,s_var);
		
	}
	cout<<"Opsssss.........!!!!! Tiee........Game is Over!!!!!!!";
		char ch;
			//cout<<turn+1<<" Winner"<<endl<<endl;
			cout<<"\n\nIf You Want to Continue Press y Else n\n";
			cin>>ch;
			if(ch=='y'||ch=='Y')
			{
				system("cls");
				main();
			}
			else 
			exit(0);
			return 0;	
	}
	/************************************************************************************************************************************************************
													Case 2 Start
	***********************************************************************************************************************************************************/
		
		case 2:
	system("color f3");   //for changing the colour of the consol to display attractivee.....
	a[0][0]=1,a[0][1]=2,a[0][2]=3,a[1][0]=4,a[1][1]=5,a[1][2]=6,a[2][0]=7,a[2][1]=8,a[2][2]=9;  //Because of the Problem of the Globale variable..
	char xx;
	cout<<"This Is The 2 Player Tic Tac Toe Game \n\n";
	cout<<"Player 1 Has :-O\n\n";
	cout<<"Player 2 Has :-X\n\n";
	cout<<"Please Enter the Key To Play This Game\n\n"<<endl;
	cin>>xx;
	if(xx)
	{
	system("cls");
	
	//This for displaying function
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<a[i][j]<<"  ";
		}
		cout<<endl<<endl;
	}
	/*********************************************************************************************************************************************************
										In this part to to checking use to turn 
	******************************************************************************************************************************************************/
	int turn=0,n,c[10]={0,1,2,3,4,5,6,7,8,9};
	for(int i=1;i<=9;i++)
	{
		if(i%2!=0)
		turn=0;
		else
		turn=1;
		
		cout<<"Now Turn is for player:"<<turn+1<<endl;
		cin>>n;
	
		while(c[n]!=n)
		
		{
			cout<<"Please Enter the Correct Value\n\n";			//For The Correctness Of the Values
			cin>>n;
		}
		c[n]=0;
		system("cls");
			display(n,turn,s_var);				//display function
		
	}
	cout<<"Opsssss.........!!!!! Tiee........Game is Over!!!!!!!";
		char ch;
			//cout<<turn+1<<" Winner"<<endl<<endl;
			cout<<"\n\nIf You Want to Continue Press y Else n\n";
			cin>>ch;
			if(ch=='y'||ch=='Y')
			{
				system("cls");
				main();
			}
			else 
			exit(0);
			return 0;	
		}
		default:
		cout<<endl<<"OpSS!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!Your Entery is Wrong!!!!!!!!!!!!!";
	return 0;
	}
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	







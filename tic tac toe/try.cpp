//"Shree Ganesh"
//"jay mataji"
// Trying to make simple game
#include<iostream>
#include<iomanip>
using namespace std;
int main(void);
int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//void display(int ,int);	
	/***********************************************************************************************************************************************************
													Defining Fun Function
	************************************************************************************************************************************************************/
	
	
	fun(int tun)    		//this function is for to againg play 
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
	
	
	
	/************************************************************************************************************************************************
										Defination of Displaying Function
	***********************************************************************************************************************************************/
	
display(int nn,int turnn)
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
			fun(turnn);
		}
		else if(((a[0][0]==a[1][0])&&(a[1][0]==a[2][0])))
		{
			fun(turnn);
		}
		else if( ((a[0][0]==a[1][1])&&(a[1][1]==a[2][2])))
		{
			fun(turnn);
		}
		else if(((a[0][1]==a[1][1])&&(a[1][1]==a[2][1])))
		{
			fun(turnn);
		}
		else if(((a[0][2]==a[1][2])&&(a[1][2]==a[2][2])))
		{
			fun(turnn);
		}
		else if(((a[0][2]==a[1][1])&&(a[1][1]==a[2][0])))
		{
			fun(turnn);
		}
		else if(((a[1][0]==a[1][1])&&(a[1][1]==a[1][2])))
		{
			fun(turnn);
		}
		else if(((a[2][0]==a[2][1])&&(a[2][1]==a[2][2])))
		{
			fun(turnn);
		}
		

}

	
	
	/*********************************************************************************************************************************************************
					
											Main Function
**********************************************************************************************************************************************************/


int main()
{
	system("color f3");   //for changing the colour of the consol to display attractivee.....
	a[0][0]=1,a[0][1]=2,a[0][2]=3,a[1][0]=4,a[1][1]=5,a[1][2]=6,a[2][0]=7,a[2][1]=8,a[2][2]=9;  //Because of the Problem of the Globale variable..
	char x;
	cout<<"This Is The 2 Player Tic Tac Toe Game \n\n";
	cout<<"Player 1 Has :-O\n\n";
	cout<<"Player 2 Has :-X\n\n";
	cout<<"Please Enter the Key To Play This Game\n\n"<<endl;
	cin>>x;
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
		
		cout<<"Now Turn is for player:"<<turn+1<<endl;
		cin>>n;
	
		while(c[n]!=n)
		
		{
			cout<<"Please Enter the Correct Value\n\n";			//For The Correctness Of the Values
			cin>>n;
		}
		c[n]=0;
		system("cls");
			display(n,turn);
		
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
}
	
	
	
	
	
	
	
	
	
	
	
	
	







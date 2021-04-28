#include<iostream>
#include<conio.h>
using namespace std;
#include<string.h>
int main()
{
	int a,b;
	for(a=1;a<=8;a++)
	{
	
			for(b=15;b>=1;b--)
			{
				cout<<" ";
			}
	
		                       
			for(b=8;b>=a;b--)
			{
			
			cout<<" ";
		}
		
			for(b=1;b<=a;b++)
			{
			
						cout<<"*";
		}
			cout<<"\n";
		}//
		for(a=2;a<=5;a++)
		{
			for(b=1;b<=a;b++)
			{
				cout<<" ";
				
			}
			for(b=24;b>=1;b--)
			{
				cout<<"*";
			}
			for(b=5;b>=a;b--)
			{
				cout<<"*";
				
			}
			for(b=5;b>=a;b--)
			{
				cout<<"*";
				
			}
			cout<<"\n";
		}
		for(b=40;b>=1;b--)
		{
		if(b%2==0)
		{
			cout<<" *";
		}
		else
		{
			cout<<"*";
						}
		if(b==20);
		 {
		 cout<<"\n";
		}
		}
		
			
getch ();
return 0;
}


//to check whether a year is leap year or not

#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"Enter a Year\n";
	cin>>year;
	if(year%4==0)
	{
		if(year%100==0)
		{
			if(year%400==0)
			{
				cout<< year <<" is Leap year\n";
			}
			else
			{
				cout<<year <<" is Not leap year\n";
			}
		}
		else
		{
			cout<< year <<" is Leap year\n";
		}
	}
	else
	{
		cout<<year <<" is Not leap year\n";
	}
	
	return 0;
}
		

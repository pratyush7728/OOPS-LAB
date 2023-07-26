//check whether a number is even or odd

#include<iostream>
using namespace std;
int main()
{
	int number;
	cout<<"Enter number: \n";
	cin>>number;
	if(number%2==0)
	{
		cout<< number <<" is Even number\n";
	}
	else
	{
		cout<< number <<" is Odd number\n";
	}
	return 0;
}

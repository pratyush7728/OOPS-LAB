//Multiplication table of a number

#include<iostream>
using namespace std;
int main()
{
	int number;
	cout<<"Enter the number whose multiplication table is to find\n";
	cin>>number;
	cout<<"Printing multiplication table of " << number <<"\n";
	for(int i=1;i<=10;i++)
	{
		cout<< number<< "*" <<i << "=" << number*i <<"\n";
	}
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cout<<"Enter the number\n";
	cin>>n;
	while(n!=0)
	{
		int temp=n%10;
	        sum=sum+temp;
		n=n/10;
	}
	cout<<"Sum of digits in given number is "<<sum;
	return 0;
}

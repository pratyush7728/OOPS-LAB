#include<iostream>
using namespace std;
int main()
{
	int n;
	int result=1;
	cout<<"Enter number to find factorial\n";
	cin>>n;
	for(int i=n;i>=1;i--)
	{
		result=result*i;
	}
	cout<<"Factorial of "<<n<<" is "<<result;
	return 0;
}
		
	
	

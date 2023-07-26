#include<iostream>
using namespace std;
int main()
{
 	int num;
 	cout<<"Enter a number"<<endl;
 	cin>>num;
 	int f=0;
 	for(int i=2;i<num;i++)
 	{
 		if(num%i==0)
 		{ 	
 			f=1;
 		}
 	}
 	if(f==0) cout<<"yes"<<endl;
 	else cout<<"No"<<endl;
 	return 0;
 }

#include<iostream>
using namespace std;
class stud
{
    char usn[20],name[30];
    float marks[3];
    int i;
    public:
    float avg;
    void read();
    void calc();
    void disp();
};
void stud::read()
{
    cout<<"\n Enter USN no.:";
    cin>>usn;
    cout<<"\n Enter name:";
    cin>>name;
    for(i=0;i<3;i++)
    {
        cout<<"\n Enter the marks of subject"<<i+1<<": ";
        cin>>marks[i];
    }
}
void stud::calc()
{
    int sum=0,min=marks[0];
    for(i=0;i<3;i++)
    {
        sum+=marks[i];
        if(min>=marks[i])
        min=marks[i];
    }
    avg=float(sum-min)/2;
}
void stud::disp()
{
    cout<<usn<<"\t"<<name<<"\t";
    for(i=0;i<3;i++)
    cout<<marks[i]<<"\t";
    cout<<avg<<"\n";
}
int main()
{
    int n,topper,i;
    float max=0;
    cout<<"\n Enter the number of students:";
    cin>>n;
    stud s[n];
    for(i=0;i<n;i++)
    {
        s[i].read();
        s[i].calc();
    }
    cout<<"USN\t Name\t";
    for(i=0;i<3;i++)
    {
        cout<<"Marks "<<i+1<<"\t";
    }
    cout<<"Avg.\n";
    for(i=0;i<n;i++)
    s[i].disp();
    for(i=0;i<n;i++)
    {
        if(max<s[i].avg)
        {
            max=s[i].avg;
            topper=i;
        }
        
    }
    for(i=0;i<n;i++)
    {
        if(s[topper].avg==s[i].avg)
        {
            cout<<"\n The toppers is student "<<i+1<<": ";
            cout<<"\nDetails:-\n";
            s[i].disp();
        }
    }
}

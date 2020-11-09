#include<iostream>
using namespace std;
int main()
{
    int age ;
    cout<<"Enter your Age :";
    cin>>age;
    if(age>0)
    {
        if(age>=18)
        {
            cout<<"\n"<<"You are eligible for voting";
            cout<<"\n";
            cout<<"\n"<<"Do you have a voting ID ? (Y/N)";
            char c;
            cin>>c;
            if(c=='Y'||c=='y')
            {
                cout<<"\n"<<"Find out nearest voting center and vote";
            }
            else if(c=='N'||c=='n')
            {
                cout<<"\n"<<"Enroll for Voting ID !";
            }
            else
            {
                cout<<"\n"<<"Invalid Input";
            }
        }
        else
        {
            cout<<"\n"<<"Not Eligible for voting" ;
        }
    }
    else
    {
    cout<<"Invalid input";
    }
    return(0);
}

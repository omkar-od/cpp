#include<iostream>
using namespace std;
int main()
{
    int h , m , s ;
    cout<<"Enter Hours ?\n";
    cin>>h;
    cout<<"Enter Minutes ?\n";
    cin>>m;
    cout<<"Enter Seconds ?\n";
    cin>>s;
    cout<<"\n";
    cout<<h<<":"<<m<<":"<<s;
    int r;
    r = h*3600 + m*60 + s;
    cout<<"\n"<<"Total Time in Seconds :"<<r;
    return(0);
}

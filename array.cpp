#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    cout<<"Enter elements for array of size 5 :" ;
    for(int i=0;i<5;i++)
        {
            cin>>arr[i];
        }
    cout<<"\n"<<"The elements you entered are :";
    for(int j=0;j<5;j++)
    {
        cout<<arr[j]<<"\n" ;
    }
    return(0);
}

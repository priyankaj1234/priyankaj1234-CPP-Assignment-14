#include<iostream>
using namespace std;
int main()
{
    int a[5],i,sum=0;

    cout<<endl<<" Enter array elements :";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<5;i++)
    {
            sum=sum+a[i];
    
    }

    cout<<endl<<"Sum = "<<sum;
   
    
    return 0;
}
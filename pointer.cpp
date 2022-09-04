#include<iostream>
using namespace std;

int main()
{
    int a[5]={10,20,30,40,50};
    int *p=&a[5];

    cout<<endl<<a;
    cout<<endl<<*p;
    cout<<endl<<a[0];
    cout<<endl<<a+1;
    cout<<endl<<*p+1;
    cout<<endl<<*(a+1);
    cout<<endl<<a[1]<<endl;
    cout<<endl<<a[2];
    cout<<endl<<*a+2;
    cout<<endl<<a+2;
    cout<<endl<<*(a+2);

    return 0;
}
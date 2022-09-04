#include<iostream>
using namespace std;

int sumofarray(int a[],int n)
 {
 	int i,sum=0;

    for(i=0;i<n;i++)
    {
         sum=sum+a[i];
         
    }
 	return sum;
 }
int main()
{
    int a[10],i,n,sum;
   
    cout<<endl<<"Enter size of the array : ";
    cin>>n;
 
    cout<<endl<<"Enter elements in array : ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sum=sumofarray(a,n);

    cout<<endl<<"sum of array is :"<<sum;

    return 0;
    
}
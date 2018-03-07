#include <iostream>

using namespace std;

int main()
{
    long int n[100],m,l,sum=0,k;
    cout<<"Give No. OF Integers : ";
    cin>>k;
    for(int i=0;i<k;i++)
        cin>>n[i];
    m=n[1];
    l=n[1];
    for(int i=0;i<k;i++)
       sum=sum+n[i];
    for(int i=0;i<k;i++)
        m=min(m,n[i]);
    for(int i=0;i<k;i++)
        l=max(l,n[i]);
    cout<<"Minimum Sum of "<<m-1<<" : "<<sum-l<<endl;
    cout<<"Maximum Sum of "<<m-1<<" : "<<sum-m;
    return 0;
}

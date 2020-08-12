#include<iostream>
using namespace std;
int main()
{
    int i=2,n,flag=1;
    cout << "Enter the number: ";
    cin >> n;
    for(i=2;i<=n/2;i++)
    {
        if(n%2==0)
            flag=0;
        break;
    }
    if(flag==1)
    {
        cout << "It is a prime number ";
    }
    else
    {
        cout << "It is not a prime number ";
    }
    return 0;
}

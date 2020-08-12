#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout << "Enter three numbers ";
    cin >> a >> b >> c;
    if(a>=b && a>=c)
    {
        cout << "Largest no. is: "<<a;
    }
    if(b>=a && b>=c)
    {
        cout << "Largest no. is: "<<b;
    }
    if(c>=a && c>=b)
    {
        cout << "Largest no. is: "<<c;
    }
    return 0;
}

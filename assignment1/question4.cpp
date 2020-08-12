#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[20];
    int i,n=0,flag=0;
    cout << "Input string: ";
    cin >> str;
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        if(str[i]!=str[n-i-1])
            flag=1;
        break;
    }
    if(flag==1)
    {
        cout << "The string is not a Palindrome\n ";
    }
    else
    {
        cout << "The string is Palindrome";
    }
    return 0;
}

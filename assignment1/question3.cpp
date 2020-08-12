#include<iostream>
using namespace std;
int main()
{
    int a[10],n,i,j,temp;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter elements of array: ";
    for(i=0;i<n;i++)
        cin >> a[i];
    for(i=1;i<=n-1;i++)
    {
        temp=a[i];
        j=i-1;
        while((temp<a[j])&&(j>=0))
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
    cout << "The sorted array is: " ;
    for(i=0;i<n;i++)
    {
        cout <<a[i]<<" ";
    }
    return 0;
}

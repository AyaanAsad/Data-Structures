#include <iostream>
using namespace std;

int main()
{
    int arr[5]={34,25,79,15,80};
    int n=sizeof(arr)/sizeof(int);
    
    for(int i=0;i<n-1;i++)
    {
        int loc=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[loc]>arr[j])
            {
                loc=j;
            }
        }
        swap(arr[i],arr[loc]);
    }
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " " ;
    }
    return 0;
}
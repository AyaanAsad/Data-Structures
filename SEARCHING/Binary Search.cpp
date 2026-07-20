#include <iostream>
using namespace std;

int main(){
    int n;double temp=0.0;
    cout << "Enter number to find square root of: " << endl;
    cin >> n;
    int arr[n+1];
    for(int i=0;i<=n;i++)
    {
        arr[i]=i;
    }
    int lb=0;int ub=n;int mid=(lb+ub)/2;bool flag=false;
    while(lb<=ub)
    {
        mid=(lb+ub)/2;
        if((arr[mid]*arr[mid])>n)
        {
            ub=mid-1;
        }
        else if((arr[mid]*arr[mid])<n)
        {
            lb=mid+1;
            temp=arr[mid];
        }
        else if((arr[mid]*arr[mid]) == n)
        {
            cout << "Perfect Square !, Square root: " << arr[mid];
            flag=true;
            break;
        }
    }
    if(!flag)
    {
        int p; double factor=1.0;
        cout << "Number u entered is not perfect square, enter precision: ";
        cin >> p;
        for(int i=1;i<=p;i++)
        {
            factor/=10;
            while(((temp+factor)*(temp+factor))<=n)
            {
                temp+=factor;
            }
        }
        cout << "Not a perfect square!, Square Root: " << temp;
    }
    return 0;
}
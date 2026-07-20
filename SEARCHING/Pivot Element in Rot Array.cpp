#include <iostream>
using namespace std;

int main(){
    int arr[11]={6,7,8,9,10,11,1,2,3,4,5};
    int lb=0;int ub=10;int mid=0;
    while(lb<ub)
    {
        mid=(lb+ub)/2;
        if(arr[mid]>=arr[0])
        { 
            lb=mid+1;
        }
        else 
        {
            ub=mid;
        }
    }
    cout << arr[mid];
    return 0;
}
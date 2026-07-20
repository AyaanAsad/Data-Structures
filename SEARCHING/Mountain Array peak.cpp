#include <iostream>
using namespace std;

int main(){
    int arr[11]={1,2,3,4,5,6,7,8,6,4,2};
    int lb=0;int ub=10;
    while(lb<ub)
    {
        int mid=(lb+ub)/2;
        if((arr[mid]>arr[mid+1]) && (arr[mid]>arr[mid-1]))
        { 
            cout << "Peak Element: " << arr[mid] << endl << "At position: " << mid;
            break;
        }
        else if(arr[mid]<arr[mid+1])
        {
            lb=mid+1;
        }
        else 
        {
            ub=mid;
        }
        
    }
    return 0;
}
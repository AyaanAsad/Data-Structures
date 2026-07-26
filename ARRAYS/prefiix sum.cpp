#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter length of the array: \n";
    cin >> n;
    int arr[n]; int resarr[n];
    cout << "Enter the values of the array: \n";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=0;j<=i;j++){
            sum+=arr[j];
        }
        resarr[i]=sum;
    }
    
    cout << "Prefix Sum: ";
    for(int i=0;i<n;i++){
        cout << resarr[i] << " ";
    }
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int *start, *end;
    start=&arr[0]; end=&arr[n-1];
    while(start < end){
        int temp = *start;
        *start = *end;
        *end = temp;
        start ++; end--;
    }
    cout << "Reversed Array: " ;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }   
}
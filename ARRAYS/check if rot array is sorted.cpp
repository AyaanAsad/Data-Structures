#include <iostream>
#include <vector>
using namespace std;

bool Check(vector<int> &arr){
    int size = arr.size();
    int count=0;
    for(int i=1;i<size;i++){
        if(arr[i-1]>arr[i]){
            count++;
        }
    }
    if(arr[size-1]>arr[0]){
        count++;
    }
    if(count == 1){
        return true;
    } else {
        return false;
    }
}
int main() {
    int n;
    cout << "Enter the size of the vector: ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    if(Check(arr)){
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}

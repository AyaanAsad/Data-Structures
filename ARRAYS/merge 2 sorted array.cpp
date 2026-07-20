#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> array1;
    vector<int> array2;
    cout << "Enter length of both Arrays: ";
    int n,m;
    cin >> n; cin >> m;
    for(int i=0;i<n;i++){
        int ele;
        cin >> ele;
        array1.push_back(ele);
    }
    for(int i=0;i<m;i++){
        int ele;
        cin >> ele;
        array2.push_back(ele);
    }
    vector<int> result;
    int i=0, length1=0, length2=0;
    while(i!=(m+n)){
        if(length2!=m && length1!=n && array1[length1] >= array2[length2]){
            result.push_back(array2[length2]);
            length2++;
            i++;
        }
        else if(length1!=n && length2!=m && array2[length2] >= array1[length1]){
            result.push_back(array1[length1]);
            length1++;
            i++;
        }
        else if(length1==n){
            result.push_back(array2[length2]);
            length2++;
            i++;
        }
        else if(length2==m){
            result.push_back(array1[length1]);
            length1++;
            i++;
        }
        else{
            cout << "Error";
        }
    }
    for(int i=0; i<(m+n); i++){
        cout << result[i] << " ";
    }
}

#include <iostream>
#include <vector>
using namespace std;
void rotateArray(vector<int> &array, int k, int n){
    for(int i=0; i<k;i++){
        int *start=&array.at(0); int *end=&array.at(1);
        while(end <= &array.at(n-1)){
            swap(*start,*end);
            end++;
        }
    }
}
int main(){
    vector <int> array;
    int k=0;int n=0;
    cout << "Enter length: \n";
    cin >> n;
    for(int i=0; i<n; i++){
        int ele;
        cin >> ele;
        array.push_back(ele);
    }
    cout << "Enter how many times you want to rotate?: \n";
    cin >> k;
    rotateArray(array, k, n);
    cout << "Rotated array: " ;
    for(int i=0; i<n; i++){
        cout << array.at(i) << " ";
    }
}
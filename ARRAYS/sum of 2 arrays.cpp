#include <iostream>
#include <vector>
using namespace std;

void add(vector<int> &num1, vector<int> &num2){
    vector<int> result; 
    int i=num1.size()-1; 
    int j=num2.size()-1; 
    int carry=0; 
    int ans=0;

    while(i>=0 || j>=0){
        int digit1 = 0;
        int digit2 = 0;

        if (i >= 0){
            digit1 = num1[i];
        }
        if (j >= 0){
            digit2 = num2[j];
        }

        ans = (digit1 + digit2 + carry) % 10;
        carry = (digit1 + digit2 + carry) / 10;

        result.push_back(ans);
        i--; j--;
    }

    cout << "The answer is: ";
    for(int i=result.size()-1; i>=0; i--){
        cout << result.at(i);
    }
}

int main() {
    int digit1,digit2;
    cout << "Enter the number of digits for first number: ";
    cin >> digit1;
    cout << "Enter the number of digits for second number: ";
    cin >> digit2;
    
    vector<int> num1(digit1);
    vector<int> num2(digit2);

    cout << "Enter first number digit by digit: ";
    for (int i = 0; i < digit1; i++) {
        cin >> num1[i];
    }
    cout << "Enter second number digit by digit: ";
    for (int i = 0; i < digit2; i++) {
        cin >> num2[i];
    }

    add(num1,num2);

    
    return 0;
}
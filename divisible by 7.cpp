#include <iostream>
using namespace std;

int main() {
    string number;
    
    cin >> number;
    
    int length = number.length();
    int remainder = 0;
    
    for (int i = 0; i < length; i++) {
        remainder = (remainder * 10 + (number[i] - '0')) % 7;
    }
    
    if (remainder == 0) {
        cout  << endl;
    } else {
        cout  << endl;
    }
    
    return 0;
}

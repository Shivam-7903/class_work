#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int length = 0;

    for (int i = s.length() - 1; i >= 0; i--) {
        if (s[i] != ' ')
        {
            length++;
        } 
        else  
        {
            break;
        }
    }

    cout << length;

    return 0;
}





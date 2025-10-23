#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    if (!(isalpha(str[0]) || str[0] == '_')) {
        cout << "Not a valid identifier." << endl;
        return 0;
    }

    for (size_t i = 1; i < str.length(); ++i) {
        if (!(isalnum(str[i]) || str[i] == '_')) {
            cout << "Not a valid identifier." << endl;
            return 0;
        }
    }

    cout << "Valid identifier." << endl;
    return 0;
}


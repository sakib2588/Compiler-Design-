
#include <iostream>
#include <string>
using namespace std;

bool isCommentLine(const string& line) {
    string trimmed = line;

    trimmed.erase(0, trimmed.find_first_not_of(" \t"));

    if (trimmed.substr(0, 2) == "//") return true;


    if (trimmed.substr(0, 2) == "/*" || trimmed.substr(trimmed.length() - 2) == "*/") return true;

    return false;
}

int main() {
    string input;
    cout << "Enter a line of code: ";
    getline(cin, input);

    if (isCommentLine(input))
        cout << "This is a comment line." << endl;
    else
        cout << " This is NOT a comment line." << endl;

    return 0;
}


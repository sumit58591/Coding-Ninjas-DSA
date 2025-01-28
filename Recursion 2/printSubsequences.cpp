#include<iostream>
using namespace std;

void printSubsequences(string input, string output) {
    if(input[0] == '\0') {
        cout << output << endl;
        return;
    }

    printSubsequences(input.substr(1), output);
    printSubsequences(input.substr(1), output + input[0]);
    return;
}

int main () {
    string input, output = "";
    cin >> input;
    printSubsequences(input, output);
    return 0;
}
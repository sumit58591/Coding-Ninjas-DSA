#include<iostream>
using namespace std;

char intToChar(int num) {
    char array[] = "!abcdefghijklmnopqrstuvwxyz";
    return array[num];
}

void printAllPossibleCodes_helper(string input, string output) {
    if(input[0] == '\0') {
        cout << output << endl;
        return;
    }

    int firstDigit = input[0] - '0';
    char code = intToChar(firstDigit);
    printAllPossibleCodes_helper(input.substr(1), output + code);
    if(input[1] != '\0') {
        int secondDigit = input[1] - '0';
        int num = 10 * firstDigit + secondDigit;
        code = intToChar(num);
        if(num >= 10 and num <= 26) printAllPossibleCodes_helper(input.substr(2), output + code);
    }
    return;
}

void printAllPossibleCodes(string input) {
    string output = "";
    printAllPossibleCodes_helper(input, output);
    return;
}

int main () {
    string input;
    cin >> input;
    printAllPossibleCodes(input);
    return 0;
}
#include<iostream>
#include<cstring>
using namespace std;

int charToDigit(char digitChar) {
    return digitChar - '0';
}

int stringToNumber_helper(char input[], int &placeValue) {
    if(input[0] == '\0') return 0;
    int currNumber = stringToNumber_helper(input + 1, placeValue);
    int currDigit = charToDigit(input[0]);
    int output = currDigit * placeValue + currNumber;
    placeValue *= 10;
    return output;
}

int stringToNumber(char input[]) {
    int placeValue = 1;
    int output = stringToNumber_helper(input, placeValue);
    return output;
}

int main () {
    char input[1000];
    cin >> input;
    int number = stringToNumber(input);
    cout << number << endl;
    return 0;
}
#include<iostream>
#include<string>
using namespace std;

char intToChar(int num) {
    char array[] = "!abcdefghijklmnopqrstuvwxyz";
    return array[num];
}

int getCodes(string input, string output[1000]) {
    if(input[0] == '\0') {
        output[0] = "";
        return 1;
    }

    string smallOutput1[1000], smallOutput2[1000];
    int smallOutputSize1 = getCodes(input.substr(1), smallOutput1);
    int k = 0;
    char currentChar = intToChar(input[0] - '0');
    for(int i = 0; i < smallOutputSize1; i++) {
        output[k++] = currentChar + smallOutput1[i];
    }

    if(input[1] != '\0') {
        int val1 = input[0] - '0';
        int val2 = input[1] - '0';
        int number = (val1 * 10) + val2;
        if(number >= 10 and number <= 26) {
            int smallOutputSize2 = getCodes(input.substr(2), smallOutput2);
            currentChar = intToChar(number);
            for(int i = 0; i < smallOutputSize2; i++) {
                output[k++] = currentChar + smallOutput2[i];
            }
        }
    }
    return k;
}

int main () {
    string input;
    cin >> input;
    string output[1000];
    int outputSize = getCodes(input, output);
    for(int i = 0; i < outputSize; i++) cout << output[i] << endl;
    return 0;
}
#include<iostream>
using namespace std;

void printKeypad_helper(int num, string keys[], string output) {
    if(num == 0 or num == 1) {
        cout << output << endl;
        return;
    }

    string temp = keys[num % 10];
    for(int i = 0; i < temp.length(); i++) {
        printKeypad_helper(num / 10, keys, temp[i] + output);
    }

    return;
}

void printKeypad(int num){
    string output = "";
    string keys[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    printKeypad_helper(num, keys, output);
    return;
}

int main () {
    int num;
    cin >> num;
    printKeypad(num);
    return 0;
}

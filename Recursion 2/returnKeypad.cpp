#include<iostream>
using namespace std;

int keypad_helper(int num, string output[], string keys[]) {
    if(num == 0 or num == 1) {
        output[0] = "";
        return 1;
    }

    string smallOutput[1000];
    int smallOutputSize = keypad_helper(num / 10, smallOutput, keys);
    string temp = keys[num % 10];
    int k = 0;
    for(int i = 0; i < temp.length(); i++) {
        char currChar = temp[i];
        for(int j = 0; j < smallOutputSize; j++) {
            output[k++] = smallOutput[j] + currChar; 
        }
    }

    return k;
}

int keypad(int num, string output[]){
    string keys[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    int outputSize = keypad_helper(num, output, keys);
    return outputSize;
}

int main () {
    string output[1000];
    int num;
    cin >> num;
    int outputSize = keypad(num, output);
    for(int i = 0; i < outputSize; i++) cout << output[i] << endl;
    return 0;
}
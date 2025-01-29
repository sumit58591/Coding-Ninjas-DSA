#include<iostream>
#include<cstring>
using namespace std;

bool checkAB_helper(char input[]) {
    if(input[0] == '\0') return true;
    if(input[0] == 'a') return checkAB_helper(input + 1);
    if(input[0] == 'a' and input[1] == 'b' and input[2] == 'b') return (input + 3);
    else return false;
}

bool checkAB(char input[]) {
    int length = strlen(input), si = 0;
    if(length == 1) {
        if(input[0] == 'a') return true; 
        else return false;
    }
    else return checkAB_helper(input + 1);
}

int main () {
    char input[1000];
    cin >> input;
    bool output = checkAB(input);
    if(output) cout << "True" << endl;
    else cout << "False" << endl;
}
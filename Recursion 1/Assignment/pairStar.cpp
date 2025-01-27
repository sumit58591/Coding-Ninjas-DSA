#include<iostream>
#include<cstring>
using namespace std;

void pairStar(char input[]) {
    if(input[0] == '\0') return;
    pairStar(input + 1);
    if(input[0] == input[1]) {
        int currLength = strlen(input);
        for(int i = currLength; i >= 1; i--) input[i + 1] = input[i];
        input[1] = '*';
    }
}

int main () {
    char input[1000];
    cin >> input;
    pairStar(input);
    cout << input << endl;
    return 0;
}
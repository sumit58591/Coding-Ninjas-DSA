#include <bits/stdc++.h>
using namespace std;

int maximumProfit(int budget[], int n) {
    sort(budget, budget + n);
    int maximumProfitOutput = 0, currentProfit = 0;
    int subscribers = n;
    for(int i = 0; i < n; i++) {
        currentProfit = budget[i] * subscribers;
        maximumProfitOutput = max(maximumProfitOutput, currentProfit);
        subscribers--;
    }

    return maximumProfitOutput;
}

int main() {
    int n;
    cin >> n;
    int* budget = new int[n];
    for(int i = 0; i < n; i++) cin >> budget[i];
    int maximumProfitOutput = maximumProfit(budget, n);
    cout << maximumProfitOutput << endl;
    return 0;
}
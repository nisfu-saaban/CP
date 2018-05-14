#include <bits/stdc++.h>

using namespace std;

int factorial(int n) {
    cin>>n;
    if (n==1) return 1;
    return factorial(n-1)*n;
    // Complete this function
}

int main() {
    int n;
    cin >> n;
    int result = factorial(n);
    cout << result << endl;
    return 0;
}

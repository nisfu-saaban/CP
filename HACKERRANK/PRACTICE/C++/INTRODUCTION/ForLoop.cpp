#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    string num[10]={"","one","two","three","four","five","six","seven","eight","nine"};
    int a;
    int b;
    cin>>a>>b;
    for(int i=a; i<=b; i++){
        if (i<=9) {
            cout<<num[i];
        } else {
            if(i%2==0) {
                cout << "even";
            } else {
                cout << "odd";
            }
        }
        cout  << endl;
    }
    return 0;
}

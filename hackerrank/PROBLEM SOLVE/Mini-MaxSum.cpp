#include<bits/stdc++.h>

using namespace std;

int main(){

    int a[5],b=0;
    for(int i=0; i<5; i++){
        cin>>a[i];
        b += a[i];
    }
    sort(a, a+5);
    cout<<b-a[4]<<" "<<b-a[0]<<endl;

}

#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

    int n,sum1=0,sum2=0;
    cin>>n;
     int m[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
         cin>>m[i][j];
         if (i==j){
            sum1+=m[i][j];
         }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=n-1-i; j>=0;){
            sum2+=m[i][j];
            break;
        }
    }
    cout<<abs(sum1-sum2)<<endl;
    return 0;
}

#include <iostream>
using namespace std;

int main(){
int a[3];
int b[3];

cin>>a[0]>>a[1]>>a[2];
cin>>b[0]>>b[1]>>b[2];

int a_a=0;
int b_b=0;

for(int i=0; i<3; i++){
    if(a[i]>b[i])
        a_a++;
    if(a[i]>b[i])
        b_b++;
    }
    cout<<endl;
    cout<<a_a<<" "<<b_b;
}

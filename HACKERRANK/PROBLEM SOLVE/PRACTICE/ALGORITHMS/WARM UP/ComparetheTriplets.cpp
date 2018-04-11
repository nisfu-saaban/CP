#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

    int a, b, c, p, q, r, x, y;
    x = 0;
    y = 0;

    cin>>a>>b>>c;
    cin>>p>>q>>r;
    if (a>p){
        x++;
    }else if (a<p){
        y++;
    }
    if (b>q){
        x++;
    }else if (b<q){
        y++;
    }
    if (c>r){
        x++;
    }else if (c<r){
        y++;
    }
    cout << x << " " << y << endl;

}

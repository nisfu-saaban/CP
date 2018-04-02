#include <iostream>
#include <string>
using namespace std;

void half(string h){
    int size=h.size();
    for(int i=0;i<size/2;i+=2){
    cout<<h[i];
    }
    cout<<endl;
}

int main(){
    string nama[30];
    int banyak,i(0);
    cin>>banyak;

    while(i<=banyak){
    getline(cin,nama[i]);
    half(nama[i]);
    i++;
    }
    return 0;
}

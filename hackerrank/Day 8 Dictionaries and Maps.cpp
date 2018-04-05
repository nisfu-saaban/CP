#include <map>
#include <iostream>
using namespace std;

int main(){
int n;
cin>>n;

    map<string, int>phone_book;
    for(int i=0; i<n; i++){
        string name;
        cin>>name;
        if(!phone_book[name]){
            cin>>phone_book[name];
        }
    }

    for(int i=0; i<n; i++){

    string name;
    cin>>name;
    if(phone_book[name]){
        cout<<name<<"="<<phone_book[name]<<endl;
        }else{
         cout<<"Not found"<<endl;
        }
    }
return 0;
}

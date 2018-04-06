#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
     int i = 12;
     double d = 4.0;
     string s = "HackerRank";
     int a;
     double b;
     string c;

     cin>>a;
     cin>>b; cin.ignore();
     getline(cin, c);

     cout<<a+i; cout<<endl;
     printf("%1.1f\n",b+d);
     cout<<s<<" "<<c;
}

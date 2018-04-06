#include <bits/stdc++.h>
using namespace std;

int main(){

        int a,n,height=-1,res=0;
        vector<int> arr;
        cin>>n;
        for(int i=0; i<n; i++){
                cin>>a;
            if(a>=height)arr.push_back(height=a);
        }

        for(int i=0; i<arr.size(); i++){
            if(arr[i]==height)res++;
        }

    cout<<res<<endl;
}

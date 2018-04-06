#include <bits/stdc++.h>
using namespace std;

int main(){

    double mealcost,b=0,c=0;
    int totalCost,tipPercent,taxPercent;


    cin>>mealcost;
    cin>>tipPercent;
    b=mealcost*tipPercent/100;
    cin>>taxPercent;
    c=mealcost*taxPercent/100;

    totalCost= round (mealcost+b+c);


    cout<<"The total meal cost is "<<totalCost<<" dollars."<<endl;
    return 0;
}


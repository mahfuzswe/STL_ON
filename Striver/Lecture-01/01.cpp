#include<bits/stdc++.h> //library
using namespace std;  //scope

namespace shanto{
    int val = 50;
    int getVal(){
        return val * 10;
    }
}

int main(){
    double val = 10.0;
    cout<<val<<endl;

    cout<<shanto::getVal()<<endl;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

struct node{
    string str;
    int num;
    double doub;
    char x;

    node(str_,num_,doub_,x_){
        str = str_;
        num = num_;
        doub = doub_;
        x = x_;
    }
}

int main(){
    
    
    //create a data type where you store
    // {string, int, double, char}

    //wrong way or defining
    // node mahfuz;
    // mahfuz.str = "mr.phoenix";
    // mahfuz.num = 6;
    // mahfuz.doub = 91.0;

    node mahfuz = new node("Shanto",6,91.5,'z');

    
    return 0;
}


// ** 2D Vector **

#include<bits/stdc++.h>
using namespace std;


int main(){
    
    

    // to defining 2D vectors
    vector<vector<int>>vec;  //here vector is itself is a data type
                             //vector is storing vector of int 
    vector<int>mahfuz1;
    mahfuz1.push_back(1);
    mahfuz1.push_back(2);


    vector<int>mahfuz2;
    mahfuz2.push_back(10);
    mahfuz2.push_back(20);

    vector<int>mahfuz3;
    mahfuz3.push_back(19);
    mahfuz3.push_back(24);
    mahfuz3.push_back(27);


    vec.push_back(mahfuz1);
    vec.push_back(mahfuz2);
    vec.push_back(mahfuz3);


    //print 2d vector:

    //it is the vector itself
    for(auto vctr: vec){
        for(auto it: vctr){
            cout<<it<<" ";
        }cout<<endl;
    }
    // in competitive programming we follow this



    //alt: traditional way
    for(int i=0; i<vec.size(); i++){
        for(int j=0; j<vec[i].size(); j++){
            cout<<vec[i][j]<<" ";
        }cout<<endl;
    } 



    //define 10 x 20
    vector<vector<int>>vec(10,vector<int>(20,0));


    vector<int>arr[4];
    arr[0].push_back(2); //--> push 2 in 0th index




    
    return 0;
}


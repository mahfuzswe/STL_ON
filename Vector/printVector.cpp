#include<bits/stdc++.h>
using namespace std;


int main(){

    int arr[1000];
    vector<int>v;
    v.push_back(1); //v[0]
    v.push_back(2); //v[1]
    v.push_back(3); //v[2]
    v.push_back(4); //v[3]
    v.push_back(5); //v[4]

    //print
    cout<<v[3]<<endl;
    cout<<v[1]<<endl;

    //we can also print vector value using "vector_name.at()" function

    //print
    cout<<v.at(0)<<endl;
    cout<<v.at(1)<<endl;  //more prefferable method

    cout<<v.at(6);

    return 0;
}
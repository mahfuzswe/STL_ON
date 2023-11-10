// pair
// is a way of creating a Composite-Datatype composed
// of 2 different primitive/pomposite datatypes

/*
    pair<int, int>p; // a pair of 2 ints
    pair<int, string>p; // a pair of an int and a string
    pair<int, pair<int, string>>p; // a pair of int and (pair of int and string)
    pair<vector<int>,string>p; // a pair of a (vector of int) and a string


    Access elements using .first and .second
    ----------------------------------------
    pair<string, int>p = {"Hello", 6};

    cout<<p.first<<" "<<p.second' // prints: Hello 6
*/

#include<bits/stdc++.h>
using namespace std;

// pair<int, int>f(){
//     return {3,4};
// }


int main(){
    // pair<string, int> p = {"Hello", 6};
    // // pair<string, int> p("Hello", 6);

    // cout<<p.first<<" "<<p.second;

    // cout<<f()<<'\n';

    pair<int>p[5]; // an array of 5 pairs
    p[0] = {1,2};
    p[1] = {5,2};
    p[2] = {8,1};
    p[3] = {1,0};
    p[4] = {3,4};

    sort(p, p+5);

    cout<<p[0]<<'\n';




    return 0;
}

/*

Advantages:
In case you want to return multiple values from a function

*/
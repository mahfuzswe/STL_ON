#include<bits/stdc++.h>
using namespace std;


int main(){
    
    // iterators
    // begin(), end(), rbegin(), rend()  *--> Can be used in all Data Structure

    // begin() --> always points the starting point
    // rbegin() --> reverse begin -> points last point
    // end() --> end is not end , it will point the empty address --> point right after the last element
    // rend() --> point right before the start/start element

    array<int, 5>arr = {1,2,3,4,5};
    
    // to iterate this array
    for(auto it = arr.begin(); it != arr.end(); it++){
        // auto -> will automatically takes the data type
        cout<<*it<<" ";
        // *it for values coz it is a pointer
    }

    cout<<endl;

    for(auto it = arr.begin(); it != arr.end(); it++){
        cout<<*it<<" ";
    }

    cout<<endl;

    //reverse iterator
    for(auto it = arr.rbegin(); it >= arr.rend(); it++){
        cout<<*it<<" ";
    }cout<<endl;
    
    for(auto it = arr.end()-1; it >= arr.begin(); it--){
        cout<<*it<<" ";
    }cout<<endl;

    
    // for each loop
    for(auto it: arr){
        cout<<it<<" ";
    }cout<<endl;


    string s = "dhgkajg";

    for(auto c:s){ //automically takes char by char
        cout<<c<<" ";
    }cout<<endl;

    return 0;
}


//https://www.youtube.com/watch?v=iOOzYwBeXIM&list=RDCMUCvtw4vj-uALdzUeRuCLxHPA&index=1
//__> || 45 min

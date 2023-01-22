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

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";

    }cout<<endl;

    // v.erase(v.begin()+3);   //erase a single value

    v.erase(v.begin()+2,v.end()); // 2 to end index delete hoye jabe

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";

    }cout<<endl;

    return 0;
}

 

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
    
    cout<<v.size()<<endl;   //to know the size of vector

    v.clear();
    cout<<v.size()<<endl;

    return 0;
}


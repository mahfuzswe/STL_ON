// sort() : most efficient hybrid algo TC: O(NlogN)

#include<bits/stdc++.h>
using namespace std;

int main(){
    // int arr[4] = {5,4,1,2};

    // sort(arr, arr+3);

    // for(int i=0; i<4; i++){
    //     cout<<arr[i]<<" ";
    // }

    vector<int> v = {5,4,3,1,2};

    sort(v.begin(), v.end());

    for(int i=0; i<5; i++){
        cout<<v[i]<<" ";
    }

    return 0;
}
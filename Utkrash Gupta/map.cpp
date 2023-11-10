// Very common use-case: Count frequency of various objects

/*
    map<key_datatype, value_datatype>m;
    map<string, int>m; //defines a map in which the keys of elements are strings

    NOTE: maps are very similar to sets, in sets the values
    are unique and sorted, in maps the keys are unique and sorted.

*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    // map<int, int> m;

    // cout<<m.size()<<'\n';


    // cout<<m[15]<<'\n'; // instantly create the element and the value will be 0

    // m[10]=4;
    // m[26];

    // cout<<m.size()<<'\n';

    // cout<<m[10]<<'\n';



    map<int, int>freq;

    freq[10]++;
    freq[10]++;
    freq[10]++;
    freq[10]++;

    freq[4]++;

    cout<<freq[10]<<" "<<freq[4]<<'\n';

    return 0;
}
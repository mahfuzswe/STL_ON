//Set is a container which keeps a unique copy
//of the elements in sorted order

/*
    set<int>s; // empty set of ints
    set<string>s; // empty set of strings

    Important functions:
    --------------------    
    s.insert(x) // insert x into the set, do nothing if x is already present. O()
    s.erase(x) // erase x from the set, do nothing if x is not present. O(logN)
    s.find(x) // returns an iterator to the element x if present, else returns s.end()
    s.count(x) // returns 1 if x is present, else returns 0. O(logN)
    s.size() // returns the number of elements in the set. O(1)
    s.clear() // removes all elements from the set. O(n)
    s.empty() // returns true if the set is empty, else returns false


    // random access is not allowed in set
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    // set<int>s;

    // s.insert(5);
    // s.insert(2);
    // s.insert(7);

    // cout<<s.count(5)<<'\n';
    // cout<<s.count(6)<<'\n';

    // s.erase(5);
    // cout<<s.count(5)<<'\n';

    // s.insert(5);
    // cout<<s.count(5)<<'\n';

    set<int>s;

    s.insert(4);
    s.insert(1);
    s.insert(10);
    s.insert(3);

    s.erase(s.begin());

    cout<<*s.begin()<<'\n'; // this will print the smallest element of the set

    s.insert(-1);
    cout<<*s.begin()<<'\n';

    return 0;
}    

// present elements in the set always will be in sorted order
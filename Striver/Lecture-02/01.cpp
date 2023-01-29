// ** SET **

#include<bits/stdc++.h>
using namespace std;

int main(){

    //given n elements, tell me the number of unique elements
    int arr[] = {2, 5, 2, 1, 5}; // 3 unique elements -> {1, 2, 5}


    set<int>st;
    int n; cin>>n;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        st.insert(x);

    }
    //st -> { ,5}

    // erase functionality
    // log n
    st.erase(st.begin());  // st.erase(iterator); // st -> {2,5}

    // log n
    st.erase(st.begin(), st.begin() + 2 ); // ->[)
    //st.erase(startIterator, endIterator)

    st.erase(5); //st.erase(key) // delete the 5 ->{1, 2};

    set<int>st = {1, 5, 7, 8};
    set<int>st1(st.begin(),st.end());

    auto it = st.find(7); // log n // it will be iterator to 7
    // this returns an iterator, which points to the 7

    auto it = st.find(9);
    // if this element doesn't exist the it will come it = st.end();

    st.emplace(6); //alt: st.insert(6); -->eplace is little more faster 

    cout<<st.size()<<endl; // will print the size of the set



    //set of node
    //set of anything can be defined
    set<int>st;
    st.insert(5); // -> {5}
    st.insert(5); // -> {5}
    //set always store unique elements in ascending order

    for(auto it = st.begin(); it!=st.end(); it++){
        cout<<*it<<" ";
    }

    //alternative approch:
    for(auto it : st){
        cout<< it <<endl;
    }

    //delete the entire set
    st.erase(st.begin(),st.end()); //this make sure the entire set is deleted

    // Generally, when you asked to find unique elements or you want to store unique elements then you should use set data structure

    
    
    // ** Unordered set **
    
    unordered_set<int>st;
    
    st.insert(2);
    st.insert(3);
    st.insert(1);

    // unorder set doesn't follow ascending order
    //the set can have element in any order

    //all the operation will be same

    //average time complexity is O(1) : constant in nature
    //worst case is linear in nature, O(set size) 
    //tle -> switch to the set


    //if there is no use case of storing ascending, always store in unordered set





    return 0;
}
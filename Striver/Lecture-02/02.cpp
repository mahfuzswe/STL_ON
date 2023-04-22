// ** MULTI SET **

#include<bits/stdc++.h>
using namespace std;

int main(){


    // multi-set
    //multiset gives you a option to store all the elements in the sorted fashon
    multiset<int>ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    ms.insert(3); //alt: ms.emplace(3);
    //st -> {1,1,2,2,3}


    ms.erase(2); // all the instances will be erased

    auto it = ms.find(2); //returns an iterator pointing to the first element of 2

    ms.clear(); // delete the entire set
    ms.erase(ms.begin(),ms.end()); // deletes the entire set
    // log n in size


    //for printing 
    for(auto it = ms.begin(); it!=ms.end(); it++){
        cout<<*it<<" ";
    }

    //alternative approch:
    for(auto it : ms){
        cout<< it <<endl;
    }

    //inds how many time 2 occurs
    ms.count(2);



    ms.erase(ms.find(2)); //find returns the first instances of 2
    ms.erase(ms.find(2),ms.find(2)+2);









    // Key value

    // mahfuz -> 27
    // rahul -> 31
    // alim -> 67
    // khalid -> 81

    //map only store unique keys
    map<string, int>mpp;
    mpp["mahfuz"] = 27;
    mpp["rahul"] = 31;
    mpp["alim"] = 67;
    mpp["khalid"] = 81;
    mpp["mahfuz"] = 29;  // it will overwrite


    // it stores everything in the sorted order






    return 0;
}
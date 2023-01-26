// *** VECTOR ***

#include<bits/stdc++.h>
using namespace std;

//max size 10^7 -> int, double, char (when declear globally)
// int arr[10000000];f

//max size 10^8 -> bool (when declear globally)
// bool arr[10000000];

int main(){
    
    //max size of 10^6 -> int, double, char  -->when in main function
    // int arr[1000000];
    
    //max size of 10^7 -> bool  -->when in main function
    // bool arr[10000000];




    vector<int>arr; // -> {} an empty vector is created
    cout<<arr.size()<<endl; //-> print 0
    arr.push_back(0); //{0}
    arr.push_back(2); //{0, 2}
    cout<<arr.size()<<endl; //-> print 2

    //dinamically increasing size

    arr.pop_back(); //{0}  -->pop-out the last element that you entered
    cout<<arr.size()<<endl; //print 1

    // segmentation fault if you push_back() 10^7 times

    arr.push_back(0); //{0,0}
    arr.push_back(2); //{0,0,2}

    arr.clear(); //--> erase all the elements at once {}
    cout<<arr.size()<<endl; //print 0



    vector<int>vec1(4,0); //--> {0,0,0,0}
    //it will create a vector of size 4 of 0
    //initally its size is 4 but after that you can push_back easily

    vector<int>vec2(4,10); // -> {10,10,10,10}


    //copu the entire vec2 into vec3
    vector<int>vec3(vec2.begin(),vec2.end()); // -> [) ;[ --> include, ) ->exclude
    //begin will be in your vector, end will not be in your vector
    //alt:
    vector<int>vec3(vec2);


    vector<int>mahfuz;
    mahfuz.push_back(1); //mahfuz.emplace_back(1); ---> works in same way
    mahfuz.push_back(3);
    mahfuz.push_back(2);
    mahfuz.push_back(5); // -> {1,3,2,5}

    vector<int>mahfuz1(mahfuz.begin(), mahfuz.begin()+2); //->{1,3}
    // mahfuz.begin() is 1 , mahfuz.begin()+2 means beign theke 2 agee means 2 
    // so, 1 will be included , 3 will be included and 2 will be excluded






    
    return 0;
}


#include<bits/stdc++.h>
using namespace std;


// array<int, 3>arr; //--> {0, 0, 0} -->when out of main Fn

int main(){
    
    //Arrays -> int arr[100]

    // array<int, 100> arr;  //--> 100 size int array will be declear
    
    // array<int, 3>arr; //--> {?, ?, ?} //--> Can give gerbez value

    // array<int, 5> arr = {1, 5, 6}; //--> {1, 5, 6, 0, 0} ; if you declear only a single variable the rest of all will be 0 

    // array<int, 5> arr = {0}; //--> {0, 0, 0, 0, 0}

    // array<int, 5> arr = {1}; //--> {1, 0, 0, 0, 0}

    array<int,5> arr;
    arr.fill(10); //--> {10,10,10,10,10}

    // arr.at(index);

    for(int i=0; i<5; i++){
        cout<<arr.at(i)<<" ";   //print entire array
    }
 

    return 0;
}


// Given a list of names and scores of students,
// print the names of students in decreasing order of scores

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<pair<int, string>>v; // {score, names}
    // input the data for 5 students
    for(int i=0; i<5; i++){
        int score;
        string name;
        cin>>name>>score;
        v.push_back({score, name});
    }

    sort(v.begin(), v.end());

    for(int i=4; i>=0; i--){
        cout<<v[i].second<<'\n';
    }

    return 0;
}
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
// int main()
void myFunction(vector<int>&v)
{
    // vector<int>v;
    // v.push_back(7);
    // v.push_back(14);
    // v.push_back(-12);
    // v.push_back(34);
    //  v.push_back(6);
    //  v.push_back(-78);
    // vector<vector<int>>v(3,vector<int>(4));
    // int m=v.size();
    // int n=v[0].size();
    // for(int i=0;i<m;i++){

    
    // for(int j=0;j<n;j++){
    // cout<<v[i][j]<<" ";
    // }
    // cout<<endl;
    
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // sort(v.begin(),v.end());
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
     int m=500;
    int n=100;
    cout<<endl;
    cout<<m<<" "<<n;
    cout<<endl;
    swap(m,n);
    cout<<<m<<" "<<n;
    int x=min(m,n);



}
/*
Print all the subsequence of the array using recursion
sample input :
[1,2,6]
output:
[1] ,[1,2] ,[1,2,6] ,[2,6] ,[6],[1,6],[2],[]
*/


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Print_All_Subsequence(int i,vector<int>v,vector<int>&temp,vector<vector<int>>&ans)
{
    // base case
     if(i==v.size())
     {
        ans.push_back(temp);
        return ;
     }
   // recursive case
   // take the v[i] value in to the temp  array
    temp.push_back(v[i]);
    Print_All_Subsequence(i+1,v,temp,ans);

    temp.pop_back();
    // donot  consider the value in to the temp array
    Print_All_Subsequence(i+1,v,temp,ans);
}
int main() {
    int n; // size of the array 
    cin>>n; // input the value of the n
    vector<int>v; // vector which stores the values of the array
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<vector<int>>ans; // ans for storing the subsequence of the array
    vector<int>temp; // temp array to store the subsequence
    Print_All_Subsequence(0,v,temp,ans);
    // printing all the subsequence of the array 
    for(auto it:ans)
    {
        for(auto i:it) cout<<i<<" ";
        cout<<endl;
    }
     
 return 0; }
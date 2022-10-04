#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Time complexcity is n!*n
// space complexity is O(n)
void Print_All_Permutaion(int index,vector<int>&v,vector<vector<int>>&ans)
{
     if(index==v.size())
     {
        ans.push_back(v);
        return ;
     }
     for(int i=index;i<v.size();i++)
     {
        swap(v[i],v[index]);
        Print_All_Permutaion(index+1,v,ans);
        swap(v[i],v[index]);
     }
}
int main() {
   int n;  // input the array size
   cin>>n;
   vector<int>v; 
   for(int i=0;i<n;i++)
   {
    int x;
    cin>>x; // Enter the values
    v.push_back(x);
   }
   vector<vector<int>>ans; // store the all permutation
   Print_All_Permutaion(0,v,ans);
   for(auto it:ans)
   {
    for(auto i:it) cout<<i<<" ";
    cout<<endl;
   }
   

      return 0; }
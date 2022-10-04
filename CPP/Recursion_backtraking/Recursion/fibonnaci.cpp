/*
fibonnaci number 
1 1 2 3 5 8 13 21 34 ......
*/

/*
q.find the n the fibonacci number

*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// Time complexcity for the code is exponential in nature
int Fibbonnaci_Number_using_Recursion(int num)
{
    // base case when value of num is either zero or one return value as zero
    if(num==0 || num==1) return num;

    // recursive case
    return Fibbonnaci_Number_using_Recursion(num-1)+Fibbonnaci_Number_using_Recursion(num-2);
}


// we can  use memoization to avoid repeted computation of same values
// Time complexity after memoization is O(N)
int Fibbonnaci_Number_using_Memoization(int num,vector<int>&dp)
{
    // base case when value of num is either zero or one return value as zero
    if(num==0 || num==1) return num;
     if(dp[num]!=-1) return dp[num];
    // recursive case
    return dp[num]=Fibbonnaci_Number_using_Recursion(num-1)+Fibbonnaci_Number_using_Recursion(num-2);
}

int main() {
    int n;
    // input the value of the n 
    cin>>n;
    vector<int>dp(n+1,-1); // dp array 
   Fibbonnaci_Number_using_Recursion(n); // function for recursion 
   Fibbonnaci_Number_using_Memoization(n,dp); //function for memoization
  
     
 return 0; }
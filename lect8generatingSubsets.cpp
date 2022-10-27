/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;


    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        int subset_count=(1<<n);
        vector<vector<int>>subsets;
        
        for(int mask=0;mask<subset_count;mask++){
            vector<int>subset;
            for(int i=0;i<n;i++){
                if(((mask)&(1<<i))!=0)subset.push_back(nums[i]);
            }
            subsets.push_back(subset);
        }
        
        return subsets;
    }


int main()
{   
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    
    auto all_subsets=subsets(v);
    
    for(auto subset : all_subsets){
        for(int ele : subset){
            cout<<ele<<" ";
        }
        cout<<endl;
    }


    return 0;
}

//inputs==> 3 
//          2 4 5

//time complexity==> O(2^n*n);
//use backtracking time complexity ==> 0(2^n);

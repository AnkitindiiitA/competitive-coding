
#include <bits/stdc++.h>
using namespace std;


int main()
{   
    //isPrime check
    int n;
    cin>>n;

    if(n==1){
       cout<<"Not prime\n";
       return 0; 
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            cout<<"Not prime\n";
            return 0;
        }
    }
    cout<<"Prime\n";
//prime factorization calculation

    vector<int>v;

    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            v.push_back(i);
            n/=i;
        }
    }
    if(n>1)v.push_back(n);

    for(int val : v)cout<<val<<" ";
    cout<<endl;


    return 0;
}


#include <bits/stdc++.h>
using namespace std;

//euclid's algorithm to calculate gcd by long division

int gcd(int a,int b){
    if(b==0)return a;
    return gcd(b, a%b);
}

int main()
{   
   
    cout<<gcd(12,4)<<endl;
    cout<<gcd(18,12)<<endl;
    cout<<gcd(12,18)<<endl;
    //lcm of 12,18 is below
    cout<< 12*18/gcd(12,18)<<endl;
    cout<<__gcd(12,18)<<endl;//inbuilt function
    //time complexity for both is log(N);
    
    //minimun fraction= a/b== a/gcd(a,b)/b/gcd(a,b);
    
    return 0;
}


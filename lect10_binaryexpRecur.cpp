/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
const int M=1e9+7;

//binary exponentiation

int binExpRecur(int a,int b){
    //base condition
    if(b==0) return 1;
    
    int res=binExpRecur(a,b/2);
    if(b&1){
        return (a*(res*1LL*res)%M)%M;
    }
    else{
        return (res*1LL*res)%M;
    }
}

int main()
{   
   int a=2,b=13;
   cout<<binExpRecur(a,b)<<endl;
    
    return 0;
}


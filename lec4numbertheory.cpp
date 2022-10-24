/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;

void binary(int n){
    for(int i=10;i>=0;i--){
        cout<<((n>>i)&1);
    }
    cout<<endl;
}

void checkset(int n,int i){
    if(((1<<i)&n))cout<<"yes\n";
    else cout<<"no\n";
}

void setbit(int n,int i){
    n=((1<<i)|n);
    cout<<n<<endl;
    binary(n);
    
}

void unset(int n,int i){
    n=((~(1<<i))&n);
    binary(n);
}

void toggle(int n,int i){
    cout<<"togle\n";
    binary(n^(1<<i));
}

int bitcount(int n){
    int cnt=0;
    for(int i=0;i<31;i++){
        if(n&(1<<i))cnt++;
        
    }
    return cnt;
}
int main()
{
    cout<<"Hello World\n";
    binary(9);
    checkset(9,0);
    setbit(9,1);
    unset(9,3);
    toggle(9,3);
    cout<<bitcount(9)<<endl;
    cout<<__builtin_popcount(9)<<endl;//stl function to print number of set bits;

    return 0;
}

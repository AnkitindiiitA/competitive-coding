/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;

void printbinary(int n){
    for(int i=10;i>=0;--i){
        cout<<((n>>i)&1);
    }
    cout<<endl;
}

void checkOddEven(int n){
    if(n&1)cout<<"odd\n";
    else cout<<"even\n";
}

void devidingANumberByTwoOrItsPower(int n,int i){
    n=(n>>i);
    cout<<n<<endl;
}

void multiplyANumberByTwoOrItsPower(int n,int i){
    n=(n<<i);
    cout<<n<<endl;
}

int main()
{
    cout<<"Hello World\n";
    checkOddEven(5);
    
    devidingANumberByTwoOrItsPower(5,1);
    devidingANumberByTwoOrItsPower(5,2);
    
    multiplyANumberByTwoOrItsPower(5,1);
    multiplyANumberByTwoOrItsPower(5,2);
    
    // (hi+lo)>>1; use in binary search;
    
    //Trick 3: uppercase to lowercase and viceversa below
    
    for(char c='A';c<='E';++c){
        cout<<c<<endl;
        printbinary(int(c));
        
    }
    
    for(char c='a';c<='e';++c){
        cout<<c<<endl;
        printbinary(int(c));
        
    }
    
    char c='A';
    c=c | (1<<5);
    cout<<c<<endl;
    
    char d='a';
    d=d & ~(1<<5);
    cout<<d<<endl;
    
    cout<<char(1<<5)<<endl;//it is the ascii value of a space;
    cout<<char('B'|' ')<<endl;//uppercase to lowercase
    
    printbinary(char('_'));
    cout<<char('y'&'_')<<endl;//lowercase to uppercase
    
    
    //trick 4: clear LSB's;
    printbinary(59);
    int a=59;
    int i=4;
    int b=a & (~((1<<(i+1))-1));//11111100000 -> ~(00000011111) -> (00000100000)-1;
    printbinary(b);
    
    //Trick 5: clearing MSB's
    i=3;
    c= (a & ((1<<(i+1))-1));//00000111011
                                //00000001111 ->
                                //00000010000-1;
    printbinary(c);
    
    //Trick 6: check power of two;
    int n=15;
    cout<<(n & (n-1))<<endl;//if non zero then not power of 2 otherwise it is power of two;
    n=16;
    cout<<(n & (n-1))<<endl;//  00000010000
                            //& 00000001111=zero number;
    
    
    
    
    
    
    return 0;
}



#include <bits/stdc++.h>

using namespace std;

void printbinary(int n){
    for(int i=10;i>=0;--i){
        cout<<((n>>i)&1);
    }
    cout<<endl;
}



int main()
{
    int a=4 ,b=6;
    

    //1^0 --> 1
    //0^1 --> 1
    //1^1 --> 0
    //0^0 --> 10
    
    //x^x==0
    //x^0==x   
    
    //swapping numbers
    
    a=a^b;
    b=b^a;//b-->a;
    //b=b^(a^b) ==> b ^ b ^ a -->a
    a=a^b; //a-->b;
    // a= (a^b)^a ==> a^a^b -->b
    
    cout<<a<<" "<<b<<endl;
    
    
    
    
    //question--> given array a of n integers . all integers are present in even counts except one
    //find that one integer which has odd count in O(N) time complexity and O(1) space;
    
    //N<10^5;
    //a[i]<10^5;
//solution-->
    //a[i]={2,4,6,7,7,4,2,2,2};
    //a^b^c^b ==> a^c^b^b ==> a^c; by using xor properties;
    //a^c^c ==> a^0 ==>a; //vvi question because it takes O(1) space complexity;
    
    int v[9]={2,4,6,7,7,4,6,2,2};
    int p=0;
    for(int i=0;i<9;i++){
        p=p^v[i];
    }
    cout<<p<<endl;
    
    
    return 0;
}


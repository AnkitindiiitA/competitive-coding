
#include <bits/stdc++.h>
using namespace std;
//seive algorithm
const int N=1e7+10;
vector<bool> isPrime(N,true);

int main()
{   
    isPrime[0]=isPrime[1]=false;

    for(int i=2;i<N;i++){
        if(isPrime[i]==true){
            for(int j=2*i;j<N;j+=i){
                isPrime[j]=false;
            }
        }
    }
    //time complexity = N * log(log(N));

    int q;
    cin>>q;
    while(q--){
        int a;
        cin>>a;
        cout<<(isPrime[a]==true?"prime":"not prime")<<endl;
    }

    return 0;
}

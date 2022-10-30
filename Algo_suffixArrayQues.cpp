#include <bits/stdc++.h>
using namespace std;
#define int long long
#define end1 "\n"
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
const int M = 1e9 + 7;
const int mod = 998244353;
#define inf 1000000000000000005
#define precise(x) cout << fixed << setprecision(10) << x << endl;
#define ff first
#define ss second
#define mp make_pair
#define mone cout<<-1<<endl

// int noOfSetBits(int n){
//     return __builtin_popcount(n);
// }
// int fastExponentiation(int a,int n){
//     // does the fast calc of a to the power n
//     int ans=1;
//     while(n>0){
//         int last_bit=n&1;
//         if(last_bit){
//             ans=a*ans;
//         }
//         a=a*a;
//         n=n>>1;
//     }
//     return ans;
// }

// int  decimalToBinary(int n){
//     int ans=0;
//     int p=1;
//     while(n>0){
//         int last_bit=(n&1);
//         ans+=p*last_bit;
//         p=p*10;
//         n=n>>1;
//     }
//     return ans;
// }

// bool IsPowerOfTwo(int n){
//     return (((n&(n-1))==0)?1:0);
// }
// bool isPrime(int n){
// 	vector<bool> prime(n+1,true);
    
  
//     for (int p=2; p*p<=n; p++)
//     {
        
//         if (prime[p] == true)
//         {
            
//             for (int i=p*2; i<=n; i += p)
//                 prime[i] = false;
//         }
//     }
//     return prime[n];
// }
// int gcd(int a, int b)
// {
//   return b ? gcd(b, a % b) : a;
// }

// int factorial(int n)
// {
//     return (n==1 || n==0) ? 1: n * factorial(n - 1);
// }

// bool isSorted(int a[], int n)
// {
//   if (n == 0 || n == 1)
//     return true;
 
//   for (int i = 1; i < n; i++){
//     if (a[i - 1] > a[i]){
//       return false;
//     }
//   }
 
//   return true;
// }
// bool isPerfectSquare(long double x)
// {
//     // Find floating point value of
//     // square root of x.
//     if (x >= 0) {
 
//         long long sr = sqrt(x);
         
//         // if product of square root
//         //is equal, then
//         // return T/F
//         return (sr * sr == x);
//     }
//     // else return false if n<0
//     return false;
// }
void solve(){
  //codeforces #743(DIV 2) ques(B) Swaps
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    map<int,int>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
        m[a[i]]=i;
    }
    vector<pair<int,int>>p;
    for(int i=0;i<n;i++){
        cin>>b[i];
        p.push_back({b[i],i});
    }
    sort(a.begin(),a.end());
    sort(p.begin(),p.end());

    //suffix array lol lol lol.....
    int x=INT_MAX;
    for(int i=p.size()-1;i>=0;i--){
        x=min(x,p[i].second);
        p[i].second=x;
    }
    //lol end of suffix array.....

    int ans=INT_MAX;
    for(int i=0;i<n;i++){
        ans=min(ans,m[a[i]]+p[i].second);
    }
    cout<<ans<<endl;

    
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    #ifndef ONLINE_JUDGE
    #endif
    int t;
    cin>>t;
    
    while(t--){
        solve();
    }
    return 0;
}

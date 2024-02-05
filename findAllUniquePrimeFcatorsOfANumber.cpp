//time complexity=O(sqrt(n))

vector<int> countPrimes(int n)
{
    // Write your code here.
   
    set<int> s;
    for (int i = 2; i*i <= n;) {
        if (n%i==0){
            s.insert(i);
            n/=i;
        }else{
            i++;
        }
    }
    if(n>1)s.insert(n);
    vector<int> ans;
    for(auto it:s)ans.push_back(it);

    return ans;

}

int main(){
  int n;
  cin>>n;
  vector<int> ans=countPrimes(n);
  for(auto it:ans)cout<<it<<" ";
  cout<<"\n";
  return 0;
}


//using seive for O(logn)

#include <bits/stdc++. h> 
using namespace std; 
int N = 1000000; 
int spf [N + 1]; 
void createSieve() {
     for(int i = 1;i <= N;i++) { 
          spf[i] = i;
     }
     for(int i = 2;i*i <= N; i++) { 
          if(spf[i] == i) {
               for(int j = i*i; j <= n; j+=i) { 
                         if(spf[j] == j) { 
                              spf[j] = i;
                         }
               }
          }
     }
}

int main(){
     
     createSieve();
     int t;
     cin>>t;
     while(t--){
          int n;
          cin>>n;
          
          while(n!=1){
               cout<<spf[n]<<' ';
               n/=spf[n];
          }
          cout<<"\n";
          
     }
     
     
     return 0;
}

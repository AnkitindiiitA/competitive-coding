//time complexity=O(logn)

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

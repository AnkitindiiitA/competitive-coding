
#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin>>n;
    
    vector<int>masks(n,0);
    
    for(int i=0;i<n;i++){
         int num_workers;
         cin>>num_workers;
         int mask=0;
        for(int j=0;j<num_workers;j++){
            int day;
            cin>>day;
            mask=(mask|(1<<day));
        }
        masks[i]=mask;
    }
    
    int max_days=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int intersection = (masks[i] & masks[j]);
            int common_days = __builtin_popcount(intersection);
            max_days=max(max_days,common_days);
            cout<<i<<" "<<j<<" "<<common_days<<endl;
        }
    }
    cout<<max_days<<endl;
    
    
    return 0;
}

//inputs
//5
//4
//1 4 7 9
//6
//2 9 1 7 25 29
//7
//1 23 4 7 9 11 29
//10
//2 28 8 7 9 10 30 21 18 19
//4 
//1 11 29 7

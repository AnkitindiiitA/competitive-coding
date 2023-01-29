//storing prime factors with their count in the number by using pairs
vector<pair<int,int> > ans;

int limit=n;

while(n>1 && i<=sqrt(limit)){
    if(n%i==0){
        cnt++;
        n/=i;
    }
    else{
        if(cnt>0){
            ans.push_back({cnt,i});
            cnt=0;
        }
        i++;
    }
}

if(cnt>0){
    ans.push_back({cnt,i});
}
if(n>1){
    ans.push_back({1,n});
    n=1;
}


//by storing count int map
ll n; cin>>n;
        map<int,int>mp;
        for(int i=2 ; i*i<=n; ++i){
            while(n%i==0){
                mp[i]++;
                n/=i;
            }
        }
        if(n>1) mp[n]++;

//iterate n^2 times to access layerwise elements and decrease map count of each element by 1;

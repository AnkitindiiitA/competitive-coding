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

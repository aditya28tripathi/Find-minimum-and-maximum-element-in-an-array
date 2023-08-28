

pair<long long, long long> getMinMax(long long a[], int n) {
    
    
   long long int mini = 100000000001;
    long long int maxi = 0;
    
    for (int i =0; i<n;i++){
        if(a[i]>maxi){
            maxi=a[i];
        }
        
        
    }
    
    for (int i=0;i<n;i++){
        if(a[i]<mini){
            mini=a[i];
        }
    }
    
    pair<long long , long long>ans;
    ans.first=mini;
    ans.second=maxi;
    
    return ans;
}

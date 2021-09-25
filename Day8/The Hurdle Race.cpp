int hurdleRace(int k, vector<int> h) {
    
    int mx=*max_element(h.begin(),h.end());
    int ans=mx-k;
    if(ans>0){
        return ans;
    }
    return 0;

}

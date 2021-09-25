int pickingNumbers(vector<int> a) {
    
    sort(a.begin(),a.end());
    int mx=INT_MIN;
    for(int i=0;i<a.size();i++){
        int count=0;
        for(int j=i;j<a.size();j++){
            if(abs(a[i]-a[j])<=1){
                count++;
            }
        }
            mx=max(mx,count);
    }
    return mx;

}

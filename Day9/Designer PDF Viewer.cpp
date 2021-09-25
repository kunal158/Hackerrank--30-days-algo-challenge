int designerPdfViewer(vector<int> h, string w) {
    
    int n=w.size();
    int asc=0,ans=0,mx=INT_MIN;
    for(int i=0;i<n;i++){
        asc=(int)w[i];
        ans=h[asc-97];
        mx=max(mx,ans);
    }
    return n*mx;

}

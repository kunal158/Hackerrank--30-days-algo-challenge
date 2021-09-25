int utopianTree(int n) {
    long long int ans=0;
    if(n==0){
        return 1;
    }
    int p=n/2;
    if(n%2!=0){
        ans=pow(2,p+2)-2;
    }
    else{
        ans=pow(2,p+1)-1;
    }
    return ans;
}

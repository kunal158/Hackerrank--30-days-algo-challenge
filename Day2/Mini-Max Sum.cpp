void miniMaxSum(vector<int> arr) {
    sort(arr.begin(),arr.end());
    vector<int>v;
    long long int sum1=0,sum2=0;
    for(int i=0;i<4;i++){
        sum1+=arr[i];
    }
    for(int i=1;i<5;i++){
        sum2+=arr[i];
    }
    cout<<sum1<<" "<<sum2;
}

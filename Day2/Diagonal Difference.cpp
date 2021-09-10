int diagonalDifference(vector<vector<int>> arr) {
    int sum1=0,sum2=0,count=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            count++;
            if(i==j){
                sum1+=arr[i][j];
                cout<<sum1<<"pehla"<<endl;
            }
            if((i+j)==(n-1)){
                sum2+=arr[i][j];
                cout<<sum2<<"doosra"<<endl;
            }
        }cout<<endl;}
        cout<<count<<"times";
        return abs(sum1-sum2);
    }

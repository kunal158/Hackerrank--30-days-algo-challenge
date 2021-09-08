vector<int> compareTriplets(vector<int> a, vector<int> b) {
    int c1=0,c2=0;
    vector<int>ans;
    for(int i=0;i<3;i++){
        if(a[i]>b[i]){
            c1++;
        }
        else if(a[i]<b[i]){
            c2++;
        }
        }
        ans.push_back(c1);
        ans.push_back(c2);
        return ans;    
    }

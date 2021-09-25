vector<int> climbingLeaderboard(vector<int> r, vector<int> p) {
    
    stack<int>s;
    int count=0;
    vector<int>v;
    int n=r.size();
    int m=p.size();
    for(int i=0;i<n;i++){
        if(s.empty()){
            s.push(r[i]);
        }
        if(!s.empty()&&r[i]!=s.top()){
            s.push(r[i]);
        }
    }
    count=s.size();
    for(int i=0;i<m;i++){
        
        while(!s.empty()&&p[i]>=s.top()){
            s.pop();
            count--;
        }
        if(s.empty()){
            v.push_back(1);
        }
        else{
            s.push(p[i]);
            count++;
            v.push_back(count);
        }
    }
    return v;

}

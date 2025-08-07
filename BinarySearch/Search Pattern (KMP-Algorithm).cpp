public:
    vector<int> search(string& pat, string& txt) {
        // code here
        int n=txt.size();
        int m=pat.size();
        vector<int>ans;
        if(n<m){
            return {-1};
        }
        for(int i=0;i<n-m+1;i++){
            if(txt[i]==pat[0]&&txt.substr(i,m)==pat){
                ans.push_back(i);
                }
        }
        return ans;
    }

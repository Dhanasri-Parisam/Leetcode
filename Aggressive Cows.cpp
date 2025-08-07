bool cowsplaced(vector<int> &stalls, int mid,int k){
    int cntcows=1;
    int n=stalls.size();
    int last = stalls[0];
    for(int i=1;i<n;i++){
        if((stalls[i]-last)>=mid){
           cntcows+=1;
           last=stalls[i];
        }
        if(cntcows>=k) return true;
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    int n=stalls.size();
    sort(stalls.begin(),stalls.end());
    int low=1;
    int high=stalls[n - 1] - stalls[0];
    while(low<=high){
        int mid=(low+high)/2;
        if(cowsplaced(stalls,mid,k)==true){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return high;

}

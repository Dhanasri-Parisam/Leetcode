public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int n=arr.size();
        int m=arr[0].size();
        int idx=0,ans=0;
        for(int i=0;i<n;i++){
            int ones_cnt=0;
            for(int j=0;j<m;j++){
                ones_cnt+=arr[i][j];
                if(ones_cnt>ans){
                    ans=ones_cnt;
                    idx=i;
                }
            }
        }
        if(ans==0) return 0;
        return idx;
        
    }


Optimal-> O(n log m)

int lower_bound(vector<int> &arr, int n, int x) {
    int low = 0, high = n - 1, ans = n;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] >= x) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

public:
int rowWithMax1s(vector<vector<int>> &arr) {
    int n = arr.size();
    if (n == 0) return -1; // Handle empty matrix

    int m = arr[0].size(); // Number of columns
    int max_ones = 0, row_idx = -1;

    for (int i = 0; i < n; i++) {
        int first_one_idx = lower_bound(arr[i], m, 1);
        int num_ones = m - first_one_idx;

        if (num_ones > max_ones) {
            max_ones = num_ones;
            row_idx = i;
        }
    }

    return row_idx;
}

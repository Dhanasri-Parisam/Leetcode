

BRUTE FORCE-->
Complexity Analysis

Time Complexity: O(N^2) { Since there are nested loops being used, at the worst case n^2 time would be consumed }.

Space Complexity: O(N) { There is no extra space being used in this approach. But, a O(N) of space for ans array will be used in the worst case }.
------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]); 
    vector<int> ans;
  
    for (int i = 0; i < n; i++) {
        bool leader = false;

        // Checking whether arr[i] is greater than all the elements to its right
        for (int j = i + 1; j <n; j++) {
            if (arr[j] > arr[i]) {
                leader = true;
                break;
            }
        }

        // Push all the leaders in the ans array
        if (leader)
            ans.push_back(arr[i]);
    }
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}


OPTIMAL CODE-->
Time Complexity: O(N) { Since the array is traversed single time back to front, it will consume O(N) of time where N = size of the array }.

Space Complexity: O(N) { There is no extra space being used in this approach. But, a O(N) of space for ans array will be used in the worst case }.
----------------------------------------------------------------------------------------------------------

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& a) {
        // Code here
        vector<int>ans;
        int maxi=INT_MIN;
        int n=a.size();
        
        for(int i=n-1;i>=0;i--){
            if(a[i]>=maxi){
                ans.push_back(a[i]);
                maxi=a[i];
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

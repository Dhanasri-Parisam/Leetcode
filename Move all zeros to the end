Move all zeros to the end:
optimal: 
---------------------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

vector<int> moveZeros(int n, vector<int> a) {
    int j = -1;
    //place the pointer j:
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            j = i;
            break;
        }
    }

    //no non-zero elements:
    if (j == -1) return a;

    //Move the pointers i and j
    //and swap accordingly:
    for (int i = j + 1; i < n; i++) {
        if (a[i] != 0) {
            swap(a[i], a[j]);
            j++;
        }
    }
    return a;
}


int main()
{
    vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    int n = 10;
    vector<int> ans = moveZeros(n, arr);
    for (auto &it : ans) {
        cout << it << " ";
    }
    cout << '\n';
    return 0;
}


--------------------------------------------------------------------------------
Brute:
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> temp;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                temp.push_back(nums[i]);   //storing non-zeros
            }
        }
        int nz=temp.size();
        for(int i=0;i<nz;i++){
            nums[i]=temp[i];  //non zero elements copy to another array 
        }
        for(int i=nz;i<nums.size();i++){ // remaing element set be zero
            nums[i]=0;
        }
    }
};

Single Number
Time complexity->O(n)
Input:
Input: nums = [2,2,1]
Output: 1

--------------------------------------------------------------------
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xor1 = 0;
        for(int i=0; i<nums.size(); i++){
            xor1 = xor1^nums[i];
        }
        return xor1;
    }
};

# hash map
class Solution {
public:
    int singleNumber(vector<int>& arr) {
       unordered_map<int,int> freq;
       for(auto it:arr){
        freq[it]+=1;
       }
       for (int num : arr) {
            if (freq[num] == 1) {
                return num;
            }
        }
        
        return -1;
    }
};

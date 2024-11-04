#include <bits/stdc++.h>
using namespace std;

int countSubarraysWithXOR(vector<int>& A, int k) {
    unordered_map<int, int> prefixXORCount;
    int count = 0;
    int prefixXOR = 0;

    for (int i = 0; i < A.size(); i++) {
        // Calculate prefix XOR up to the current element
        prefixXOR ^= A[i];

        // If the prefix XOR itself is equal to k, increment the count
        if (prefixXOR == k) {
            count++;
        }

        // Check if there's a prefix XOR that can form a subarray with XOR equal to k
        int requiredXOR = prefixXOR ^ k;
        if (prefixXORCount.find(requiredXOR) != prefixXORCount.end()) {
            count += prefixXORCount[requiredXOR];
        }

        // Update the map with the current prefix XOR
        prefixXORCount[prefixXOR]++;
    }

    return count;
}

int main() {
    vector<int> A = {4, 2, 2, 6, 4};
    int k = 6;
    cout << "Count of subarrays with XOR = " << k << " is: " << countSubarraysWithXOR(A, k) << endl;
    return 0;
}

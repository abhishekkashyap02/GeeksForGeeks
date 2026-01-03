class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        long long n = arr.size() + 1;
        long long totalSum = n * ( n + 1 ) / 2;
        
        for(int i = 0; i < n - 1; i++) {
            totalSum = totalSum - arr[i];
        }
        return totalSum;
    }
};
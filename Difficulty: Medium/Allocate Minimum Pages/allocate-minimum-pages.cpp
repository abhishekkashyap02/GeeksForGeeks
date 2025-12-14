class Solution {
  public:
  
    bool isPossible(vector<int> &arr, int n, int k, int mid) {
        int student = 1;
        int pageSum = 0;
        
        for(int i = 0; i < n; i++) {
            if(pageSum + arr[i] <= mid) {
                pageSum += arr[i];
            }
            else {
                student++;
                if(student > k || arr[i] > mid) {
                    return false;
                }
                pageSum = arr[i];
            }
        }
        return true;
    }
    
    
    
    int findPages(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        int ans = -1;
        int sum = 0;
        if(k > n) {
            return ans;
        }
        
        for(int i = 0; i < n; i++) {
            sum += arr[i];
        }
        
        int start = 0;
        int end = sum;
        
        while (start <= end) {
            int mid = start + (end - start) / 2;
            
            if(isPossible(arr, n, k, mid)) {
                ans = mid;
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        return ans;
    }
};
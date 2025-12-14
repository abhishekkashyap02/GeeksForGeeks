class Solution {
  public:
    
    
    bool isPossible(vector<int> &stalls, int k , int mid) {
        int cow = 1; 
        int cowPosition = stalls[0];
        
        for(int i = 0; i < stalls.size(); i++) {
            if(stalls[i] - cowPosition >= mid) {
                cow++;
                if(cow == k) {
                    return true;
                }
                cowPosition = stalls[i];
            }
        }
        return false;
    }
  
  
    int aggressiveCows(vector<int> &stalls, int k) {
        sort(stalls.begin(), stalls.end());
        
        int maxi = -1;
        for(int i = 0; i < stalls.size(); i++) {
            maxi = max(maxi, stalls[i]);
        }
        int start = 0; 
        int end = maxi; 
        int ans = -1;
        if(k > stalls.size()) {
            return ans;
        }
        
        while(start <= end) {
            int mid = start + (end - start) / 2;
            
            if(isPossible(stalls, k, mid)) {
                ans = mid;
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
            
        }
        return ans;
    }
};
class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
        int totalSum = 0;
        
        for(int i = 0; i < arr.size(); i++) {
            totalSum = totalSum + arr[i];
        }
        
        int leftSum = 0; 
        for(int i = 0; i < arr.size(); i++) {
            
            totalSum = totalSum - arr[i];
            
            if(leftSum == totalSum) {
                return i;
            }
            leftSum = leftSum + arr[i];
        }
        return -1;
    }
};





 

class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        // code here
        int n = arr.size();
        for(int i = 1; i < n; i++) {
            
            bool isSwapped = false;
            for(int j = 0; j < n - i; j++) {
                if(arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                    isSwapped = true;
                }
            }
            if(isSwapped == false) {
                break;
            }
        }
    }
};
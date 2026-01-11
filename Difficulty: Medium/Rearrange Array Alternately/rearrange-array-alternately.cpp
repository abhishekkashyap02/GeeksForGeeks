// Abhishek Kashyap

class Solution {
  public:
    void rearrange(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());

        int base = arr[n - 1] + 1;
        int left = 0, right = n - 1;

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                arr[i] += (arr[right] % base) * base;
                right--;
            } else {
                arr[i] += (arr[left] % base) * base;
                left++;
            }
        }

        for (int i = 0; i < n; i++) {
            arr[i] /= base;
        }
    }
};

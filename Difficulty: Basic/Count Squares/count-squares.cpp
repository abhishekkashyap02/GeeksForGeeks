// Abhishek Kashyap

class Solution {
  public:
    int countSquares(int n) {
        int count = 0;
        for(long long i = 1; i * i < n; i++) {
            count++;
        }
        return count;
    }
};
// Abhishek Kashyap
class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int org = n;
        int sum = 0;
        int rem;
        while (n > 0) {
            rem = n % 10;
            sum = sum + (rem * rem * rem);
            n = n / 10;
        }
        return sum == org;
    }
};
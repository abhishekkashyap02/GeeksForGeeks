// Abhishek Kashyap

class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        // code here
        int org = n;
        int count = 0;
        int rem;
        while(n > 0) {
            rem = n % 10;
            if(rem != 0 && org % rem == 0) {
                count++;
            }
            n = n / 10;
        }
        return count;
    }
};
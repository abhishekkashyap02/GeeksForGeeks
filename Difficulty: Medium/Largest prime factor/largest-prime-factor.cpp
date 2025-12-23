class Solution {
  public:
  // Abhishek Kashyap
    int largestPrimeFactor(int n) {
        // code here
        int largest = -1;

        // Remove all factors of 2
        while (n % 2 == 0) {
            largest = 2;
            n /= 2;
        }

        // Check for odd factors
        for (int i = 3; i * i <= n; i += 2) {
            while (n % i == 0) {
                largest = i;
                n /= i;
            }
        }

        // If n is still greater than 1, it is prime
        if (n > 1) {
            largest = n;
        }

        return largest;
        
    }
};
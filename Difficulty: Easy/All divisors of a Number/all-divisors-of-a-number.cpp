// Abhishek Kashyap

class Solution {
  public:
    void print_divisors(int n) {
        // Code here.
        for(int i = 1; i * i <= n; i++) {
            if(n % i == 0) {
                cout << i << " ";
            }
        }
        for(int i = sqrt(n); i >= 1; i--) {
            if(n % i == 0 && i != n/i) {
                cout << n / i << " ";
            }
        }
    }
};
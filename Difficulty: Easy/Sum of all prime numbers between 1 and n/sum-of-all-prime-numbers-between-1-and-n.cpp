// Abhishek Kashyap

class Solution {
  public:
    bool isPrime(int x) {
        if(x <= 1) return false;
        if(x == 2) return true;
        if(x % 2 == 0) return false;
        for(int i = 3; i * i <= x; i+=2) {
            if(x % i == 0) return false;
        }
        return true;
    }
    
    int prime_Sum(int n) {
        int sum = 0;
        for(int i = 0; i<= n; i++) {
            if(isPrime(i)) {
                sum = sum + i;
            }
        }
        return sum;
    }
};
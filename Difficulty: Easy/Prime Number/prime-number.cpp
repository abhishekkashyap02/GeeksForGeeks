// Abhishek Kashyap

class Solution {
  public:
    bool isPrime(int n) {
        // code here
        if( n <= 1 ) return false;
        if( n == 2 ) return true;       // 2 is a prime number
        if ( n % 2 == 0 ) return false;
        for(long long i = 3; i * i <= n; i+=2) {
            if(n % i == 0) {
                return false;
            }
        }
        return true;
    }
};

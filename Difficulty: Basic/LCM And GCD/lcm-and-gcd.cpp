// Abhishek Kashyap
class Solution {
public:
    vector<int> lcmAndGcd(int a, int b) {
        // code here
        int x = a, y = b;
        while( y != 0 ) {
            int temp = x % y;
            x = y;
            y = temp;
        }
        int gc = x;
        long long l = (1LL * a * b) / gc;
        return {l, gc};
    }
};

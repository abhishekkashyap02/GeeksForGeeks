class Solution {
  public:
    string reverseEqn(string s) {
        // code here.
        string num = "";
        string ans = "";
        for(int i = s.size() -1; i>=0; i--) {
            if(s[i] >= '0' && s[i] <= '9'){
                num = s[i] + num;
            }
            else {
                ans = ans + num + s[i];
                num = "";
            }
        }
        ans = ans + num;
        return ans;
        
    }
};
// Abhishek Kashyap
class Solution {
public:
    string multiplyStrings(string &s1, string &s2) {

        bool negative = false;

        if (s1[0] == '-') {
            negative = !negative;
            s1 = s1.substr(1);
        }
        if (s2[0] == '-') {
            negative = !negative;
            s2 = s2.substr(1);
        }

        int n = s1.size();
        int m = s2.size();

        vector<int> ans(n + m, 0);


        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                ans[i + j + 1] += (s1[i] - '0') * (s2[j] - '0');
            }
        }


        for (int i = n + m - 1; i > 0; i--) {
            ans[i - 1] += ans[i] / 10;
            ans[i] %= 10;
        }


        string res = "";
        int i = 0;
        while (i < n + m && ans[i] == 0) i++;

        while (i < n + m) {
            res += ans[i] + '0';
            i++;
        }

        if (res == "") return "0";
        if (negative) res = "-" + res;

        return res;
    }
};

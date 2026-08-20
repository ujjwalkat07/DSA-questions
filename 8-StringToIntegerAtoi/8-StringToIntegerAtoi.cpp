// Last updated: 8/20/2026, 8:36:01 PM
class Solution {
public:
    bool isDigit(char ch) { return ch >= '0' && ch <= '9'; }
    int myAtoi(string s) {
        int i = 0;
        long num = 0;
        int sign = 1;
        int n = s.size();

        // 1. remove white spaces
        while (i < n && s.at(i) == ' ') {
            i++;
        }
        // 2. identify sign
        if (i < n) {
            if (s.at(i) == '-') {
                sign = -1;
                i++;
            } else if (s.at(i) == '+') {
                i++;
            }
        }
        // 3. conversion

        while (i < n && isDigit(s.at(i))) {
            int digit = s.at(i) - '0';
            num = num * 10 + digit;
            // 4. overflow and underflow check
            if (sign == 1 && num > INT_MAX)
                return INT_MAX; // clamp to 2147483647
            if (sign == -1 && -num < INT_MIN)
                return INT_MIN;
            i++;
        }

        return num * sign;
    }
};
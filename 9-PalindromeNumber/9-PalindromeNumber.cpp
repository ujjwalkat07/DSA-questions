// Last updated: 6/24/2026, 8:52:58 PM
class Solution {
public:
    bool isPalindrome(int x) {

        if(x < 0)
            return false;

        int temp = x;
        int newNum = 0;

        while(x != 0) {
            int digit = x % 10;
            if (newNum > INT_MAX / 10)
                return false;
                
            if (newNum < INT_MIN / 10)
                return false;
            newNum = (newNum * 10) + digit;
            x /= 10;
        }

        return newNum == temp;
    }
};
// Last updated: 7/17/2026, 5:40:07 PM
class Solution {
public:
    char lower(char ch) {
        if (ch >= 'A' && ch <= 'Z') {
            char temp = ch + 'a' - 'A';
            return temp;
        } else {
            return ch;
        }
    }
    bool valid(char ch) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ||
            (ch >= '0' && ch <= '9')) {
            return true;
        } else {
            return false;
        }
    }
    bool palindron(string temp) {
        int start = 0;
        int end = temp.length() - 1;
        while (start < end) {
            if (temp[start] == temp[end]) {
                start++;
                end--;
            } else {
                return false;
            }
        }
        return true;
    }
    bool isPalindrome(string s) {
        string temp = "";
        for (int i = 0; i < s.length(); i++) {
            if (valid(s[i])) {
                temp.push_back(lower(s[i]));
            }
        }
        return palindron(temp);
    }
};
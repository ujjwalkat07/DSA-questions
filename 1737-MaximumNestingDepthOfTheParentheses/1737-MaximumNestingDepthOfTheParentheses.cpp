// Last updated: 8/20/2026, 6:19:10 PM
class Solution {
public:
    int maxDepth(string s) {
        int temp = 0;
        int count = 0;

        int n = s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                count++;
                temp=max(count,temp);
            } else if(s[i]==')'){
                count--;
            }
        }
        return temp;
    }
};
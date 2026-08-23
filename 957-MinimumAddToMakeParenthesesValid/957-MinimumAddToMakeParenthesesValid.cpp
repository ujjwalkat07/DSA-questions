// Last updated: 8/23/2026, 9:14:06 PM
class Solution {
public:
    int minAddToMakeValid(string s) {
        int openBrac = 0, closeBrac=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                openBrac++;
            } else{
                if(openBrac>0){
                    openBrac--;
                } else{
                    closeBrac++;
                }
            }
        }

        return openBrac+closeBrac;
    }
};
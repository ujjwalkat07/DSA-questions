// Last updated: 8/20/2026, 6:50:00 PM
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> temp;
        temp['I'] = 1;
        temp['V'] = 5;
        temp['X'] = 10;
        temp['L'] = 50;
        temp['C'] = 100;
        temp['D'] = 500;
        temp['M'] = 1000;

        int ans = 0;

        for(int i = 0;i<s.size();i++){
            if(temp[s[i]]<temp[s[i+1]]){
                ans-=temp[s[i]];
            }
            else{
                ans+=temp[s[i]];
            }
        }
        return ans;
    }
};
// Last updated: 7/24/2026, 1:29:18 PM
class Solution {
public:
    string removeOccurrences(string s, string part) {
        
        while(s.size()>0 && s.find(part) < s.size()){
            s.erase(s.find(part),part.size());
        }

        return s;
    }
};
// Last updated: 8/19/2026, 7:00:11 PM
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        for (char c : s) freq[c]++;

        int n = s.size();
        vector<vector<char>> buckets(n + 1); 

        for (auto& [ch, f] : freq) {
            buckets[f].push_back(ch);
        }

        string result;

        for (int f = n; f >= 1; f--) {
            for (char ch : buckets[f]) {
                result.append(f, ch); 
            }
        }

        return result;
    }
};
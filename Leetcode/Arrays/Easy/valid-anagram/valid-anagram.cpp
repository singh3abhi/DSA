class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;

        vector<int> freqTable(26,0);

        for(int i = 0; i < s.length(); i++){
            freqTable[s[i] - 'a']++;
            freqTable[t[i] - 'a']--;
        }

        for(int i = 0; i < 26; i++){
            if(freqTable[i] != 0){
                return false;
            }
        }

        return true;
    }
};
#include <map>

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> mapToT, mapToS;
        for (int i = 0; i < s.size(); i++) {
            mapToT[s[i]] = t[i];
            mapToS[t[i]] = s[i];
            
            if (mapToT.size() != mapToS.size()) return false;
        }
        return true;
    }
};
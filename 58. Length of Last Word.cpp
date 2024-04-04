class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        bool foundSpace = false;
        for (char i : s) {
            if (('a' <= i && i <= 'z') || ('A' <= i && i <= 'Z')) {
                length = (foundSpace) ? 0 : length;
                length++;
                foundSpace = false;
            }
            else if (i == ' ') {
                foundSpace = true;
            } 
        }
        return length;
    }
};
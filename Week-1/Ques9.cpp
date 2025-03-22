// Day – 09
// 443. String Compression
// Given an array of characters chars, compress it using the following algorithm:
// Begin with an empty string s. For each group of consecutive repeating characters in chars:
// •	If the group's length is 1, append the character to s.
// •	Otherwise, append the character followed by the group's length.
// The compressed string s should not be returned separately, but instead, be stored in the input character array chars. Note that group lengths that are 10 or longer will be split into multiple characters in chars.
// After you are done modifying the input array, return the new length of the array.
// You must write an algorithm that uses only constant extra space.
https://leetcode.com/problems/string-compression/
// https://leetcode.com/problems/string-compression/


class Solution {
public:
    int compress(vector<char>& chars) {
        int count = 1;
        string sb;
        sb += chars[0];
        
        for (size_t i = 1; i < chars.size(); i++) {
            if (chars[i - 1] != chars[i]) {
                if (count > 1) {
                    sb += to_string(count);
                }
                sb += chars[i];
                count = 1;
            } else {
                count++;
            }
        }
        
        if (count > 1) {
            sb +=to_string(count);
        }
        
        for (size_t i = 0; i < sb.length(); i++) {
            chars[i] = sb[i];
        }
        
        return sb.length();
    }
};

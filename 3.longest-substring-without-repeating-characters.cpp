/*
 * [3] Longest Substring Without Repeating Characters
 *
 * https://leetcode.com/problems/longest-substring-without-repeating-characters
 *
 * algorithms
 * Medium (24.46%)
 * Total Accepted:    390.1K
 * Total Submissions: 1.6M
 * Testcase Example:  '"abcabcbb"'
 *
 * Given a string, find the length of the longest substring without repeating
 * characters.
 * 
 * Examples:
 * 
 * Given "abcabcbb", the answer is "abc", which the length is 3.
 * 
 * Given "bbbbb", the answer is "b", with the length of 1.
 * 
 * Given "pwwkew", the answer is "wke", with the length of 3. Note that the
 * answer must be a substring, "pwke" is a subsequence and not a substring.
 */
#if 0
#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
#include <map>
#include <stdio.h>

using namespace std;
#endif

class Solution {
    public:
		#if 0
		int lengthOfLongestSubstring(string s) {
			unordered_map<char, int> mp;
			int start = -1;
			int maxLen = 0;
			int max_start = 0;
			for (int i = 0; i < s.size(); i++) {
				if (mp.count(s[i]) != 0) {
					start = max(start, mp[s[i]]);
				}
				mp[s[i]] = i;
				if(i-start > maxLen)
				{
					maxLen = i-start;
					max_start = start+1;
				}
			}
			string str_max = s.substr(max_start, maxLen);
			return str_max.length();
		}
		#endif
		#if 0
		int lengthOfLongestSubstring(string s) {
			map<char, int> charMap;
			int start = -1;
			int maxLen = 0;
			
			for (int i = 0; i < s.size(); i++) {
				if (charMap.count(s[i]) != 0) {
					start = max(start, charMap[s[i]]);
				}
				charMap[s[i]] = i;
				maxLen = max(maxLen, i-start);
			}
			
			return maxLen;
		}
		#endif
		#if 1
		int lengthOfLongestSubstring(string s) {
			vector<int> dict(256, -1);
			int maxLen = 0, start = -1;
			for (int i = 0; i != s.length(); i++) {
				if (dict[s[i]] > start)
					start = dict[s[i]];
				dict[s[i]] = i;
				maxLen = max(maxLen, i - start);
			}
			return maxLen;
		}
		#endif
    };
#if 0
int main()
{
	string a = "abcabc123412345";
	std::cout << a << std::endl;
	//std::cout << lengthOfLongestSubstring(a) << std::endl;
	std::cout << Solution::lengthOfLongestSubstring(a) << std::endl;
	return 0;
}
#endif
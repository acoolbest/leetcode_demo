/*
 * [1] Two Sum
 *
 * https://leetcode.com/problems/two-sum
 *
 * algorithms
 * Easy (36.18%)
 * Total Accepted:    704.6K
 * Total Submissions: 1.9M
 * Testcase Example:  '[3,2,4]\n6'
 *
 * Given an array of integers, return indices of the two numbers such that they
 * add up to a specific target.
 * 
 * You may assume that each input would have exactly one solution, and you may
 * not use the same element twice.
 * 
 * 
 * Example:
 * 
 * Given nums = [2, 7, 11, 15], target = 9,
 * 
 * Because nums[0] + nums[1] = 2 + 7 = 9,
 * return [0, 1].
 * 
 * 
 */
class Solution {
public:
	#if 0
    vector<int> twoSum(vector<int>& nums, int target) {
		multimap<int, int> mp;
		for(int i=0;i<nums.size();i++)
		{
			mp.insert(make_pair(nums[i], i));
		}
		vector<int> ret;
		for(auto iter=mp.begin();iter!=mp.end();iter++)
		{
			auto iter_find = mp.find(target - iter->first);
			if(iter_find != mp.end() && iter->second != iter_find->second)
			{
				ret.push_back(iter->second < iter_find->second ? iter->second : iter_find->second);				
				ret.push_back(iter->second > iter_find->second ? iter->second : iter_find->second);
				break;
			}
		}
		return ret;
    }
	#endif
	#if 0
	vector<int> twoSum(vector<int> &numbers, int target)
	{
		//Key is the number and value is its index in the vector.
		unordered_map<int, int> hash;
		vector<int> result;
		for (int i = 0; i < numbers.size(); i++) {
			int numberToFind = target - numbers[i];

		//if numberToFind is found in map, return them
			if (hash.find(numberToFind) != hash.end()) {
				result.push_back(hash[numberToFind]);
				result.push_back(i);			
				return result;
			}

		//number was not found. Put it in the map.
			hash[numbers[i]] = i;
		}
		return result;
	}
	#endif
	#if 1
	vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        int n = (int)nums.size();
        for (int i = 0; i < n; i++) {
            auto p = map.find(target-nums[i]);
            if (p!=map.end()) {
                return {p->second, i};
            }
            map[nums[i]]=i;
        }
    }
	#endif
};



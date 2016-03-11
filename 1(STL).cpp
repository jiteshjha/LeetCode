
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_set<int> my_set;
        vector<int>::iterator i;
        vector<int> result;
        int x, y;


        int t = 0;
        for(i = nums.begin(); i < nums.end(); i++, t++) {
            unordered_set<int>::const_iterator got = my_set.find(target - *i);
            if(got != my_set.end()) {
                x = target - *i;
                y = t;
                break;
            }
            my_set.insert(*i);

        }

        t = 0;

        for(i = nums.begin(); i < nums.end(); i++, t++) {

            if(*i == x) {
                x = t;
                break;
            }
        }


        result.push_back(x);
        result.push_back(y);
        return result;
    }
};

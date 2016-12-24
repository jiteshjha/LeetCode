// https://leetcode.com/problems/fizz-buzz/

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> result;

        for(int i = 1; i <= n; i++) {
            if(i%5 == 0 && i%3 == 0) {
                result.emplace_back("FizzBuzz");
            }
            else if(i%5 == 0) {
                result.emplace_back("Buzz");
            }
            else if(i%3 == 0) {
                result.emplace_back("Fizz");
            }
            else {
                result.emplace_back(std::to_string(i));
            }
        }

        return result;
    }
};

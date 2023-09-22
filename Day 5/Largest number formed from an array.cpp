// Question Link:- https://practice.geeksforgeeks.org/problems/largest-number-formed-from-an-array1117/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

class Solution{
public:
    // Merge two numbers
    string numberMerge(int a, int b) {
        string s1 = to_string(a);
        string s2 = to_string(b);
        return s1 + s2;
    }

    // Compare given two strings and decide if they need to be swapped.
    bool compareStrings(string s1, string s2) {
        return (s1 + s2) > (s2 + s1); // Compare concatenated strings to decide the order
    }
	string printLargest(vector<string> &nums) {
	    // code here
        int len = nums.size();

        // Sort the numbers using custom comparison function
        sort(nums.begin(), nums.end(), [&](const string &a, const string &b) {
            return compareStrings(a, b);
        });

        // Concatenate sorted numbers to form the largest possible number
        string largeNumber;
        for (int i = 0; i < len; i++) {
            largeNumber.append(nums[i]);
        }
        return largeNumber;
	}
};


// Refer this video: https://youtu.be/qEIGhVtZ-sg?si=TNiwoDvj9TUqIk8C

// Question Link:- https://leetcode.com/problems/spiral-matrix/description/

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
      vector<int> ans;
 
  int n = matrix.size();
  int m = matrix[0].size(); 
  
  // Initialize the pointers reqd for traversal.
  int top = 0, left = 0, bottom = n - 1, right = m - 1;

  // Loop until all elements are not traversed.
  while (top <= bottom && left <= right) {
      
    // For moving left to right
    for (int i = left; i <= right; i++)
    ans.push_back(matrix[top][i]);
    top++;

    // For moving top to bottom.
    for (int i = top; i <= bottom; i++)
    ans.push_back(matrix[i][right]);
    right--;
    
    // For moving right to left.
    if (top <= bottom) {
      for (int i = right; i >= left; i--)
       ans.push_back(matrix[bottom][i]);
       bottom--;
    }

    // For moving bottom to top.
    if (left <= right) {
      for (int i = bottom; i >= top; i--)
        ans.push_back(matrix[i][left]);
        left++;
    }
  }
  return ans;
    }
};


// Refer this article:- https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2/

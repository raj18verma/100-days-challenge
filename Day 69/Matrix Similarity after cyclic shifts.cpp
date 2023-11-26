// Question Link:- https://leetcode.com/problems/matrix-similarity-after-cyclic-shifts/

class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
    int m = mat.size();
    int n = mat[0].size();

    vector<vector<int>> original = mat;

    for (int i = 0; i < m; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < k; j++) {
                int temp = mat[i][0];
                for (int l = 0; l < n - 1; l++) {
                    mat[i][l] = mat[i][l + 1];
                }
                mat[i][n - 1] = temp;
            }
        } else {
            for (int j = 0; j < k; j++) {
                int temp = mat[i][n - 1];
                for (int l = n - 1; l > 0; l--) {
                    mat[i][l] = mat[i][l - 1];
                }
                mat[i][0] = temp;
            }
        }
    }
    return mat == original;
    }
};

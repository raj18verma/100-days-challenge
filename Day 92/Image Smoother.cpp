// Question Link:- https://leetcode.com/problems/image-smoother/

class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m = img.size();
        int n = img[0].size();

        vector<int> temp(n);
        int prevCorner = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int sum = 0;
                int count = 0;
                if (i + 1 < m) {
                    if (j - 1 >= 0) {
                        sum += img[i + 1][j - 1];
                        count += 1;
                    }
                    sum += img[i + 1][j];
                    count += 1;
                    if (j + 1 < n) {
                        sum += img[i + 1][j + 1];
                        count += 1;
                    }
                }
                if (j + 1 < n) {
                    sum += img[i][j + 1];
                    count += 1;
                }
                sum += img[i][j];
                count += 1;
                if (j - 1 >= 0) {
                    sum += temp[j - 1];
                    count += 1;
                }
                if (i - 1 >= 0) {
                    if (j - 1 >=  0) {
                        sum += prevCorner;
                        count += 1;
                    }
                    sum += temp[j];
                    count += 1;
                    if (j + 1 < n) {
                        sum += temp[j + 1];
                        count += 1;
                    }
                }
                if (i - 1 >= 0) {
                    prevCorner = temp[j];
                }
                temp[j] = img[i][j];
                img[i][j] = sum / count;
            }
        }
        return img;
    }
};

// reference video:- https://youtu.be/QXnw71MA_pU?si=cEx-4F4OKJ7Vc4HW

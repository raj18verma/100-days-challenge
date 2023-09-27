// Question Link:- https://www.geeksforgeeks.org/median-of-two-sorted-arrays-of-different-sizes/

class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        // Your code goes here
    int n1 = array1.size(), n2 = array2.size();
    //if n1 is bigger swap the arrays:
    if (n1 > n2) return MedianOfArrays(array2, array1);

    int n = n1 + n2; //total length
    int left = (n1 + n2 + 1) / 2; //length of left half
    int low = 0, high = n1;
    while (low <= high) {
        int mid1 = (low + high) >> 1;
        int mid2 = left - mid1;
        //calculate l1, l2, r1 and r2;
        int l1 = INT_MIN, l2 = INT_MIN;
        int r1 = INT_MAX, r2 = INT_MAX;
        if (mid1 < n1) r1 = array1[mid1];
        if (mid2 < n2) r2 = array2[mid2];
        if (mid1 - 1 >= 0) l1 = array1[mid1 - 1];
        if (mid2 - 1 >= 0) l2 = array2[mid2 - 1];

        if (l1 <= r2 && l2 <= r1) {
            if (n % 2 == 1) return max(l1, l2);
            else return ((double)(max(l1, l2) + min(r1, r2))) / 2.0;
        }

        //eliminate the halves:
        else if (l1 > r2) high = mid1 - 1;
        else low = mid1 + 1;
    }
    return 0; 
    }
};


// Refer this article: https://takeuforward.org/data-structure/median-of-two-sorted-arrays-of-different-sizes/

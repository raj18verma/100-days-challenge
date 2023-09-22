// Question Link:- https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab

class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin(), a.end());
    long long minDiff = LLONG_MAX; 
    
    for(int i=0; i+m-1<n; i++){
        long long currentDiff = a[i + m - 1] - a[i];
        minDiff = min(currentDiff, minDiff);
    }
    return minDiff;
    }   
};


// Refer this video: https://youtu.be/jjPw45HkMQs?si=PEsXQU6S99SMomwE

// Question Link:- https://practice.geeksforgeeks.org/problems/max-rectangle/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article


class Solution{
  public:
int solve(int a[], int n)
{
    vector<int> v(n, 0);
    stack<pair<int, int>> l, r; // l->left & r->right

    for(int i=0; i<n; i++) {
        while(!l.empty() && l.top().first>=a[i]) l.pop();
        while(!r.empty() && r.top().first>=a[n-1-i]) r.pop();

        if(l.empty()) v[i] += i+1;
        else v[i] +=  i - l.top().second;
        l.push({a[i], i});

        if(r.empty()) v[n-1-i] += i+1;
        else v[n-1-i] += r.top().second - (n-1-i);
        r.push({a[n-1-i], n-1-i});
    }
    for(int i=0; i<n; i++) v[i] = a[i]*(v[i]-1);
    
    return (*max_element(v.begin(), v.end()));
} 

    int maxArea(int a[MAX][MAX], int n, int m) {
        // Your code here
         int res = 0;

        for(int i=0; i<n; i++){
        int arr[m];
        for(int j=0; j<m; j++){
            if(i && a[i][j]) a[i][j] += a[i-1][j];
            arr[j] = a[i][j];
        }
        res = max(res, solve(arr, m));
    }
    return res;
    }
};


// Refer your notes of aditya verma stack https://youtu.be/St0Jf_VmG_g?si=_3nt_b9E5nnCv-nX

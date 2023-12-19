// Question Link:- https://www.codingninjas.com/studio/problems/one-odd-occurring_4606074?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION

int missingNumber(int n, vector<int> &arr){
    // Write your code here.
        int ans=0;

        for(int i=0; i<n; i++){
            ans=ans^arr[i];
        }
        return ans;
}

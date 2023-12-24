// Question Link:- https://www.codingninjas.com/studio/problems/print-all-divisors-of-a-number_1164188?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION

vector<int> printDivisors(int n) {
    // Write your code here
    vector<int>v;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            v.push_back(i);
        }
    }
    return v;
}

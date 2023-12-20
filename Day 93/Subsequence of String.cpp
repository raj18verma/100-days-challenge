// Question Link:- https://www.codingninjas.com/studio/problems/subsequences-of-string_985087?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION

#include <bits/stdc++.h> 
vector<string> subsequences(string str){
    vector<string> set;
    int n=str.size();
    for(int i =1;i<(1<<n);i++){
        string newString ;
        for(int bit = 0;bit< (n);bit++){
            if(i&(1<<bit)){
                newString.push_back(str[bit]);
            }
        }
        set.push_back(newString);
    }
    return set;
}

// Question Link:- https://www.codingninjas.com/studio/problems/power-of-numbers_8157729?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION

#include<bits/stdc++.h>
int power(int N, int R){
    if (R == 0)
        return 1;
    long long result = 1;
    long long base = N;
    long long mod = 1000000007;

    while (R > 0) {
        if (R % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        R /= 2;
    }

    return int(result);

}

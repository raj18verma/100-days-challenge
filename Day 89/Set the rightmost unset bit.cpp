// Question Link:- https://www.codingninjas.com/studio/problems/set-the-rightmost-unset-bit_8160456?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION

int setBits(int n){
    // Write your code here.
    if((n&n+1) == 0) return n;
    return n|n+1;
}

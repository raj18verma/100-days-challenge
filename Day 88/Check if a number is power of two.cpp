// Question Link:- https://www.codingninjas.com/studio/problems/power-of-two_893061?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION

bool isPowerOfTwo(int n)
{	
    // Write your code here.
    if((n&(n-1))==0) return true;
    else return false;
}

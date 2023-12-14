// Question Link:- https://www.codingninjas.com/studio/problems/check-whether-k-th-bit-is-set-or-not_5026446?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION

bool isKthBitSet(int n, int k)
{
    // Write your code here.
    int ans = n & (1<<k-1);
    return (ans>>k-1) & 1;
}

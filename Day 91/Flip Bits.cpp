// Question Link:- https://www.codingninjas.com/studio/problems/flip-bits_8160405?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION

int flipBits(int A, int B){
    // Write your code here.
    int cnt = 0;
    int x = A^B;

    while(x){
        if(x&1)
        cnt++;
        x /= 2;

    }
    return cnt;
}

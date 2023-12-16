// Question Link:- https://www.codingninjas.com/studio/problems/count-total-set-bits_784?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

int max2(int n){
    int c=0;
    while((1<<c)<=n){
        c++;
    }
    return c-1;
}

int countSetBits(int N)
{
    //Write your code here
    if(N==0) return 0;
    int x=max2(N);
    int ans=x*(1<<(x-1))+(N-(1<<x))+1+countSetBits(N-(1<<x));
    return ans;

}


// yt refer video:- https://www.youtube.com/live/ZzZcFXDcbJw?si=kUhVmPnbLwnNBzaK

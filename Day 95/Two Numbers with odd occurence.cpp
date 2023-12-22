// Question Link:- https://www.codingninjas.com/studio/problems/two-numbers-with-odd-occurrences_8160466?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION

vector<int> twoOddNum(vector<int> arr){
    // Write your code here.
    int n = arr.size();
    int xorResult = 0; 

    
    for(int i=0; i<n; i++) {
        xorResult = xorResult ^ arr[i];
    }   

    // Find the rightmost set bit in the XOR result
    int cnt = 0;
    while(xorResult) {
        if(xorResult & 1)
            break;
        cnt++;
        xorResult = xorResult >> 1;
    }

    // Divide the elements into two groups based on the rightmost set bit
    int xor1=0, xor2=0;

    for(int i=0; i<n; i++) {
        if(arr[i] & (1<<cnt))
            xor1 = xor1 ^ arr[i];
        else
            xor2 = xor2 ^ arr[i];
    }

    // To return them in decreasing order
    if (xor1 < xor2)
        swap(xor1, xor2);

    return {xor1, xor2};
}

// Question Link:- https://practice.geeksforgeeks.org/problems/consecutive-elements2306/1

class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        // code here.
        string res = "";
    int n = S.length();
    
    for (int i = 0; i < n; i++) {
        if (i < n - 1 && S[i] == S[i + 1]) {
            continue;
        } else {
            res += S[i];
        }
    }
    
    return res;
    }
};


// T.C:- O(n) and S.C:- O(1)

// Refer yt video:- https://youtu.be/utn2wJ7VAns?si=VFCkPU0k5yhqpOMn

// Question Link:- https://practice.geeksforgeeks.org/problems/print-diagonally4331/1

class Solution{
	
	public:
	vector<int> downwardDiagonal(int N, vector<vector<int>>A)
	{
		// Your code goes here
			vector<int> res;
		for (int i = 0; i < N; i++) {
		    int l = 0, u = i;
		    while (l < N && u >= 0) {
		        res.push_back(A[l][u]);
		        l++;
		        u--;
		    }
		}
		
		for (int i = 1; i < N; i++) {
		    int l = i, u = N-1;
		    while (l < N && u >= 0) {
		        res.push_back(A[l][u]);
		        l++;
		        u--;
		    }
		}
		return res;
	}
};

// Refer this video:- https://youtu.be/CAvEOSaZ5xw?si=hWASCv75fBd5E7mf

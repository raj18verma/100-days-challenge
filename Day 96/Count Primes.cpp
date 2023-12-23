// Question Link:- https://www.codingninjas.com/studio/problems/prime-factorisation_1760849?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION

bool isPrime(int N) {
   if(N<2)return 0;
        for(int i=2;i*i<=N;i++){
            if(N%i==0)return 0;
        }
        return 1;
}

vector<int> countPrimes(int n) {
     vector<int>ans;
     for(int i=2;i<n;i++){
         if(isPrime(i) && (n%i)==0){
             ans.push_back(i);
         }
     }
     return ans;
}


// Learn Sieve of Eratosthenes

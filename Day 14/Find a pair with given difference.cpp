// Question Link:- https://www.geeksforgeeks.org/find-a-pair-with-the-given-difference/

// BRUTEFORCE: 
bool findPair(int arr[], int size, int n){
    //code
    int ans=-1;
    for(int i=0; i<size; i++){
        int y=arr[i]+n;
        for(int j=0; j<n; j++){
            if(arr[j]==y){
                ans=1;
                break;
            }
        }
        return ans;
    }
}

// T.C:- O(n^2)  and S.C:- O(1)


// BETTER: HASHING
bool findPair(int arr[], int size, int n){
    //code
    unordered_map<int,int>m;
    int f=-1;
    for(int i=0; i<size; i++) m[arr[i]]=1;
    for(int i=0; i<size; i++){
        if(m[arr[i]+n]){
            f=1;
            break;
        }
    }
    return f;
}

//T.C:-O(n)  and  S.C:- O(n)


// OPTIMAL: Binary Search

bool findPair(int arr[], int size, int n){
    //code
    sort(arr,arr+size);
    bool f=false;
    for(int i=1;i<size;i++){
        if(binary_search(arr+i,arr+size,arr[i-1]+n)){
            return true;
        }
    }
    return false;
}

// T.C:- O(nlogn)  and S.C:- O(1)

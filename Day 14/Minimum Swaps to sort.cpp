// Question Link:- https://practice.geeksforgeeks.org/problems/minimum-swaps/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

	int minSwaps(vector<int>&nums)
	{
	    // Code here
	    int n=nums.size();
	    vector<pair<int,int>>v(n);
	    
	    for(int i=0; i<n; i++){
	        v[i]={nums[i],i};
	    }
	    sort(v.begin(),v.end());
	    int c=0;
	    for(int i=0; i<n; i++){
	        if(v[i].second==i) continue;
	        else{
	            c++;
	            swap(v[i],v[v[i].second]);
	            i--;
	        }
	    }
	    return c;


// Refer this yt video:- https://youtu.be/w1KLyXj8GRU?si=zyNDGEfBj0UTDn5R

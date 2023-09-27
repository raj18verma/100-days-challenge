// Question Link:- https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // your code here
    int cnt = 0;
    int el; 

    //applying the algorithm:
    for (int i = 0; i < size; i++) {
        if (cnt == 0) {
            cnt = 1;
            el = a[i];
        }
        else if (el == a[i]) cnt++;
        else cnt--;
    }

    //checking if the stored element is the majority element:
    int cnt1 = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] == el) cnt1++;
    }

    if (cnt1 > (size / 2)) return el;
    return -1;
        
    }
};


// Refer this article::  https://takeuforward.org/data-structure/find-the-majority-element-that-occurs-more-than-n-2-times/

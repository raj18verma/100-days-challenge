// Question Link:- https://practice.geeksforgeeks.org/problems/reverse-a-string/1

class Solution
{
    public:
    string reverseWord(string str)
    {
        // Your code goes here
        int s=0;
        int e=str.size()-1;
        
       
        while(s<=e){
            swap(str[s++], str[e--]);
        }
        return str;

    }
};


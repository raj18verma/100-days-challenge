// Question Link:- https://leetcode.com/problems/defanging-an-ip-address/

class Solution {
public:
    string defangIPaddr(string address) {
        string ans;
        int index=0;
        while(index<address.size()){
            if(address[index]=='.') {
                ans+="[.]";
            }else{
                ans+=address[index];
            }
            index++;
        } 
        return ans;
    }
};

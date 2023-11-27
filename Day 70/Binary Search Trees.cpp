// Question Link:- https://www.codingninjas.com/studio/problems/binary-search-trees_8160443?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

bool isValidBST(vector<int> &order){
    // Write your code here.
    for(int i=0;i<order.size()-1;i++)
        if(order[i]>=order[i+1]) return false;
        return true;
}

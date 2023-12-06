// Question Link:- https://leetcode.com/problems/calculate-money-in-leetcode-bank/

class Solution {
public:
    int totalMoney(int n) {
        int items  = n / 7;
        int first  = 28;
        int last   = 28 + (items - 1) * 7; 
        int arithmeticSum = items * (first + last) / 2; 
        int monday_money = 1 + items;
        int finalWeek    = 0;
        
        for (int day = 1; day <= (n % 7); day++) { 
            finalWeek += monday_money++;
        }
        return arithmeticSum + finalWeek;  
    }
};

// yt refer video:- https://youtu.be/TAmv6Csq3Ss?si=0r6YVCAqDi5CtilE

// Question Link:- https://www.codingninjas.com/studio/problems/-divide-two-integers_1112617?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION

int divideTwoInteger(int dividend, int divisor) {
	// Write your code here.
        if(dividend==INT_MIN && divisor==-1) return INT_MAX;
        
        bool isNegative=dividend<0 ^ divisor<0;
        dividend=abs(dividend);
        divisor=abs(divisor);
        int quotient=0;
        while(dividend-divisor>=0){
            int curDivisor=divisor;
            int curQuotient=1;
            while(dividend-(curDivisor<<1)>=0){
                curDivisor=curDivisor<<1;
                curQuotient=curQuotient<<1;
            }
            quotient+=curQuotient;
            dividend-=curDivisor;
        }
        return isNegative? -quotient:quotient;
} 

// Question Link:-  https://www.geeksforgeeks.org/problems/check-if-string-is-rotated-by-two-places-1587115620/1


    void rotateanticlockwise(string &s){
        char a=s[0];
        char b=s[1];
        int i=0;
        while(i<s.size()-2){
            s[i]=s[i+2];
            i++;
        }
        s[s.size()-2]=a;
        s[s.size()-1]=b;
    }
    
    void rotateclockwise(string &s){
        char a=s[s.size()-1];
        char b=s[s.size()-2];
        int i=s.size()-1;
        while(i>1){
            s[i]=s[i-2];
            i--;
        }
        s[0]=b;
        s[1]=a;
    }
    
    bool isRotated(string str1, string str2)
    {
        // Your code here
        if(str1.size()!=str2.size()) return 0;
        
        string clockwise=str1, anticlockwise=str1;
        
        rotateclockwise(clockwise);
        rotateanticlockwise(anticlockwise);
        
        if(clockwise==str2 || anticlockwise==str2) return 1;
        else return 0;
        
        
    }

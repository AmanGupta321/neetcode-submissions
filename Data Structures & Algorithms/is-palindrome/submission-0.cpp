class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for(char ch:s){
            if(ch >= 65 && ch <= 90) 
                str.push_back(ch+32);
            
            if((ch >= 97 && ch <= 122) || (ch >= 48 && ch<=57))
                str.push_back(ch);
        }
        string strRev = str;
        reverse(strRev.begin(), strRev.end());
        return strRev==str;
    }
};

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
        int n = str.size();
        int i=0, j=n-1;
        while(i<j){
            if(str[i++] != str[j--]){
                return false;
            }
        }
        return true;
    }
};

class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(int i=0; i<s.size(); i++){
            if(s[i]>=97 and s[i]<=122) str.append(1,s[i]);
            else if(s[i]>=65 and s[i]<=90) str.append(1,s[i]+32);
            else if(s[i]>=48 and s[i]<=57) str.append(1,s[i]);
        }

        string::iterator bgn = str.begin();
        string::iterator nd = str.end()-1;

        while(bgn < nd){
            if(*bgn != *nd) return false;
            bgn++;
            nd--;
        }
        return true;
    }
};

class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        string sol;
        for(int i=n-1;i>=0;i--){
            
            char c = tolower(s[i]);
           if(isalnum(c)){
            sol +=c;
           }
        }
        string ans = sol;
   reverse(sol.begin(),sol.end());
      
        if(ans==sol){
            return true;
        }
        return false;
    }
};
class Solution {
public:
    bool checkString(string s) {
        for(int i=0;i<s.length();i++){
            if(s[i]=='b'){
                int k=i;
                for(int j=k;j<s.length();j++){
                     if(s[j]=='a'){
                        return false;
                     }
                }
            }
        }
        return true;
    }
};
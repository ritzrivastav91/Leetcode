class Solution {
public:
    string reverseString(string s) {
        int len = 0, counter = 0;
        string ret_s;
        while (s[len]!= '\0') len++;
        counter = 0;
        for (int i = len-1; i>=0; i--){
           ret_s[counter] = s[i];
            counter++;
        }
        return ret_s;
    }
};

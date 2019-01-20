class Solution {
public:
    string toLowerCase(string str) {
        for(int i = 0; str[i] != '\0'; i++){
            if(int(str[i]) >= 65 && int(str[i])<= 90) {
                str[i] = int(str[i]) + 32;
            }
        }
        return str;
    }
};

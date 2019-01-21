class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
       string str; 
       vector<string> ret_list, temp_list;
       int flag = 0;
       map<char,string> morse = {
        {'a',".-"},  
        {'b',"-..."},
        {'c',"-.-."},
        {'d',"-.."},
        {'e',"."},
        {'f',"..-."},
        {'g',"--."},
        {'h',"...."},
        {'i',".."},
        {'j',".---"},
        {'k',"-.-"},
        {'l',".-.."},
        {'m',"--"},
        {'n',"-."},
        {'o',"---"},
        {'p',".--."},
        {'q',"--.-"},
        {'r',".-."},
        {'s',"..."},
        {'t',"-"},
        {'u',"..-"},
        {'v',"...-"},
        {'w',".--"},
        {'x',"-..-"},
        {'y',"-.--"},
        {'z',"--.."}
       };
       
       if(words.size() == 0) return 0; 
        
       for(int i = 0; i<words.size(); i++) {
           str = words[i];
           string temp;
           for(int c = 0; str[c] != '\0'; c++){
               temp.append(morse[str[c]]);
           }
           ret_list.push_back(temp);
       }
        
       temp_list.push_back(ret_list[0]);
        
       for (int i=1; i<ret_list.size(); i++){
           flag = 0;
           for(int j=0; j<temp_list.size(); j++){
               if(ret_list[i]==temp_list[j]){
                   flag = 1;
               }
           }
           if(flag == 0){
               temp_list.push_back(ret_list[i]);
           }
       }
        
       return temp_list.size();
    }
};

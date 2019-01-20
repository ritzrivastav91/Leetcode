class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        std::vector<int> vect;
        int rev = 0, digit = 0;
        bool flag;
        
        for(int num = left; num <= right; num++){
            rev = 0;
            digit = num;
            flag = true;
            while(digit > 0){
                rev = digit % 10;
                if ( (rev == 0) || (num % rev != 0) )  flag = false;
                digit = digit / 10;
            }
            
            if(flag == true) vect.push_back(num);
        }
        return vect;
    }
};

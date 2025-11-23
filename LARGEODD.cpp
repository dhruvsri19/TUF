class Solution{	
public:		
    string largeOddNum(string& s){
        for (int i = s.size() - 1; i >= 0; i--) {
            if ((s[i] - '0') % 2 == 1) {
        
                int start = 0;
                while (start <= i && s[start] == '0')
                start++;
            return s.substr(start, i + 1 - start);
    }
}
return "";
    }
};
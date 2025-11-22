class Solution {	
public:		
    void reverseString(vector<char>& s) {
        int n = s.size();
        vector<char> dup_s(n);

        for (int i = 0; i < n; i++) {
            dup_s[n - i - 1] = s[i];
        }

        for (int i = 0; i < n; i++) {
            s[i] = dup_s[i];
        }
    }
};

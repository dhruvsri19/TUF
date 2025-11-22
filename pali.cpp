class Solution{	
	public:		
		bool palindromeCheck(string& s){
            string dups=s;
			int n = s.size();
        vector<char> dup_s(n);

        for (int i = 0; i < n; i++) {
            dup_s[n - i - 1] = s[i];
        }

        for (int i = 0; i < n; i++) {
            s[i] = dup_s[i];
        }
        if (s==dups) return true;
        return false;
		}
        ;
};
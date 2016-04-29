class Solution {
public:
    string reverseString(string s) {
        int len = s.length();
		
		if(len <= 1){
			return s;
		} else {
			int n = (len+1) / 2;
			char tmp;
			for(int i=0;i<n;++i){
				tmp = s[i];
				s[i] = s[len - i - 1];
				s[len - i - 1] = tmp;
			}

		}
		return s;
    }
};
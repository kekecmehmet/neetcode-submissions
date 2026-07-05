class Solution {
public:
    string encode(vector<string>& strs) {
        string ret;
        for(int i=0; i<strs.size(); i++){
            ret += to_string(strs[i].size()) + "?" + strs[i];
        }
        return ret;
    }

    vector<string> decode(string s) {
        vector<string> ret;
        int i = 0;
        while (i < s.size()) {
            int delimiter = s.find('?', i);
            int len = stoi(s.substr(i, delimiter - i));
            ret.push_back(s.substr(delimiter + 1, len));
            i = delimiter + 1 + len;
        }
        return ret;
    }
};
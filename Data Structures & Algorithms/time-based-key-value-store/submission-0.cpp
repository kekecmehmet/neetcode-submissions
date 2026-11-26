class TimeMap {
private:
    unordered_map<string, vector<pair<int, string>>> mp;

public:
    TimeMap() {
    }
    
    void set(string key, string value, int timestamp) {
        mp[key].push_back({timestamp, value});
    }
    
    string get(string key, int timestamp) {
        int l=0;
        int h=mp[key].size()-1;
        int m;
        while(l<=h){
            m = l + (h-l)/2;
            if(mp[key][m].first == timestamp) return mp[key][m].second;
            else if(mp[key][m].first < timestamp) l = m+1;
            else h = m-1;
        }
        if (h >= 0) return mp[key][h].second;
        else return "";
    }
};

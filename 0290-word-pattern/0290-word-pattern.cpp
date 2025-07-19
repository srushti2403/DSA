class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        stringstream ss(s);
        string word;
        while (ss >> word){     //'words' contains each word from s
            words.push_back(word);
        }
        //check if no. of pattern letters matches number of words
        if (pattern.size() != words.size()) return false;

        unordered_map<char, string> p2w;    //pattern --> word
        unordered_map<string, char> w2p;    //word --> pattern
        for (int i=0; i<pattern.size(); ++i){
            char c = pattern[i];
            string w = words[i];
            if (p2w.count(c) && p2w[c] != w) return false;
            if (w2p.count(w) && w2p[w] != c) return false;
            p2w[c] = w;
            w2p[w] = c;
        }
        return true;
    }
};
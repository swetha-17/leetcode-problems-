class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int n=sequence.size(), m=word.size();
        if(n<m) return 0;
        string repeated=word;
        int count=0;
        while(sequence.find(repeated)!=-1){
            count++;
            repeated+=word;
        }
        return count;
    }
};
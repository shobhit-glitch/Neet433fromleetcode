class Solution {
public:
    bool isAnagram(string s, string t) {
        bool b=true;
        if(s.length()!=t.length()){
            b=false;
            return b;
        }
        // for(int i=0;i<s.length();i++){
        //     for(int j=0;j<s.length();j++){
        //         if(s[i]==t[j]){

        //         }
        //     }
        // }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i=0;i<s.length();i++){
            if(s[i]!=t[i]){
                b=false;
                break;
            }
        }
        return b;


    }
};
class Solution {
public:
    string intToRoman(int num) {
        vector<pair<int,string>> char_finder = {{1000,"M"},{900,"CM"},{500,"D"},{400,"CD"},{100,"C"},{90,"XC"},{50,"L"},{40,"XL"},{10,"X"},{9,"IX"},{5,"V"},{4,"IV"},{1,"I"}};
        string ans="";
        for(int i=0;i<char_finder.size();i++){
         while(num>=char_finder[i].first){
            ans=ans+char_finder[i].second;
            num=num-char_finder[i].first;
         }
        }
        return ans;
    }
};
class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1 || s.size()<numRows){
            return s;
        }
        int direction=0,index=0;
        vector<string> Temp;
        for(int i=0;i<numRows;i++){
                Temp.push_back("");
        }
        for(int i=0;i<s.size();i++){
            Temp[index]=Temp[index]+s[i];
            if(direction==0){
                if(index==(numRows-1)){
                    index--;
                    direction=1;
                }else{
                    index++;
                }
            }else{
                if(index!=0){
                index--;
                }
                else{
                 direction=0;
                 index++;
                }
            }
        }
        string solution="";
        for(int i=0;i<Temp.size();i++){
            solution=solution+Temp[i];
        }
        return solution;
    }
};
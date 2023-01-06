/* Created By Rana Jay on 06-01-2023  18:46 
  problem -> https://leetcode.com/problems/bulls-and-cows/
  Concept -> hashing , int to string conversion , map(stl)  
*/

class Solution {
public:
    string getHint(string secret, string guess) {
        int x=0,y=0;
        unordered_map<char,int>rj;
        for(int i=0;i<secret.size();++i){
            if(secret[i]==guess[i]){
                secret[i]='-';
                x++;
            }
            else{
                rj[(guess[i])]++;
            }
        }

        for(int i=0;i<secret.size();++i){
            if(secret[i]!='-'){
                if(rj[(secret[i])]>0){
                    y++;
                    rj[(secret[i])]--;
                }
            }
        }

        string a=to_string(x)+"A"+to_string(y)+"B";
        return a;

    }
};

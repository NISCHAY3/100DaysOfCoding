question link-->https://leetcode.com/problems/permutation-in-string/description/class/
class Solution {
private:
    bool checkEqual(int a[26],int b[26]){
        for(int i=0;i<26;i++){
            if(a[i]!=b[i]){
                return 0;
            }
        }
        return 1;
    }
public:
    bool checkInclusion(string s1, string s2) {
        int count1[26]={0};


        for(int i=0;i<s1.length();i++){
            int index=s1[i]-'a';
            count1[index]++;
        }

        //travesing s2
        int i=0;
        int windowSize=s1.length();
        int count2[26]={0};

        while(i<windowSize && i<s2.length()){
            int index=s2[i]-'a';
            count2[index]++;
            i++;
        }

        if(checkEqual(count1,count2)){
            return 1;
        }

        //next window;

        while(i<s2.length()){
            char ch=s2[i];
            int index=ch-'a';
            count2[index]++;

            char oldchar=s2[i-windowSize];
            index= oldchar - 'a';
            count2[index]--;
            i++;

            if( checkEqual(count1,count2)){
                return 1;
            }
        }
        return 0;




    }
};
class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
       
        if(rotateArray.size()==0)return 0;
        if(rotateArray.size()==1)return rotateArray[0];
        int i=0;
        while(i+1<rotateArray.size()){
            if(rotateArray[i+1]<rotateArray[i])break;
            i++;
        }
        return rotateArray[i+1];
    }
};
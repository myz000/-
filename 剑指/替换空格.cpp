class Solution {
public:
	void replaceSpace(char *str,int length) {
        int count=0;
       for(int i=0;i<length;i++){
           if(str[i]==' '){
               count++;
           }
       }
        for(int i=length-1;i>=0;i--){
            if(str[i]==' '){
                str[i+count*2]='0';
                str[i+count*2-1]='2';
                str[i+count*2-2]='%';
                count--;
            }else{
                str[i+count*2]=str[i];
            }
        }
    }
};
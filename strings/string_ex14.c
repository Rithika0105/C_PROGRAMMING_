void midpoint(char *s,int left,int right,int *start,int *maxlen){
int n=strlen(s);
while(left>=0 && right<n && s[left]==s[right]){
    left--;
    right++;}
    int len=right-left-1;
    if(len>*maxlen){
        *start=left+1;
        *maxlen=len;
    }
}


char* longestPalindrome(char* s) {
    static char ans[10000000]="";
    int n=strlen(s);
    int start=0;
    int maxlen=1;
    for(int i=0;i<n;i++){
        midpoint(s,i,i,&start,&maxlen);
        midpoint(s,i,i+1,&start,&maxlen);
    }
    strncpy(ans,s+start,maxlen);
    ans[maxlen]='\0';
    return ans;
}
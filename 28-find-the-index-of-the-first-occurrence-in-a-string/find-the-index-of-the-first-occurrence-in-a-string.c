int strStr(char* haystack, char* needle) {
    int haystacklen = strlen(haystack);
    int needlelen= strlen(needle);
    if(needlelen==0){
        return 0;
    }
        for(int i=0;i<=haystacklen-needlelen;i++){
int j=0;
while(j<needlelen && haystack[i+j]==needle[j]){
    j++;

}
if(j==needlelen)
return i;
        }

    return -1;
}
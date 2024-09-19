class Solution {
    public boolean isPalindrome(int x) {
 
     String a = String.valueOf(x);
     int len= a.length();
     for(int i= 0; i<(len/2);i++){
        if(a.charAt(i)!=a.charAt(len-i-1))
            return false;
            
                 
                 
    }
        

     
     return true;
    }
}
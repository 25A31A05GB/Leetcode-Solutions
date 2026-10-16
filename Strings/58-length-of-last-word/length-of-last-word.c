int lengthOfLastWord(char* s) {
int l=0;
 int n=strlen(s);
 int i=n-1;
 while(i>=0 && s[i] == ' ')
 { i--;}
 for(;i>=0;i--){
    if(s[i] == ' ') {  break;
    }else  l++;
 }
 return l;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
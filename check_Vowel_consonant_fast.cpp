int isVowel(char ch)
{
    return (0x208222 >> (ch & 0x1f)) & 1;
}

if(isVowel(a)) // * return 1 
else return // * 0 

how to check consonant

if(!isVowel(c) && isalpha(c)) // * return 0  also have to check the characeter is  alphabatic or not
else return // * 1
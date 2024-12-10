include<stdio.h>

// Length of the string
int strlength(char *s){
    int i = 0;
    while(s[i] != '\0'){
        i++;
    }
    return i;
}

// Reverse the string
int strReverse(char *s){
    int i = 0, j = strlength(s) - 1;
    while(i < j){
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
}


//Pallindrome Check
int isPallindrome(char *s){
    int i = 0;
    int j = strlength(s) - 1;
    while(i < j){
        if(s[i] != s[j]){
            return 0;//False
        }
        i++;
        j--;
    }
    return 1;//True
}

//Count words in Paragraph
int countWords(char *s){
    int i = 0 , count  = 1;
    while(s[i]!='\0'){
        if(s[i] == ' ')
        count++;
        i++;
    }
    return count;
}

//LowerCase to UpperCase
void toUpperCase(char *s){
    int i=0;
    while(s[i]!='\0'){
        if(s[i]>='a'&&s[i]<='z'){
            s[i]-=32;
        }
        i++;
    }
}

//UpperCase to LowerCase
void toLowerCase(char *s){
    int i=0;
    while(s[i]!='\0'){
        if(s[i]>='A'&&s[i]<='Z'){
            s[i]+=32;
        }
        i++;
    }
}

// Compare two Strings
int compareStrings(char *s1, char *s2){
    int i = 0;
    while(s1[i] != '\0' && s2[i] != '\0'){
        if(s1[i] != s2[i]){
            return 0;
        }
        i++;
    }
    return 1;
}

//Concatenate two strings
void concatStrings(char *s1, char *s2){
    int i = 0,j = 0;
    while(s1[i]!='\0'){
        i++;
    }
    while(s2[j]!='\0'){
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';
}

int main(){
    char s[1000];
    printf("Enter the string: ");
    gets(s);
    printf("The length of the string: %d\n", strlength(s));
    strReverse(s);
    printf("The reversed string: %s\n", s);
    if(isPallindrome(s)) printf("The string is a pallindrome\n");
    else printf("The string is not a pallindrome\n");
    printf("The number of words in the string: %d\n", countWords(s));
    toUpperCase(s);
    printf("The string in uppercase: %s\n", s);
    toLowerCase(s);
    printf("The string in lowercase: %s\n", s);


    char s1[1000], s2[1000];
    printf("Enter the first string: ");
    gets(s1);
    printf("Enter the second string: ");
    gets(s2);
    if(compareStrings(s1, s2)) printf("The strings are equal\n");
    else printf("The strings are not equal\n");
    concatStrings(s1, s2);
    printf("The concatenated string: %s\n", s1);

    return 0;
}
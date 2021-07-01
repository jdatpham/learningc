#include <stdio.h>
int isreverse(char *word1, char *word2, int wordlen1, int wordlen2);
void reversearray(char *ptr1, int wordlen1);
int compare(char *word1, char *word2, int wordlen1);
int main(void){
    char word1[100];
    char word2[100];
    char word1_org[100];
    char *ptr1;
    char *ptr2;

    //1) Get the input
    scanf("%[^\n]%*c", word1);
    scanf("%[^\n]%*c", word2);
    int wordlen1 = 0;
    int wordlen2 = 0;

    // 2) Calculate the word length
    while(word1[wordlen1] != 0){
        wordlen1++;
    }
    
    while(word2[wordlen2] != 0){
        wordlen2++;
    }
    
    //3) Initialize the pointers
    ptr1 = word1;
    ptr2 = word2;
    
    //4) Save original word 1
    for(int i = 0; i < 100; i++){
        word1_org[i] = word1[i];
    }
    
    // 5) Call the function isreverse() to check if word1 is reverse of word2
    // return 0 if yes. 1 if no.
    int reversed = isreverse(ptr1, ptr2, wordlen1, wordlen2);
    if(reversed == 0){
        printf("%s is the reverse of %s\n", word1_org, word2);
    }
    else{
        printf("%s is not the reverse of %s\n", word1_org, word2);
    }

    
    return 0;
}

// check if word one is reverse of word 2
// return 0 if word one is reverse of word two
// return 1 if word one is not reverse of word two
// *word1: points to word 1
// *word2: points to word 2
// wordlen1: length of word one
// wordlen2: length of word two
int isreverse(char *word1, char *word2, int wordlen1, int wordlen2){
    // Check both have same length
     if(wordlen1 == wordlen2){  
        // flip word1
        reversearray(word1, wordlen1);

        // compare flip of word1 if it equals word2
        int cp = compare(word1, word2, wordlen1);

        if(cp == 0){
            return 0;
        }
    }
    return 1;
    //
}

//Reversesrray flips word one
// *ptr1: points to word one
// *ptr2: points to word two
void reversearray(char *ptr1, int wordlen1){
    char temp;
    for(int i = 0; i < wordlen1/2;i++){
        // temp saves ptr1 + wordlen1 - i - 1
        temp = *(ptr1 + wordlen1 - i - 1);        // temp = arr[n - i - 1]
        *(ptr1 + wordlen1 - i - 1) = *(ptr1 + i); // arr[n - i - 1] = arr[i]
        *(ptr1 + i) = temp;                       // arr[i] = temp
    }

}

// Compare *word1 and *word2
// return 1: if two words are not equal
//        0: if they are equal
// *word1: pointer to word 1
// *word2: points to word 2
// wordlen1: is the same length of both words
int compare(char *word1, char *word2, int wordlen1){
    for(int i=0; i<wordlen1; i++){
        if(*(word1+i)!=*(word2+i)){
            return 1;
        }
    }
    return 0;
}

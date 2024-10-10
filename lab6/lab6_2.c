#include <stdio.h>
#include <ctype.h>

int main(void){
    char s[100];
    int consonant = 0, vowel = 0;
    printf("write a sentence:\n");
    fgets(s, sizeof(s), stdin);

    
    for(int i = 0; s[i] != '\0'; i++){
        char l = tolower(s[i]);
        
        if(isalpha(l)){
            if (l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u'){
                vowel++;
            }
            else{
                consonant++;
            }
        }
    }
    printf("Amount of vowels: %d\n", vowel);
    printf("Amount of consonants: %d\n", consonant);

    return 0;
}

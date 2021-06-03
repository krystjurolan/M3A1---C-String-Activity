#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char sentence[100];
    int i = 0 , vowel = 0 , consonant = 0 , leng;

    printf("Input a Sentence: ");
    gets(sentence);

    leng = strlen(sentence);

    while(sentence[i] != '\0'){
        if( sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u' ){
            sentence[i] = sentence[i] - 32;
        }

        if ( sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u' || \
            sentence[i] == 'A' || sentence[i] == 'E' || sentence[i] == 'I' || sentence[i] == 'O' || sentence[i] == 'U' ){
            vowel++;
            }
        else if(sentence[i] >= 'a' && sentence[i] <= 'z'){
            consonant++;
        }
        i++;
    }

    printf("\nString converted: ");
    puts(sentence);

    printf("\nString Length: %d", leng);
    printf("\nVowels: %d", vowel);
    printf("\nConsonants: %d\n\n", consonant);


    return 0;
}

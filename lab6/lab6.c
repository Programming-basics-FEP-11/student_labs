#include <stdio.h>
#include <ctype.h>

int main() {
    // Task 1

 /*   char sentence[1000];
    int vowels = 0, consonants = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (int i = 0; sentence[i] != '\0'; ++i) {
        char ch = tolower(sentence[i]);
        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);*/



    // Task 2

    //int sum = 0, i = 1, journal_number = 8;

    //while (i <= 100) {
    //    if (i != journal_number && i != 33)
    //        sum += i;
    //    i++;
    //}

    //printf("Sum of numbers: %d\n", sum);




    // Task 3

     int N, i;
    float number, total_sum = 0, min, max;

    do {
        printf("Enter an integer N [7; 12]: ");
        scanf_s("%d", &N);
    } while (N < 7 || N > 12);

    printf("Enter %d real numbers:\n", N);

    for (i = 0; i < N; ++i) {
        scanf_s("%f", &number);
        total_sum += number;
        if (i == 0)
            min = max = number;
        else {
            if (number < min) min = number;
            if (number > max) max = number;
        }
    }

    printf("Sum: %.2f\n", total_sum);
    printf("Average: %.2f\n", total_sum / N);
    printf("Minimum: %.2f\n", min);
    printf("Maximum: %.2f\n", max);


   
}


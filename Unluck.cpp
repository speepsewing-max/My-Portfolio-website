#include <stdio.h>
int inputScore(int SDN) {
    int score;
    printf("Enter score for student %d: ", SDN);
    scanf("%d", &score);
    return score;
}
int main() {
    int total = 0;
    float average;

    for (int i = 1; i <= 5; i++) {
        total += inputScore(i);
    }

    average = total / 3.0;

    printf("\nTotal score: %d\n", total);
    printf("Average score: %.2f\n", average);

// ณัฐภัทร แสงศรี งานที่2
    return 0;
}
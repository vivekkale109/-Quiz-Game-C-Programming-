#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define TOTAL_QUESTIONS 5
#define TIME_LIMIT 10   // seconds per question

struct Question {
    char question[100];
    char optionA[50];
    char optionB[50];
    char optionC[50];
    char optionD[50];
    char correct;  // A, B, C, or D
};

int main() {

    struct Question quiz[TOTAL_QUESTIONS] = {
        {"What is the capital of India?",
         "A) Mumbai", "B) Delhi", "C) Kolkata", "D) Chennai", 'B'},

        {"Which language is used for system programming?",
         "A) Python", "B) Java", "C) C", "D) HTML", 'C'},

        {"Who invented C language?",
         "A) Dennis Ritchie", "B) James Gosling", "C) Bjarne Stroustrup", "D) Guido van Rossum", 'A'},

        {"What is 10 + 20?",
         "A) 10", "B) 20", "C) 30", "D) 40", 'C'},

        {"Which is an operating system?",
         "A) Linux", "B) Chrome", "C) CPU", "D) RAM", 'A'}
    };

    int score = 0;
    char answer;
    time_t start, end;

    printf("===== QUIZ GAME =====\n");
    printf("You have %d seconds for each question.\n\n", TIME_LIMIT);

    for (int i = 0; i < TOTAL_QUESTIONS; i++) {

        printf("Question %d: %s\n", i + 1, quiz[i].question);
        printf("%s\n%s\n%s\n%s\n",
               quiz[i].optionA,
               quiz[i].optionB,
               quiz[i].optionC,
               quiz[i].optionD);

        start = time(NULL);

        printf("Enter your answer (A/B/C/D): ");
        scanf(" %c", &answer);

        end = time(NULL);

        if (difftime(end, start) > TIME_LIMIT) {
            printf("⏰ Time's up! No points.\n\n");
            continue;
        }

        if (answer == quiz[i].correct) {
            printf("Correct!\n\n");
            score += 10;
        } else {
            printf("Wrong! Correct answer: %c\n\n", quiz[i].correct);
        }
    }

    printf("===== QUIZ FINISHED =====\n");
    printf("Your Final Score: %d / %d\n", score, TOTAL_QUESTIONS * 10);

    if (score >= 40)
        printf("Excellent Performance!\n");
    else if (score >= 20)
        printf("Good Job!\n");
    else
        printf("Better Luck Next Time!\n");

    return 0;
}
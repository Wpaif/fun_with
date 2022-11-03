#include <stdio.h>
#include <stdlib.h>

typedef enum answer answer;
enum answer { a, b, c, d };

typedef struct question question;
struct question {
  answer answer;
};

typedef struct exam exam;
struct exam {
  question question[2];
};

enum status { aproved, reproved };
typedef enum status status;

typedef struct student student;
struct student {
  exam test;
  char name[30];
  float final_note;
  status status;
};

int main() {
  exam template;
  student student_list[2];

  printf("------- EXAM -------\n");
  for (int i = 0; i < 2; i++) {
    printf("Response of question %d: ", i + 1);
    scanf("%d", &template.question[i].answer);
    setbuf(stdin, NULL);
  }

  printf("\nGABARITO:\n");
  for (int i = 0; i < 2; i++)
    printf("Q%d: %d\n", i + 1, template.question[i].answer);

  printf("\n\n");

  for (int i = 0; i < 2; i++) {
    printf("------- Students Test -------\n");
    float average = 0;
    printf("Name: ");
    setbuf(stdin, NULL);
    scanf("%s", student_list[i].name);

    for (int j = 0; j < 2; j++) {
      printf("Q1: ");
      setbuf(stdin, NULL);
      scanf("%d", &student_list[i].test.question[j].answer);

      if (student_list[i].test.question[j].answer ==
          template.question[j].answer)
        average += 0.5;
    }

    student_list[i].final_note = average;
    if (student_list[i].final_note >= 7.0)
      student_list[i].status = aproved;
    else
      student_list[i].status = reproved;

    system("clear");
  }

  printf("Resultado:\n");
  for (int i = 0; i < 2; i++)
    printf("%s: %.1f\n", student_list[i].name, student_list[i].final_note);
}
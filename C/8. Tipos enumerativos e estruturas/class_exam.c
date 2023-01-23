#include <stdio.h>
#include <stdlib.h>

#define num_questions 20
#define num_students 30

typedef enum answer answer;
enum answer { a, b, c, d };

typedef struct question question;
struct question {
  answer answer;
};

typedef struct exam exam;
struct exam {
  question question[num_questions];
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
  student student_list[2], aux;

  printf("------- EXAM -------\n");
  for (int i = 0; i < num_questions; i++) {
    printf("Response of question %d: ", i + 1);
    scanf("%d", &template.question[i].answer);
    setbuf(stdin, NULL);
  }

  printf("\nGABARITO:\n");
  for (int i = 0; i < num_questions; i++)
    printf("Q%d: %d\n", i + 1, template.question[i].answer);

  printf("\n\n");
  system("clear");

  for (int i = 0; i < num_students; i++) {
    printf("------- Students Test -------\n");
    float average = 0;
    printf("Name: ");
    setbuf(stdin, NULL);
    scanf("%s", student_list[i].name);

    for (int j = 0; j < num_questions; j++) {
      printf("Q%d: ", j + 1);
      setbuf(stdin, NULL);
      scanf("%d", &student_list[i].test.question[j].answer);

      if (student_list[i].test.question[j].answer ==
          template.question[j].answer)
        average++;
    }

    student_list[i].final_note = average;
    if (student_list[i].final_note >= num_questions * 0.7)
      student_list[i].status = aproved;
    else
      student_list[i].status = reproved;

    system("clear");
  }

  for (int i = 0; i < num_students; i++)
    for (int j = 0; j < num_students - 1; j++)
      if (student_list[j].final_note < student_list[j + 1].final_note) {
        aux = student_list[j];
        student_list[j] = student_list[j + 1];
        student_list[j + 1] = aux;
      }

  printf("Resultado:\n-------------------------------\n");
  for (int i = 0; i < num_students; i++)
    if (!student_list[i].status)
      printf("|%2dº %8s: %4.1f  %6s\n", i + 1, student_list[i].name,
             student_list[i].final_note, "Aproved  |");
    else
      printf("|%2dº %8s: %4.1f  %6s\n", i + 1, student_list[i].name,
             student_list[i].final_note, "Reproved |");
  printf("-------------------------------\n");
}
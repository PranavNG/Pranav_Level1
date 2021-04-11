// Activity 11
#include <stdio.h>

typedef struct studentdet {
    char stud_name[100];
    int scores[100];
    float average;
    char grade;
}s;

typedef struct gradeBook {
    char sub_name[100];
    int no_scores, no_students;
    float weightage[100];
    s student[100];
}Gradebook;

s input_one_student(int no_scores)
{
    s stu;

    scanf("%s", &stu.stud_name);

    for (int i = 0; i < no_scores; i++)
        scanf("%d", &stu.scores[i]);

    return stu;
}

Gradebook input_one_gradebook()
{
    Gradebook sub;

    scanf("%s", &sub.sub_name);
    scanf("%d %d", &sub.no_students, &sub.no_scores);

    for (int i = 0; i < sub.no_scores; i++)
        scanf("%f", &sub.weightage[i]);

    for (int i = 0; i < sub.no_students; i++)
        sub.student[i] = input_one_student(sub.no_scores);

    return sub;
}

void input_n_gradebooks(int n, Gradebook gb[])
{
    for (int i = 0; i < n; i++)
        gb[i] = input_one_gradebook();
}

char compute_grade(s stu)
{
    if (stu.average >= 0 && stu.average < 60)
        stu.grade = 'F';
    else if (stu.average >= 60 && stu.average < 70)
        stu.grade = 'D';
    else if (stu.average >= 70 && stu.average < 80)
        stu.grade = 'C';
    else if (stu.average >= 80 && stu.average < 90)
        stu.grade = 'B';
    else
        stu.grade = 'A';

    return stu.grade;
}

void compute_one_gradebook(Gradebook *agb)
{
    float sum = 0, weightSum = 0;

    for (int i = 0; i < agb->no_scores; i++)
        weightSum += agb->weightage[i];

    for (int i = 0; i < agb->no_students; i++)
    {
        sum = 0;

        for (int j = 0; j < agb->no_scores; j++)
            sum += agb->student[i].scores[j] * agb->weightage[j];

        agb->student[i].average = sum / weightSum;
        agb->student[i].grade = compute_grade(agb->student[i]);
    }
}

void compute_n_gradebooks(int n, Gradebook gb[n])
{
    for (int i = 0; i < n; i++)
        compute_one_gradebook(&gb[i]);
}

void print_one_student(s stu)
{
    printf("%s %.2f %c\n", stu.stud_name, stu.average, stu.grade);
}

void print_n_student(int n, Gradebook gb[n])
{
    for (int i = 0; i < n; i++)
    {
        printf("%s", gb[i].sub_name);

        for (int j = 0; j < gb[i].no_students; j++)
            print_one_student(gb[i].student[j]);
    }
}

int main()
{
    int n;

    scanf("%d", &n);

    Gradebook gb[n];

    input_n_gradebooks(n, gb);
    compute_n_gradebooks(n, gb);
    print_n_student(n, gb);

    return 0;
}

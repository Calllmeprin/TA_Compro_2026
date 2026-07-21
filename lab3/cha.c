#include <stdio.h>

int main()
{
    float calculus, physic, compro;
    char cal_grade, phy_grade, com_grade;
    float cal_num, phy_num, com_num;
    float gpa;

    printf("Calculus score: ");
    scanf("%f", &calculus);

    printf("Physic score: ");
    scanf("%f", &physic);

    printf("compro score: ");
    scanf("%f", &compro);

    /* --- Calculus grade --- */
    if (calculus >= 80)
    {
        cal_grade = 'A';
        cal_num = 4.0;
    }
    else if (calculus >= 70)
    {
        cal_grade = 'B';
        cal_num = 3.0;
    }
    else if (calculus >= 60)
    {
        cal_grade = 'C';
        cal_num = 2.0;
    }
    else if (calculus >= 50)
    {
        cal_grade = 'D';
        cal_num = 1.0;
    }
    else
    {
        cal_grade = 'F';
        cal_num = 0.0;
    }

    /* --- Physic grade --- */
    if (physic >= 80)
    {
        phy_grade = 'A';
        phy_num = 4.0;
    }
    else if (physic >= 70)
    {
        phy_grade = 'B';
        phy_num = 3.0;
    }
    else if (physic >= 60)
    {
        phy_grade = 'C';
        phy_num = 2.0;
    }
    else if (physic >= 50)
    {
        phy_grade = 'D';
        phy_num = 1.0;
    }
    else
    {
        phy_grade = 'F';
        phy_num = 0.0;
    }

    /* --- Compro grade --- */
    if (compro >= 80)
    {
        com_grade = 'A';
        com_num = 4.0;
    }
    else if (compro >= 70)
    {
        com_grade = 'B';
        com_num = 3.0;
    }
    else if (compro >= 60)
    {
        com_grade = 'C';
        com_num = 2.0;
    }
    else if (compro >= 50)
    {
        com_grade = 'D';
        com_num = 1.0;
    }
    else
    {
        com_grade = 'F';
        com_num = 0.0;
    }

    gpa = (cal_num + phy_num + com_num) / 3;

    printf("\n");
    printf("%-10s%-10s%-10s%-10s\n", "Subject", "Score", "Grade", "Grade");
    printf("--------------------------------------\n");
    printf("%-10s%-10.0f%-10c%-10.1f\n", "Cal", calculus, cal_grade, cal_num);
    printf("%-10s%-10.0f%-10c%-10.1f\n", "Physics", physic, phy_grade, phy_num);
    printf("%-10s%-10.0f%-10c%-10.1f\n", "compro", compro, com_grade, com_num);
    printf("\nGPA: %.1f\n", gpa);

    return 0;
}
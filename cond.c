#include <stdio.h>
#include <stdbool.h>

char examen();

void main () {
    char grade = examen();
    printf("Your grade is: %c.\n", grade);
//     if (0) {  // 0 is considered false in C
//         printf("This is true\n");
//     }
//     else {
//         printf("This is false\n"); 
//     }
}

char examen () {
    float exam;
    char grade;
    bool pass = false;

    printf("How well did you do on the exam?\n");
    scanf("%f", &exam);
    if ((exam >= 90.) && (exam <= 100.)){  
        grade = 'A'; // characters - u se single quotes
        pass = true;
    }
    else if (exam >= 80.) {
        grade = 'B';
        pass = true;
    }
    else {
        grade = 'F';

    }

    switch (grade) {
        case 'A':
            printf("very good\n");
            break;
        case 'B':
            printf("okay\n");
            break;
        default:
            printf("bad\n");
            
    }

    if (pass) {
        printf("You passed the course!\n");
    }
    return grade;
}
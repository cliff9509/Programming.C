// Program to grade students marks
#include <stdio.h>

int main() {
int marks;

printf("marks: ");
scanf("%d", &marks);

if(marks>=70 &&marks<=100){
    printf("grade:A");
}else if(marks>=60 &&marks<=69){
    printf("grade:B");
}else if(marks>=50 &&marks<=59){
    printf("grade:C");
}else if(marks>=40 &&marks<=49){
    printf("grade:D");
}else if(marks>=0 &&marks<=39){
    printf("grade:F");
}else if (marks>100||marks<0){
	printf("MARKS INVALID");
}

    return 0;
}
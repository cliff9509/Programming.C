// program to calculate net pay grosspay and tax
#include <stdio.h>

int main() {
    int h,w,n,o;
    float t,g;
    printf("Enter number of hours worked in a week: ");
    scanf("%d", &h);
    
printf("Enter hourly wage: ");
scanf("%d", &w);

if (h<=40) g=h*w;else(h>40); g=40*w+(h-40)*w*1.5;
printf("The gross pay is %.2f$\n", g);


if (g<=600) t=0.15*g; else(g>600); t=90+(g-600)*0.2;
printf("The tax is %.2f$\n", t);

n=g-t;
printf("The net pay is %d$", n);



    return 0;
}

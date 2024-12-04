// Program to calculate the volume of a cylinder
#include <stdio.h>

int main() {
    int radius;
    int height;
    float area;
    float volume;
    
    printf("Enter radius:");
    scanf("%d", &radius);
    
      printf("Enter height:");
    scanf("%d", &height);
    
    area=radius*3.142;
    
    volume=area*height;
printf("volume=%f", volume);
    return 0;
}
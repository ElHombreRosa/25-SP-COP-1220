#include <stdio.h>

const char* hurricane_category(double wind_speed){
    if (wind_speed >= 157) {
        return "Category Five Hurricane";
    } else if (wind_speed >= 130) {
        return "Category Four Hurricane";
    } else if (wind_speed >= 111) {
        return "Category Three Hurricane";
    } else if (wind_speed >= 96) {
        return "Category Two Hurricane";
    } else if (wind_speed >= 74) {
        return "Category One Hurricane";
    } else {
        return "Not a Hurricane";
    }
}  // if else for different categories of hurricane

int main(void){
    double wind_speed;

    scanf("%lf", &wind_speed); // input from user of hurricane mph

    printf("%s\n", hurricane_category(wind_speed));
    // input hurricane mph into hurricane_category, print result

    return 0; 
}
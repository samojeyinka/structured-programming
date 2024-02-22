 #include <stdio.h>
 #include <stdlib.h>

//Memory address

// When a variable is created,it locally stored on the RAM - Random Access Memory
int main(){
     int age = 46;
    double gpa = 3.3;
     char grade = "A";

     printf("%p", &age);
    return 0;
}
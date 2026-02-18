//character arrays and pointers
#include <stdio.h>
#include <string.h>

void print(const char *C){ //if we put const then cannot change

  //C[0] = 'A';//we can change 
    int i = 0;
    while(C[i] != '\0'){     //C[i] ---> *(C+i)
        printf("%c",C[i]);
        i++;   //C++
    }

    printf("\n");

}


int main(){

    char C[20] = "Hello"; //string get stored in the space for array
//  char *C = "Hello"; //string gets stored as compile time constant in the ext partion in application memory
//  C[0] = 'A'; //this will give a compilation error
//  printf("Hello World"); //same this also get stored in the text partition
    print(C);
}
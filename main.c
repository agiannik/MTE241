/****************************************************************//TYPEDEF/STRUCTS#include <stdio.h>
typedef struct{    
  int a;    
  unsigned int b;    
  char c;
}my_type_t;

int main(){    
  my_type_t foo;
  
  foo.a = 2;
  foo.b = 4;
  foo.c = 'a';
  
  printf("My Struct contains: a=%d \t b=%d \t c=%c\n", foo.a, foo.b, foo.c);
  
  return 0;
}
*********************************************************************/

/****************************************************************//POINTERS
#include <stdio.h>
int main(){    printf("Hello, World!\n");
  int  var = 20;   // actual variable declaration    int  *ip;        // pointer variable declaration 
   ip = &var;  // store address of var in pointer variable
   printf("Address of var variable: %x\n", &var  );
   // address stored in pointer variable    printf("Address stored in ip variable: %x\n", ip );
   // access the value using the pointer    printf("Value of *ip variable: %d\n", *ip );
    return 0;}*********************************************************************/
/****************************************************************//POINTERS (pass by value)#include <stdio.h>
typedef struct big_struct{    long a;    int b[256];};
void func_a (struct big_struct C){    int temp = C.b[2];    printf("Func A: %x\n", temp);    }
void func_b (struct big_struct *C){    int temp = C->b[2];    printf("Func B: %x\n", temp); }
int main(){    struct big_struct my_struct;        my_struct.b[2] = 10;            //TODO: How do we specify the arguments for    //each of our functions?    func_a (????);        func_b (????);    
    return 0;}*********************************************************************/


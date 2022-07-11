4.Realize a function which has 2 arguments and 1 return value. Argument 1 is Byte value, Argument 2 is bit position.
 Function has to flip the bit position (as per argument 2) in argument 1 byte value and return complete byte value.

#include <stdio.h>
int fun(int fun1,int fun2){
    fun1=fun1^(2<<fun2);
    return fun1;
}
int main(){
    printf("%x",fun(0x85,2));
}

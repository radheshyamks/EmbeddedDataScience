#include <stdint.h>
#include <stdint.h>
tyrpedef struct{
    uint32_t U;
    union Bits
    {
        /* data */
        uint32_t x;
        uint8_t y;
    }B;
    
}GenPIoPin;
typedef void(*FptrType)(GenPIoPin,uint32_t);
void(*funPtr)(void);
static void fun(void){
    // statement 1
    // statement 2
    // statement 3
    return;
}

int main(){
    funPtr = fun;
    return 0;
}

void fun3(){
    uint32_t offset_du32;
    uint32_t var_du32;
    int16_t var1_d16;
    int16_t var2_d16;
    uint32_t remain=1;

    var2_d16 =var1_d16 +(int16_t) (var_du32*offset_du32);
    // CBA --> Coverage By Analysis
    if((var2_d16/remain) <=32768){
        // statement 1
        // statement 2
        // statement 3
        // statement 4
    }
}
#define __MACRO__ 1
void main_fun(void){
    fun_4();
    fun_5();
}
static void fun_5(void){
    #if __MACRO__==0
    // statement 1
    // statement 2
    // statement 3
    // statement 4
    // statement 5 
    #endif
}
void fun_4(void){
    if(fun_6()==0){
        //statement
    }else{
        // statement 2
    }
}
int fun_6(void){
    return 0;
}
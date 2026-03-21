#include <iostream>
#include <cstdint>

class PreInc{
    private:
        uint32_t m_data;
    public:
        PreInc()=default;
        explicit PreInc(uint32_t data): m_data{data}{}
        virtual ~PreInc(){}
        /* increment operator overloading */
        PreInc& operator++(void){
            // PreInc temp;
            // this->m_data = ++(other.m_data);
            ++(this->m_data);
            // return *this;
        }
        PreInc operator++(int){
            PreInc temp;
            temp = *this;
            ++m_data;
            return temp;
        }
        void update(uint32_t x){
            this->m_data = x;
        }
        void print(void)const{
            std::cout<<"m_data: "<<this->m_data<<"\n";
        }
};

int main(int argc, char* argv[], char** env){
    PreInc obj1(1), obj2(2), obj3(3);
    obj1.print();
    obj2.print();
    obj3.print();
    /* ----------- */
    obj1.operator++(); /* pre-increment ++obj1*/
    obj1.print();
    obj3 = obj2.operator++(0); /* post increment obj2++*/ 
    obj3.print();
    obj2.print();
    return EXIT_SUCCESS;
}
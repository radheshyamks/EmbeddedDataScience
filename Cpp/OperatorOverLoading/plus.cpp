#include <iostream>
#include <cstdint>
class PlusOperOverLoad{
    private:
        uint32_t x_data;
        uint32_t y_data;
    public:
        PlusOperOverLoad()=default;
        explicit PlusOperOverLoad(uint32_t x, uint32_t y):x_data{x}, y_data{y}{}
        virtual ~PlusOperOverLoad(){}
        /* Copy constructor */
        PlusOperOverLoad(PlusOperOverLoad& obj){
            this->x_data = obj.x_data;
            this->y_data = obj.y_data;
        }
        /* Overloading Plus Operator */
        PlusOperOverLoad operator+(PlusOperOverLoad& other){
            PlusOperOverLoad temp;
            temp.x_data = this->x_data + other.x_data;
            temp.y_data = this->y_data + other.y_data;
            return temp;
        }

        void UpdateData(uint32_t x=0, uint32_t y=0){
            this->x_data = x;
            this->y_data = y;
        }
        void print_data(void){
            std::cout<<"x_data: "<<this->x_data<<"\n";
            std::cout<<"y_data: "<<this->y_data<<"\n";
        }
};
using plusOverld = PlusOperOverLoad;
int main(int argc, char* argv[], char** env){
    plusOverld obj1(10,20),obj2(30,40), obj3;
    //obj3 = obj1.operator+(obj2); /* this is correct and below statement is also correct */
    obj3 = obj1+obj2;
    obj3.print_data();
    return EXIT_SUCCESS;
}
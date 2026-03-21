#include <iostream>
#include <cstdint>

class IOstream{
    private:
        uint32_t m_data;
    public:
        IOstream()=default;
        IOstream(uint32_t x):m_data{x}{}
        ~IOstream(){}
        uint32_t getData(void)const{
            return this->m_data;
        }
        friend std::ostream& operator<<(std::ostream& os, const IOstream& obj);
        friend std::istream& operator>>(std::istream& is, IOstream& obj);
};

std::ostream& operator<<(std::ostream& os, IOstream& obj){
    os<<"m_data: "<<obj.getData()<<"\n";
    return os;
}

std::istream& operator>>(std::istream& is, IOstream& obj){
    is>>obj.m_data;
    return is;
}

int main(int argc, char* argv[], char** env){
    IOstream obj(100);
    // std::cin>>obj;/* this will also work */
    operator>>(std::cin, obj);
    // std::cout<<obj;/* this will also work */
    operator<<(std::cout, obj);
    return EXIT_SUCCESS;
}
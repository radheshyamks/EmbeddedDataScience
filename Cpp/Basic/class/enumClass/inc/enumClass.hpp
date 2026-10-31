/**
 * @file enumClass.hpp
 * @brief this ColorEnum is implemeted to compare two different enum class color
 * @author Radheshyam
 * @date 31-Oct-2026
 */
#ifndef _ENUM_CLASS_
#define _ENUM_CLASS_
namespace ColorEnum{
    enum class Coulor1{
        RED=1,
        BLUE=2,
        GREEN=3,
        WHITE=4,
    };
    enum class Coulor2{
        YELLOW=1,
        ORANGE=3,
        BLACK=4,
        CYAN=2,
    };
    class Color{
        private:
            Coulor1 C;
            Coulor2 S;
        public:
            Color();
            ~Color();
            void print(void)const;
            void color_match(void)const;
            void update_color1(Coulor1 c);
            void update_color2(Coulor2 s);
            template<typename T>
            T get_color1(void)const{
                return this->C;
            }
            template<typename T>
            T get_color2(void)const{
                return this->S;
            }
    };
    extern Color Color_s;
}
#endif /* _ENUM_CLASS_*/
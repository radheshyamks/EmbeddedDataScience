/**
 * @file templateClass.hpp
 * @brief A simple template class that holds a value of type T and provides basic operations.
 * @author Radheshyam
 * @date 24-Oct-2026
 */
#if !defined(__TEMPLATE_CLASS_HPP__)
#define __TMP_CLASS_HPP__
#include <iostream>
#include <utility>
#include <type_traits>
#include <cstdint>
namespace TemplateClass{
    template <typename T>
    class TmpClass{
        private:
            T m_value;
        public:
            /**
             * parameterized constructor with value of type T
             */
            TmpClass(T value);
            /**
             * copy constructor
             */
            TmpClass(const TmpClass<T>& other);
            /**
             * Move constructor
             */
            TmpClass(TmpClass<T>&& other) noexcept;
            /**
             * assignment operator
             */
            TmpClass<T>& operator=(const TmpClass<T>& other);
            /**
             * move assignment operator
             */
            TmpClass<T>& operator=(TmpClass<T>&& other) noexcept;
            /**
             * destructor
             */
            ~TmpClass();
            /**
             * getter for m_value
             */
            T get_value() const;
            /**
             * setter for m_value
             */
            void set_value(T value);
    };
}
#endif /* __TEMPLATE_CLASS_HPP__*/
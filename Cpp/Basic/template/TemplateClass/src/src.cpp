#include <iostream> 
#include "templateClass.hpp"
namespace TemplateClass{
    /**
     * defining TempClass constructor with value of type T
     */
    template <typename T>
    TmpClass<T>::TmpClass(T value) : m_value(value) {
        std::cout<<"TmpClass constructor called with value: " << m_value << std::endl;
    }
    /**
     * defining TempClass copy constructor
     */
    template <typename T>
    TmpClass<T>::TmpClass(const TmpClass<T>& other) : m_value(other.m_value) {
        std::cout<<"TmpClass copy constructor called with value: " << m_value << std::endl;
    }
    /**
     * defining TempClass move constructor
     */
    template <typename T>
    TmpClass<T>::TmpClass(TmpClass<T>&& other) noexcept : m_value(std::move(other.m_value)) {
        std::cout<<"TmpClass move constructor called with value: " << m_value << std::endl;
    }
    /**
     * defining TempClass assignment operator
     */
    template <typename T>
    TmpClass<T>& TmpClass<T>::operator=(const TmpClass<T>& other) {
        if (this != &other) {
            m_value = other.m_value;
            std::cout<<"TmpClass assignment operator called with value: " << m_value << std::endl;
        }
        return *this;
    }
    /**
     * defining TempClass move assignment operator
     */
    template <typename T>
    TmpClass<T>& TmpClass<T>::operator=(TmpClass<T>&& other) noexcept {
        if (this != &other) {
            m_value = std::move(other.m_value);
            std::cout<<"TmpClass move assignment operator called with value: " << m_value << std::endl;
        }
        return *this;
    }
}
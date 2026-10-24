/**
 * @file src.cpp
 * @brief This file contains the implementation of the template class TmpClass.
 * @author Radheshyam
 * @date 24-Oct-2026
 */
#include <iostream> 
#include "templateClass.hpp"
#include "types.hpp"
namespace TemplateClass{
    /**
     * defining TempClass constructor with value of type T
     */
    template <typename T>
    TmpClass<T>::TmpClass(T value) : m_value(value) {
        // std::cout<<"TmpClass constructor called with value: " << m_value << std::endl;
    }
    /**
     * defining TempClass copy constructor
     */
    template <typename T>
    TmpClass<T>::TmpClass(const TmpClass<T>& other) : m_value(other.m_value) {
        // std::cout<<"TmpClass copy constructor called with value: " << m_value << std::endl;
    }
    /**
     * defining TempClass move constructor
     */
    template <typename T>
    TmpClass<T>::TmpClass(TmpClass<T>&& other) noexcept : m_value(std::move(other.m_value)) {
        // std::cout<<"TmpClass move constructor called with value: " << m_value << std::endl;
    }
    /**
     * defining TempClass assignment operator
     */
    template <typename T>
    TmpClass<T>& TmpClass<T>::operator=(const TmpClass<T>& other) {
        if (this != &other) {
            m_value = other.m_value;
            // std::cout<<"TmpClass assignment operator called with value: " << m_value << std::endl;
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
            // std::cout<<"TmpClass move assignment operator called with value: " << m_value << std::endl;
        }
        return *this;
    }
    template <typename T>
    T TmpClass<T>::get_value() const {
        return m_value;
    }
    template <typename T>
    void TmpClass<T>::set_value(T value) {
        // typeid(value).name(); // just to use typeid and avoid unused variable warning
        m_value = value;
    }
    /**
     * destructor for TmpClass
     */
    template <typename T>
    TmpClass<T>::~TmpClass() {
        std::cout<<"TmpClass destructor called" << std::endl;
    }
}
/**
 * if it will not instantiate here it will throw error "undefined reference to `TemplateClass::TmpClass<unsigned short>::TmpClass(unsigned short)'"
 * or put all the template class implementation in header file
 */
template class TemplateClass::TmpClass<uint16_t>;
template class TemplateClass::TmpClass<uint32_t>;
template class TemplateClass::TmpClass<float32_t>;
template class TemplateClass::TmpClass<float64_t>;
template class TemplateClass::TmpClass<std::string>;
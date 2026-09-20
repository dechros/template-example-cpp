/**
 * @file normalClass.cpp
 * @author Halit Cetin (halitcetin@live.com)
 * @brief Normal class file
 * @version 0.1
 * @date 04-12-2022
 *
 * @copyright Copyright (c) 2022
 */

#include "normalClass.h"

normalClass::normalClass()
{
}

normalClass::~normalClass()
{
}

template <typename T>
T normalClass::templateFunction(T exampleVal)
{
    return exampleVal;
}

template int normalClass::templateFunction<int>(int);
template const char *normalClass::templateFunction<const char *>(const char *);

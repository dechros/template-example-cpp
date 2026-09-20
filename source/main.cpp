/**
 * @file main.cpp
 * @author Halit Cetin (halitcetin@live.com)
 * @brief Template example project
 * @version 0.1
 * @date 04-12-2022
 *
 * @copyright Copyright (c) 2022
 */

#include <iostream>
#include "templateClass.h"
#include "normalClass.h"

int main(void)
{
    normalClass normalClassInstance;
    std::cout << normalClassInstance.templateFunction<int>(3) << std::endl;
    std::cout << normalClassInstance.templateFunction<const char *>("hello world first") << std::endl;

    templateClass<int> templateClassInstance;
    templateClass<const char *> templateClassInstanceTwo;
    std::cout << templateClassInstance.normalFunction(5) << std::endl;
    std::cout << templateClassInstanceTwo.normalFunction("hello world second") << std::endl;
    return 0;
}

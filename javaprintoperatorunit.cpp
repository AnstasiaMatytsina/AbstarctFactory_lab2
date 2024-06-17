#include "javaprintoperatorunit.h"

JavaPrintOperatorUnit::JavaPrintOperatorUnit()
{

}

std::string JavaPrintOperatorUnit::compile(unsigned int level) const{ // генерация на языке Java вывода в консоль нужного текста
    return generateShift(level) + "System.out.println( \"" + _text + "\" );\n";
}

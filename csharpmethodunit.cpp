#include "csharpmethodunit.h"

std::string CSharpMethodUnit::compile(const unsigned int level) const{
    std::string result = "";
    if (_flags & STATIC)                        // если бит флага установлен на STATIC,
        result += "static ";                    // то метод статичный
    else if (_flags & VIRTUAL)                  // иначе, если бит VIRTUAL,
        result += "virtual ";                   // то метод виртуальный
    result += _returnType + ' ' + _name + "()"; // добавляем возвращаемый тип и имя метода
    result += " {\n";                           // открытая скобка определения метода
    for (const auto& it : _body)                // производим генерацию тела метода с нужными отступами
        result += it->compile(level + 1);
    result += generateShift(level) + "}\n";     // закрытая скобка метода
    return result;                              // возвращаем результат
}

#include "javamethodunit.h"

JavaMethodUnit::JavaMethodUnit()
{

}

std::string JavaMethodUnit::compile(const unsigned int level) const{
    std::string result = "";

    if (_flags & STATIC) // если бит флага установлен на STATIC,то метод статичный
        result += "static ";
    else if (_flags & FINAL)// final предотвращает метод от изменений в подклассе
        result += "final ";
    else if (_flags & ABSTRACT)// Методы abstract никогда не могут быть final
        result += "abstract ";
    else if (flags & SYNCHRONIZED)
            result += "synchronized ";
    else if (flags & VOLATILE)
            result += "volatile ";
    result += _returnType + ' ' + _name + "()";// добавляем возвращаемый тип и имя метода

    result += " {\n"; // скобка метода

    for (const auto& it : _body) // производим генерацию тела метода с нужными отступами
        result += it->compile(level + 1);

    result += generateShift(level) + "}\n";// закрытая скобка метода
    return result; // возвращаем результат
}

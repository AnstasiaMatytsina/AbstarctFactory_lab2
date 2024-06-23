#include "javaclassunit.h"

std::string JavaClassUnit::compile(unsigned int level) const{
    std::string result = generateShift(level) + "class " + _name + " {\n";  // производим генерацию класса
    for( size_t i = 0; i < ACCESS_MODIFIERS.size(); ++i ){                  // проходимся по всем полям модификаторов
        if (_fields[i].empty()) // если в поле модификатора нет юнитов,то переходим на следующую итерацию
            continue;
        for (const auto& it : _fields[i])// проходимся по всем юнитам в поле модификатора
            result += generateShift(level+1) + ACCESS_MODIFIERS[i] + " " + it -> compile(level+1);// и генерируем можификаторы и юниты
        result += '\n';// добавляем
    }
    result += generateShift(level) + "};\n";// добавляем нужные отступы
    return result;// возвращаем результат
}


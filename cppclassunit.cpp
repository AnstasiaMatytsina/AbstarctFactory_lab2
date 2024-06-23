#include "cppclassunit.h"

std::string CppClassUnit::compile(unsigned int level) const{
    std::string result = generateShift(level) + "class " + _name + " {\n";  // производим генерацию класса
        for( size_t i = 0; i < ACCESS_MODIFIERS.size(); ++i ){              // проходимся по всем полям модификаторов
            if (_fields[i].empty())                                         // если в поле модификатора нет юнитов,
            continue;                                                       // то переходим на следующую итерацию
            result += ACCESS_MODIFIERS[i] + ":\n";                          // иначе добавляем к result имя модификатора
        for (const auto& it : _fields[i])                                   // проходимся по всем юнитам в поле модификатора
            result += it->compile(level + 1);                               // и генерируем юниты, потом добавляем их
            result += '\n';
        }
    result += generateShift(level) + "};\n";                                // добавляем нужные отступы
    return result;                                                          // возвращаем результат
}

void CppClassUnit::add(const std::shared_ptr< Unit >& unit, Flags flags) {

    int accessModifier = PRIVATE;

    if(flags < ACCESS_MODIFIERS.size()) {
        accessModifier = flags;
    }
    _fields[accessModifier].push_back(unit);
}

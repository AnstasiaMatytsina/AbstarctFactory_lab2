#ifndef JAVAMETHODUNIT_H
#define JAVAMETHODUNIT_H
#include <methodunit.h>

class JavaMethodUnit : public MethodUnit
{
public:
    JavaMethodUnit(const std::string& name, const std::string& returnType, const Flags& flags):MethodUnit( name, returnType, flags ) {}
    std::string compile(const unsigned int level = 0) const override{
        std::string result = "";

        if (_flags & STATIC)                            // если бит флага установлен на STATIC,
            result += "static ";                        // то метод статичный
        else if (_flags & FINAL)                        // final предотвращает метод от изменений в подклассе.
            result += "final ";
        else if (_flags & ABSTRACT)                     // Методы abstract никогда не могут быть final
            result += "abstract ";
        result += _returnType + ' ' + _name + "()";     // добавляем возвращаемый тип и имя метода
        result += " {\n";                               // скобка метода
        for (const auto& it : _body)                    // производим генерацию тела метода с нужными отступами
            result += it->compile(level + 1);
        result += generateShift(level) + "}\n";         // закрытая скобка метода
        return result;                                  // возвращаем результат
    }
};

#endif // JAVAMETHODUNIT_H

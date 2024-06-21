#ifndef CPPPRINTOPERATORUNIT_H
#define CPPPRINTOPERATORUNIT_H
#include <printoperatorunit.h>

class CppPrintOperatorUnit : public PrintOperatorUnit
{
public:
    explicit CppPrintOperatorUnit(const std::string& text) {
        _text = text;
    }
    std::string compile( unsigned int level = 0 ) const override;
};

#endif // CPPPRINTOPERATORUNIT_H

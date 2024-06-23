#ifndef CSHARPPRINTOPERATORUNIT_H
#define CSHARPPRINTOPERATORUNIT_H
#include <printoperatorunit.h>

class CSharpPrintOperatorUnit : public PrintOperatorUnit {
public:
    explicit CSharpPrintOperatorUnit(const std::string& text) {
        _text = text;
    }
    std::string compile(unsigned int level = 0) const override;
};

#endif // CSHARPPRINTOPERATORUNIT_H

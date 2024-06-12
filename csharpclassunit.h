#ifndef CSHARPCLASSUNIT_H
#define CSHARPCLASSUNIT_H
#include "classunit.h"

class CSharpClassUnit: public ClassUnit
{
public:
    explicit CSharpClassUnit( const std::string& name );
    void add( const std::shared_ptr< Unit >& unit, Flags flags );
    std::string compile( unsigned int level = 0 ) const;
    };

#endif // CSHARPCLASSUNIT_H

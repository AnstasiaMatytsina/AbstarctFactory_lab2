#ifndef METHODUNIT_H
#define METHODUNIT_H


class MethodUnit : public Unit {
public:
    enum Modifier {
    STATIC = 1,
    CONST = 1 << 1,
    VIRTUAL = 1 << 2,
    FINAL = 1 << 3,
    ABSTRACT = 1 << 4,
    SYNCHRONIZED = 1 << 5,
    VOLATILE = 1 << 6
    };
public:
    MethodUnit( const std::string& name, const std::string& returnType, Flags flags ) :m_name( name ), m_returnType( returnType ), m_flags( flags ) { }
    virtual void add( const std::shared_ptr< Unit >& unit, Flags /* flags */ = 0 );
    virtual std::string compile( unsigned int level = 0 ) const;
protected:
    std::string m_name;
    std::string m_returnType;
    Flags m_flags;
    std::vector< std::shared_ptr< Unit > > m_body;
};
#endif // METHODUNIT_H

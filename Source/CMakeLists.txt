project(mjc)
set(
    HEADERS
    driver.h
    semantic/parser.hh
    )

BISON_TARGET(
    Parser
    semantic/parser.y
    ${mjc_SOURCE_DIR}/semantic/parser.cpp
    DEFINES_FILE ${mjc_SOURCE_DIR}/semantic/parser.hh
)

FLEX_TARGET(
    Scanner
    lexical/scanner.l
    ${mjc_SOURCE_DIR}/lexical/scanner.cpp
)

ADD_FLEX_BISON_DEPENDENCY(Scanner Parser)

add_executable(
    mjc
    main.cpp
    driver.cpp
    ${BISON_Parser_OUTPUTS}
    ${FLEX_Scanner_OUTPUTS}
    semantic/Add.cpp
    semantic/Alloc.cpp
    semantic/And.cpp
    semantic/ArrayType.cpp
    semantic/Assert.cpp
    semantic/Bool.cpp
    semantic/ByName.cpp
    semantic/Class.cpp
    semantic/Div.cpp
    semantic/Equel.cpp
    semantic/ExpressionStatment.cpp
    semantic/Extends.cpp
    semantic/Formal.cpp
    semantic/If.cpp
    semantic/IndexOf.cpp
    semantic/InvocationOf.cpp
    semantic/LengthOf.cpp
    semantic/Less.cpp
    semantic/LocalVariable.cpp
    semantic/Method.cpp
    semantic/Mod.cpp
    semantic/Move.cpp
    semantic/More.cpp
    semantic/Mull.cpp
    semantic/Not.cpp
    semantic/Number.cpp
    semantic/Or.cpp
    semantic/Println.cpp
    semantic/Return.cpp
    semantic/SimpleType.cpp
    semantic/Sub.cpp
    semantic/ThisField.cpp
    semantic/Variable.cpp
    semantic/While.cpp
    semantic/Negativ.cpp
    semantic/Program.cpp
)

target_include_directories(
    mjc PRIVATE ${mjc_SOURCE_DIR}
)



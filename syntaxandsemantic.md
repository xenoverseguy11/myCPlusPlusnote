### SYNTAX AND SEMANTIC ERRORS
**SYNTAX**
a syntax error is an error that violates C++ syntax
such as:

**int x = 5** : this doesnt include a semicolon at the end

**void walk(**: this is missing a second parentheses

**SEMANTIC**
a semantic error is a error that is syntax-correct, but it either violates the C++ language or violate the programming logic

examples:

**int x = "hello";** : this has correct syntax, but it violates the language, because we initialized x with a string literal, therefore this is a semantic error

**void calculate(){return 20;}** : also has correct syntax, but this violates the language because voids cant return a value


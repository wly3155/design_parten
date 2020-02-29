#include <stdio.h>

class parent {
private:
    int private_var;
protected:
    int protected_var;
public:
    int public_var;
};

// pulbic inheritance
class son_public : public parent {
public:
    void print_info (){
        printf("son_public access parent private is illegal\n");
        printf("son_public access parent protected is legal:%d\n", protected_var);
        printf("son_public access parent public is legal:%d\n\n", public_var);
    }
};

// protected inheritance
class son_protected : protected parent {
public:
    void print_info (){
        printf("son_protected access parent private is illegal\n");
        printf("son_protected access parent protected is legal:%d\n", protected_var);
        printf("son_protected access parent public is legal:%d\n\n", public_var);
    }
};

// private inheritance
class son_private : private parent {
public:
    void print_info (){
        printf("son_private access parent private is illegal\n");
        printf("son_private access parent protected is legal:%d\n", protected_var);
        printf("son_private access parent public is legal:%d\n\n", public_var);
    }
};
int main(void) {

    son_public test_public;
    printf("\npublic inheritance test\n");
    printf("public inheritance access private var is not allowed\n");
    printf("public inheritance access protected var is not allowed\n");
    printf("public inheritance access public var is allowed:%d\n", test_public.public_var);
    test_public.print_info();

    son_protected test_protected;
    printf("\nprotected inheritance test\n");
    printf("protected inheritance access private var is not allowed\n");
    printf("protected inheritance access protected var is not allowed\n");
    printf("protected inheritance access public var is not allowed\n");
    test_protected.print_info();

    son_private test_private;
    printf("\nprivate inheritance test\n");
    printf("private inheritance access private var is not allowed\n");
    printf("private inheritance access protected var is not allowed\n");
    printf("private inheritance access public var is not allowed\n");
    test_private.print_info();
}        

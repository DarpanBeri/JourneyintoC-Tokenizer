## Tokenizer in C++
**Note:** Tokenizer for a future project. The only valid tokens are: push, pop, add, sub, mul, div, mod, skip, save, get and any valid integer.

#### Files included:
    Prog2_1.hpp:
        Header file.
    Prog2_1.cpp:
        Contains the Tokenize function.
    Prog2_2.cpp:
        Driver program which combines Prog2_1.c's features with being taking input from a file.

#### Example compilation:
    g++ prog2_2.cpp prog2_1.cpp -o prog2_2

#### Example execution:
    ./prog2_2 <file.txt>
**Note**: <> are not the part of the command

#### file.txt contents:
    push 3
    foobar 3.14
    pop

#### Example run:
    Error on line 2: Unexpected token: foobar

Darpan Beri

darpanberi.99@gmail.com || dberi@sdsu.edu

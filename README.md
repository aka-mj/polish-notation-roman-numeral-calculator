# Polish notation Roman Numeral Calculator

This packages builds a library `libroman.a` for converting from Roman numeral to Arabic numeral and from Arabic numeral to Roman Numeral.
A small calculator program is also built (`src/calc`) that handles addition and subtraction in Polish notation.

Written for this coding exercise: http://codingdojo.org/cgi-bin/index.pl?KataRomanCalculator


## Building

    make
    make test

## Unity Unit Testing

The Unity unit testing framework is used. https://www.throwtheswitch.org/unity

    ....
    -----------------------
    70 Tests 0 Failures 0 Ignored 
    OK


## Calculator

    > ./src/calc + II II
    >> IV
    > ./src/calc - IV X
    >> VI
    > ./src/calc - I E
    >> Invalid Roman Numeral
    > ./src/calc - I I
    >> Failed to preform the subtraction


### Built and Tested on

 * Kubuntu 18.04
 * GNU Make 4.1
 * GCC 7.2.0 and Clang 5.0

# Building

The project uses xmake (https://xmake.io/), see https://xmake.io/#/getting_started on how to set it up.
It also depends on ANTLR, which is included in the repo.
ANTLR has to be built using CMake and installed into the antlr4-cpp-runtime-4.9.2-source/install directory by invoking the INSTALL CMake target.
The proejct can then be built by simply invoking `xmake` and can be run using the current directory as working directory by running `xmake run -w .`.

All of the code is in src/ and the ANTLR grammar file is Toc.g4.

The C++ code generated from the grammar is in gen/ and is up-to-date, but can be regenerated by running `java -jar antlr-4.9.2-complete.jar -Dlanguage=Cpp -no-listener -o gen Toc.g4`.
#include <iostream>
#include <fstream>

#include "TocLexer.h"
#include "TocParser.h"

#include "toc.h"
#include "repr.h"
#include "repr_get.h"
#include "generic.h"
//#include "check.h"

using namespace antlr4;


int main(int argc, const char * argv[])
{
  std::ifstream ifs("test/test.toc");

  // create ANTLR input from filestream
  ANTLRInputStream input(ifs);

  // lex input
  TocLexer lexer(&input);
  CommonTokenStream tokens(&lexer);

  // parse
  TocParser parser(&tokens);

  // get Prog (root node)
  TocParser::ProgContext * prog = parser.prog();

  // dont continue on parse error
  if (parser.getNumberOfSyntaxErrors() > 0)
  {
    std::cerr << "Parsing error" << std::endl;
    return 1;
  }

  // print raw parse tree
  //tree::ParseTree * tree = prog;
  //std::string s = tree->toStringTree(&parser) + "\n";
  //std::cout << "Parse Tree: " << s << std::endl;

  // generate IR from tree and instantiate generics
  Program prg = getProgram(prog, nullptr);
  instantiateGenerics(prg);

  // print to cout and file
  try
  {
    tocProgram(std::cout, prg);

    std::ofstream ofs("output.c");
    tocProgram(ofs, prg);
    ofs.close();
  }
  catch (const char * e)
  {
    std::cerr << "Error: " << e << std::endl;
  }

  return 0;
}
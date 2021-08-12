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

  ANTLRInputStream input(ifs);

  TocLexer lexer(&input);
  CommonTokenStream tokens(&lexer);

  TocParser parser(&tokens);
  TocParser::ProgContext * prog = parser.prog();
  tree::ParseTree * tree = prog;

  if (parser.getNumberOfSyntaxErrors() > 0)
  {
    std::cerr << "Parsing error" << std::endl;
    return 1;
  }

  //std::string s = tree->toStringTree(&parser) + "\n";
  //std::cout << "Parse Tree: " << s << std::endl;

  Program prg = getProgram(prog, nullptr);
  instantiateGenerics(prg);

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
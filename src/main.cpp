#include <iostream>
#include <fstream>

#include "TocLexer.h"
#include "TocParser.h"

#include "toc.h"
#include "repr.h"
#include "repr_get.h"
#include "check.h"

using namespace antlr4;


int main(int argc, const char * argv[])
{
  std::ifstream ifs("test/test2.toc");

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

  std::string s = tree->toStringTree(&parser) + "\n";

  //std::cout << "Parse Tree: " << s << std::endl;

  Program prg = getProgram(prog);

  try
  {
    tocProgram(std::cout, prg);

    if (!checkProgram(prg))
      std::cerr << "Error" << std::endl;

    std::ofstream ofs("output.c");
    tocProgram(ofs, prg);
    ofs.close();
  }
  catch (const std::string & e)
  {
    std::cerr << "Error: " << e << std::endl;
  }

  return 0;
}
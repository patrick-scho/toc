#include <iostream>
#include <fstream>

#include "TocLexer.h"
#include "TocParser.h"

#include "toc.h"
#include "repr.h"
#include "repr_get.h"

using namespace antlr4;


int main(int argc, const char * argv[]) {
  std::ifstream ifs("test.toc");

  ANTLRInputStream input(ifs);

  TocLexer lexer(&input);
  CommonTokenStream tokens(&lexer);

  TocParser parser(&tokens);
  TocParser::ProgContext * prog = parser.prog();
  tree::ParseTree * tree = prog;

  if (parser.getNumberOfSyntaxErrors() > 0) {
    std::cerr << "Parsing error" << std::endl;
    return 1;
  }

  std::string s = tree->toStringTree(&parser) + "\n";

  //std::cout << "Parse Tree: " << s << std::endl;

  Program prg = getProgram(prog);
  std::cout << "Variables:\n";
  for (auto v : prg.variables)
    std::cout << " " << v.name << endl;
  std::cout << "Functions:\n";
  for (auto f : prg.functions)
    std::cout << " " << f.name << endl;

  tocProgram(std::cout, prg);

  //std::ofstream ofs("output.c");
  //tocProg(ofs, prg);
  //ofs.close();

  return 0;
}
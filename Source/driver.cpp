#include "driver.h"
#include "semantic/parser.hh"
#include "visitors/PrintVisitor.h"
#include "visitors/Interpretator.h"


Driver::Driver() :
    trace_parsing(false),
    trace_scanning(false),
    scanner(*this), parser(scanner, *this) {
}


int Driver::parse(const std::string& f) {
    file = f;
    location.initialize(&file);
    scan_begin();
    parser.set_debug_level(trace_parsing);
    int res = parser();

    std::cout << "<Program " << program << ">" << std::endl;
    if (program) {
      Interpretator in;
      program->Accept(&in);

      PrintVisitor pv(f + ".tree");
      program->Accept(&pv);
    }
    
    scan_end();
    return res;
}

void Driver::scan_begin() {
    scanner.set_debug(trace_scanning);
  if (file.empty () || file == "-") {
  } else {
    stream.open(file);
    std::cout << file << std::endl;
    scanner.yyrestart(&stream);
  }
}

void Driver::scan_end()
{
    stream.close();
}


#include <kernel.h>
#include <klib.h>

int main() {
  //_ioe_init();
  //_cte_init(os_trap);
  os->init();
  _mpe_init(os->run);
  return 1;
}

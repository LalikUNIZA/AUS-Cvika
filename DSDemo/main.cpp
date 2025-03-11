#include "heapMonitor.h"
#include <string>
#include <cstdlib>
//#include <libds/mm/compact_memory_manager.h>


int main() {

	std::string* test = static_cast<std::string*>(std::malloc(sizeof(std::string)));
	
	std::string a = "as";
	placementNew(test);

	return 0;
}
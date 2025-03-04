#include <libds/mm/compact_memory_manager.h>

int main() {
	ds::mm::CompactMemoryManager<std::string> mm;
	mm.allocateMemory();
	mm.allocateMemory();
	mm.allocateMemory();

	mm.getBlockAt(0) = "a";
	mm.getBlockAt(1) = "aaa";
	mm.getBlockAt(2) = "asdshdjtzhktizloutiukgh135";

	mm.changeCapacity(10);
	mm.print(std::cout);

	return 0;
}
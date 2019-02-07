#include <io/SNAPGraphReader.h>

int main(int argc, const char *argv[]) {
	// argc is the number of command line arguments.
	// argv is an array of those arguments.
	if(argc != 2) {
		std::cerr << "Expected exactly the arguments:\n"
				"<graph>" << std::endl;
		return EXIT_FAILURE;
	}

	// Note that we read the graph as undirected and we do not remap node IDs.
	// See the SNAPGraphReader documentation for details.
	NetworKit::SNAPGraphReader reader{false, false};
	auto g = reader.read(argv[1]); // Yields NetworKit::Graph object.
  
  //CODE HERE

	return EXIT_SUCCESS;
}


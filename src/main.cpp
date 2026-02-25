#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    if (argc < 2 || std::string(argv[1]) == "help") {
        std::cout << R"(Usage: ctx <command>

Commands:
  new <name>       Initialise a context entry
  list             Show active context entries
  enter            Enter a context
  leave            Leave a context
  status           Heads up on current context
  del <name>       Delete context entry
  search <name>    Search all context entries
  help             Show this help message
)";
        return 0;
    }

    std::string cmd = argv[1];

    if (cmd == "new") {
        if (argc < 3) {
            std::cerr << "[FAIL] 'new' requires a <name>\n";
            return 1;
        }

        std::string name = argv[2];
        // TODO: create context entry
        return 0;
    }
    else if (cmd == "list") {
        // TODO: list entries
        return 0;
    }
    else if (cmd == "enter") {
        // TODO: enter context
        return 0;
    }
    else if (cmd == "leave") {
        // TODO: leave context
        return 0;
    }
    else if (cmd == "status") {
        // TODO: show current context
        return 0;
    }
    else if (cmd == "del") {
        if (argc < 3) {
            std::cerr << "[FAIL] 'del' requires a <name>\n";
            return 1;
        }

        std::string name = argv[2];
        // TODO: delete entry
        return 0;
    }
    else if (cmd == "search") {
        if (argc < 3) {
            std::cerr << "[FAIL] 'search' requires a <name>\n";
            return 1;
        }

        std::string name = argv[2];
        // TODO: search entries
        return 0;
    }
    else {
        std::cerr << "Unknown command: " << cmd << "\n";
        return 1;
    }
}

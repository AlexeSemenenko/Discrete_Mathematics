#include <iostream>
#include <fstream>
#include <vector>

int main() {
    std::ifstream in("input.txt");
    int count_of_vertex = 0;
    int parent = 0;
    int child = 0;

    in >> count_of_vertex;

    std::vector<int> family(count_of_vertex, 0);

    while (!in.eof()) {
        in >> parent;
        in >> child;
        family[child - 1] = parent;
    }

    in.close();

    std::ofstream out("output.txt");
    for (int i = 0; i < count_of_vertex; i++){
        out << family[i] << " ";
    }

    out.close();

    return 0;
}
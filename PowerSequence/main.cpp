#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

int main() {
    std::ifstream in("input.txt");
    int count_of_vertex = 0;
    int count_of_edge = 0;
    int tmp = 0;

    in >> count_of_vertex;
    in >> count_of_edge;

    std::vector<int> power(count_of_vertex);

    while (!in.eof()) {
        in >> tmp;
        power[tmp - 1]++;
    }

    std::sort(power.rbegin(), power.rend());

    in.close();

    std::ofstream out("output.txt");
    for (int i = 0; i < count_of_vertex; i++){
        out << power[i] << " ";
    }

    out.close();

    return 0;
}
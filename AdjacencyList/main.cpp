#include <iostream>
#include <fstream>
#include <vector>

int main() {
    std::ifstream in("input.txt");
    int count_of_vertex = 0;
    int count_of_edge = 0;
    int first = 0;
    int second = 0;

    in >> count_of_vertex;
    in >> count_of_edge;

    std::vector<std::vector<int>> matrix(count_of_vertex, std::vector<int>(count_of_vertex, 0));
    std::vector<int> power(count_of_vertex, 0);

    while (!in.eof()) {
        in >> first;
        in >> second;
        matrix[first - 1][second - 1] = 1;
        matrix[second - 1][first - 1] = 1;
        power[first - 1]++;
        power[second - 1]++;
    }

    in.close();

    std::ofstream out("output.txt");
    for (int i = 0; i < count_of_vertex; i++){
        out << power[i] << " ";
        for(int j = 0; j < count_of_vertex; j++){
            if(matrix[i][j] == 1){
                out << j + 1 << " ";
            }
        }
        out << std::endl;
    }

    out.close();

    return 0;
}
#include <iostream>
#include <fstream>
#include <vector>

int main() {
    std::ifstream in("input.txt");

    int count_of_vertex = 0;
    int temp = 0;
    int count = 0;
    int i = 0;

    in >> count_of_vertex;

    std::vector<std::vector<int>> matrix(count_of_vertex, std::vector<int>(count_of_vertex, 0));
    std::vector<int> family(count_of_vertex, 0);

    while (!in.eof()) {
        if(count == 6){
            i++;
            count = 0;
        }

        in >> temp;
        matrix[i][count] = temp;
        count++;
    }

    in.close();

    for(int i = 0; i < count_of_vertex; i++){
        for(int j = 0; j < count_of_vertex; j++){
            if(matrix[i][j] == 1){
                family[j] = i + 1;
            }
        }
    }

    std::ofstream out("output.txt");
    for (int i = 0; i < count_of_vertex; i++){
        out << family[i] << " ";
    }

    out.close();

    return 0;
}
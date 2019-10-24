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

    std::vector<int> family(count_of_vertex, 0);

    while (!in.eof()) {
        if(count == count_of_vertex){
            i++;
            count = 0;
        }

        in >> temp;

        if(temp == 1){
            family[count] = i + 1;
        }

        count++;
    }

    in.close();

    std::ofstream out("output.txt");
    for (int i = 0; i < count_of_vertex; i++){
        out << family[i] << " ";
    }

    out.close();

    return 0;
}
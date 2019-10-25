import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.*;

public class Main {

    public static void main(String[] args) throws IOException {
        FileReader fr = new FileReader("input.txt");
        Scanner scan = new Scanner(fr);

        int count_of_vertex = scan.nextInt();
        int count_of_edge = scan.nextInt();
        int first;
        int second;

        int[][] matrix = new int[count_of_vertex][count_of_vertex];

        for(int i = 0; i < count_of_edge; i++){
            first = scan.nextInt() - 1;
            second = scan.nextInt() - 1;
            matrix[first][second] = matrix[second][first] = 1;
        }

        fr.close();

        FileWriter fw = new FileWriter("output.txt");
        for (int i = 0; i < count_of_vertex; i++){
            for(int j = 0; j < count_of_vertex; j++){
                fw.write(matrix[i][j] + " ");
            }
            fw.write("\n");
        }

        fw.close();
    }
}
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
        int temp;

        int[] powers = new int[count_of_vertex];

        for(int i = 0; i < count_of_edge * 2; i++){
            temp = scan.nextInt() - 1;
            powers[temp]++;
        }

        fr.close();

        Arrays.sort(powers);

        FileWriter fw = new FileWriter("output.txt");
        for (int i = count_of_vertex - 1; i >= 0; i--){
            fw.write(powers[i] + " ");
        }

        fw.close();
    }
}
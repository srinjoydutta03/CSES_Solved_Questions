package CSES.Sorting_And_Searching.Java;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.HashSet;

public class DistinctNumbers {
    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter writer = new PrintWriter(System.out);

        int n = Integer.parseInt(reader.readLine());
        String[] tokens = reader.readLine().split(" ");
        
        HashSet<Integer> distinctElements = new HashSet<>(n);

        for (String token : tokens) {
            distinctElements.add(Integer.parseInt(token));
        }
        
        writer.println(distinctElements.size());

        reader.close();
        writer.close();
    }
}

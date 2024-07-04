package CSES.Introductory_Problems.Java;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;


public class Permutations {

    public static void findPermutations(int n){
        PrintWriter writer = new PrintWriter(System.out);
        if(n == 1){
            writer.println("1");
        }
        else if( n == 2 || n == 3){
            writer.println("NO SOLUTION");
        }
        else{
            for(int i = 2; i <= n; i += 2){
                writer.print(i + " ");
            }
            for(int i = 1; i <= n; i += 2){
                writer.print(i + " ");
            }
        }
        writer.close();
    }
    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(reader.readLine());

        findPermutations(n);
        reader.close();
    }
}
package CSES_Solved_Questions.Introductory_Problems.Java;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class Repetitions {
    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter writer = new PrintWriter(System.out);
        String s = reader.readLine();
        char prev = '#';

        int len = 1, ans = 1;
        for(char c: s.toCharArray()){
            if(prev == c){
                len++;
            }
            else{
                ans = Math.max(ans, len);
                len = 1;
                prev = c;
            }
        }

        ans = Math.max(ans, len);

        writer.println(ans);

        reader.close();
        writer.close();
    }
}

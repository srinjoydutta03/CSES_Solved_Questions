package CSES_Solved_Questions.Introductory_Problems.Java;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.ArrayList;


public class IncreasingArray {
    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter writer = new PrintWriter(System.out);

        int n = Integer.parseInt(reader.readLine());

        ArrayList<Long> arr = new ArrayList<>(n);
        String elems = reader.readLine();
        String tokens[] = elems.split(" ");

        for(String token : tokens){
            arr.add(Long.valueOf(Integer.parseInt(token)));
        }

        long ans = 0;
        for(int i = 1; i < arr.size(); i++){
            if(arr.get(i) < arr.get(i-1)){
                ans += arr.get(i-1) - arr.get(i);
                arr.set(i, arr.get(i-1));
            }
        }

        writer.println(ans);
        reader.close();
        writer.close();
    }
}

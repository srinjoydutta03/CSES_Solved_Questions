package CSES_Solved_Questions.Introductory_Problems.Java;

import java.util.Scanner;

public class WeirdAlgorithm {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        long n;
        n = in.nextLong();

        while(n!=1){
            System.out.print(n+" ");
            n = (n%2 == 0)? n/2 : n*3+1;
        }

        System.out.print(1);
        in.close();
    }
}

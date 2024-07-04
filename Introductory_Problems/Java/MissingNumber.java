package CSES.Introductory_Problems.Java;

import java.util.Scanner;

public class MissingNumber {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n;
        n = in.nextInt();

        int arr[] = new int[n];
        for(int i = 0; i<n-1; i++){
            int temp = in.nextInt();
            arr[temp-1] = 1;
        }

        for (int i = 0; i<n; i++){
            if(arr[i] != 1){
                System.out.println(i+1);
                break;
            }
        }
        in.close();

        /*
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(System.out));

        int n = Integer.parseInt(reader.readLine());
        boolean arr[] = new boolean[n];

        String line = reader.readLine();
        String tokens[] = line.split(" ");

        for(String token: tokens){
            int temp = Integer.parseInt(token);
            arr[temp-1] = true;
        }

        for(int i=0; i<n; i++){
            if(!arr[i]){
                writer.write((i+1) + "\n");
                break;
            }
        }

        reader.close();
        writer.close();
         */
    }
}



package CSES.Sorting_And_Searching.Java;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class Apartments {
    public static void main(String[] args) throws IOException{
        int n, m, k;
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));

        String s = reader.readLine();
        String firstLine[] = s.split(" ");

        n = Integer.parseInt(firstLine[0]);
        m = Integer.parseInt(firstLine[1]);
        k = Integer.parseInt(firstLine[2]);

        List<Integer> requirements = new ArrayList<>(n);
        List<Integer> available = new ArrayList<>(m);

        s = reader.readLine();
        String secondLine[] = s.split(" ");

        for(int i = 0; i < n; i++){
            requirements.add(Integer.parseInt(secondLine[i]));
        }

        s = reader.readLine();
        String thirdLine[] = s.split(" ");

        for(int i = 0; i < m; i++){
            available.add(Integer.parseInt(thirdLine[i]));
        }

        Collections.sort(requirements);
        Collections.sort(available);

        int i = 0, j = 0, ans = 0;

        while(i < n && j < m){
            if(requirements.get(i) < available.get(j) - k){
                i++;
            }
            else if(requirements.get(i) > available.get(j) + k){
                j++;
            }
            else{
                ans++; i++; j++;
            }
        }

        System.out.println(ans);
        reader.close();
    }
}

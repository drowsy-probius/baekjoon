import java.io.*;       
import java.util.*;
public class Main{
    // buffer >>>>>>...>>>> System.in/System.out
    static int count[] = new int[21];
    public static BufferedWriter bw;
	public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int n = sc.nextInt();

        count[1] = 1;
        for(int i=2; i<21; i++){ count[i] = count[i-1]*2 + 1; }
        System.out.println(count[n]);
        
        
        try{
            hanoi(n, 1, 2, 3);
            bw.flush();
            bw.close();
        }catch(IOException e){
            System.out.println(1234);
        }finally{
            sc.close();
        }
    }
    
    static void hanoi(int n, int from, int pass, int to) throws IOException{
        if(n>0){
            hanoi(n-1, from, to, pass);
            bw.write( Integer.toString(from) + " " + Integer.toString(to) + "\n" );
            hanoi(n-1, pass, from, to);
        }
    }
    
}
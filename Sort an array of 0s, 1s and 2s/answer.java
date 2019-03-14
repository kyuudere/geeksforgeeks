
import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
 Scanner sc = new Scanner(System.in);
    int test = sc.nextInt();
    for(int i=0;i<test;i++){
        int n = sc.nextInt();
        List<Integer> list = new ArrayList<Integer>();
        for(int j=0;j<n;j++){
            list.add(sc.nextInt());
        }
        int zero = 0;
        int one = 0;
        int two = 0;
        List<Integer> outputList = new ArrayList<Integer>();
        StringBuilder sb = new StringBuilder();
        for(int j=0;j<n;j++){
            if(list.get(j)==0)
            {
              
               sb.append(0).append(" ");
            }
            else if(list.get(j)==1){
                one++;
            }
            else{
                two++;
            }
        }

        for(int j=0;j<one;j++){
          sb.append(1).append(" ");
        }
        for(int j=0;j<two;j++){
            sb.append(2).append(" ");
        }
        System.out.println(sb.toString());
        
    }
	}
}
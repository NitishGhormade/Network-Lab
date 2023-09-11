import java.util.*;

public class RainFeceChyper {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String ans;

        System.out.print("Enter the Text: ");
        String str = sc.nextLine();
        String []strArr = str.split(" ");

        String combo = "";
        for(int i=0;i < strArr.length;i++){
            combo = combo + strArr[i];
        }

        String strEven = "",strOdd = "";
        for(int i=0;i < combo.length();i++){
            if(i%2==0) strEven += combo.charAt(i);
            else strOdd += combo.charAt(i);
        }

        ans = strEven + strOdd;
        System.out.println("Ans: "+ans);
    }
}

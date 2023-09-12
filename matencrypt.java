import java.util.*;

class matencrypt {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        char [][]mat = new char[26][26];

        for(int i=0;i <= 25;i++){
            int ch = 65+i;

            for(int j=0;j <= 25-i;j++){
                mat[i][j] = (char)(ch+j);
            }

            ch = 65;
            for(int k=0;k < i;k++){
                mat[i][26-i+k] = (char)(ch++);
            }
        }

        for(int i=0;i < 26;i++){
            for(int j=0;j < 26;j++){
                System.out.print(mat[i][j]+" ");
            }
            System.out.println();
        }

////////////////////////////////////////////////////////////////////////////////////

        System.out.print("Enter the Code to be Encrypted: ");
        String str = sc.nextLine();

        System.out.print("Enter the Key String: ");
        String key = sc.nextLine();

        String temp = "";

        
    }
}

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String name = sc.nextLine();
		String str = name.toUpperCase();
		int arr[] = new int[26];
		int k = str.length();
		for(int i=0;i<k;i++) {
			arr[str.charAt(i)-65]++;
		}
		char fin;
		int psi=0;
		int max=0;
		int cnt=0;
		for(int i=0;i<26;i++) {
			if(max<arr[i]) {
				max = arr[i];
				psi = i;
			}
		}
		for(int i=0;i<26;i++) {
			if(max==arr[i]) cnt++;
		}
		if(cnt>=2) System.out.print("?");
		else {
			fin = (char) (psi+65);
			System.out.print(fin);
		}
	}
}

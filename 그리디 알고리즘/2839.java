import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int sum=0;
		int num=input.nextInt();
		if(num==7 || num==4) {
			System.out.println(-1);
		}
		else {
			while(num!=0) {
				if(num==12 ||num==7 || num==9 || num==6 || 0<num && num<=4) {
					break;
				}
				num-=5;
				sum++;
			}
			while(num!=0) {
				num-=3;
				sum+=1;
			}
			System.out.println(sum);
		}
	}

}

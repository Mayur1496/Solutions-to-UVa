import java.util.*;
import java.text.DateFormat;
import java.text.SimpleDateFormat;
class Main{
	public static void main(String args[]){
		int d,year,month,day;
		Scanner s = new Scanner(System.in);
		while(true){
			d=s.nextInt();
			day=s.nextInt();
			month=s.nextInt();
			year=s.nextInt();
			if(d==0 && day==0 && month==0 && year==0)break;
			GregorianCalendar gc = new GregorianCalendar(year,month-1,day);
			gc.add(Calendar.DATE,d);
			System.out.println(gc.get(Calendar.DATE)+" "+(gc.get(Calendar.MONTH)+1)+" "+gc.get(Calendar.YEAR));
		}
	}
}

public class Control {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Employee Emp1 = new hourlyEmployee("Saul", "Hennesy", 41863, 0, 1560, 10.2);
		Employee Emp2 = new salesEmployee("Mark", "Teller", 41868, 40000, 1500);
		
		System.out.println(Emp1);
		Emp1.calculatePay();
		
		System.out.println(Emp2);
		Emp2.calculatePay();
	}
}

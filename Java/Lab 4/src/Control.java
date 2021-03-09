
public class Control {
	public static void main(String[] args) {
		String warningMsg = "Waring, account below €100";
		
		Account A1 = new Account("Mark", 4464, true, -100);
		DepositAccount DA1 = new DepositAccount("Saul", 4465, false, 24445);
		CurrentAccount CA1 = new CurrentAccount("Ben", 4466, false, 100);
		
		System.out.println(A1);
		System.out.println(DA1);
		System.out.println(CA1);
		
		A1.deposit(500);
		DA1.deposit(300);
		CA1.deposit(900);
	
		
		A1.withdraw(100);
		DA1.withdraw(5000);
		CA1.withdraw(200);
		
		CA1.checkCredit();
		
		CA1.checkCredit("Waring, account below €100");
		
		System.out.println(A1);
		System.out.println(DA1);
		System.out.println(CA1);
	}
}

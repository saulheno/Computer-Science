
public class CurrentAccount extends Account{
	private double penaltyAmount;
	
	public CurrentAccount (String accountName, int accountNumber, boolean inCredit, double acctBalance) {
		super(accountName, accountNumber, inCredit, acctBalance);
	}
	
	public void checkCredit() {
		System.out.printf("Credit :"); 
		System.out.println(this.isInCredit());
	}
	
	public void checkCredit(String warningMsg) {
		System.out.printf("Credit :"); 
		System.out.println(this.isInCredit());
		
		System.out.println(warningMsg);
	}
	
	public void withdraw(double takeAmount) {
		super.withdraw(takeAmount);
        penaltyAmount = penaltyAmount + 10;
	}
}


public class DepositAccount extends Account{
	private double interestRate;
	
	public DepositAccount (String accountName, int accountNumber, boolean inCredit, double acctBalance) {
		super(accountName, accountNumber, inCredit, acctBalance);
	}
	
	public void withdraw(double takeAmount) {
		System.out.println("You cannot withdraw from a deposit account!");
	}
}

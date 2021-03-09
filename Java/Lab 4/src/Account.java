
public class Account implements ValidatedAccount{
	private String accountName;
	private int accountNumber;
	private boolean inCredit; 
	private double acctBalance;
	
	public Account (String accountName, int accountNumber, boolean inCredit, double acctBalance) {
		this.accountName = accountName;
		this.accountNumber = accountNumber;
		this.inCredit = inCredit;
		this.acctBalance = acctBalance;
	}
	
	public void getDetails() {
		String details;
		details = this.accountName + " " + this.acctBalance;
		System.out.println(details);
	}
	
	public void ValuableAccount() {
		System.out.println(this.acctBalance);
	}
	public void deposit(double depAmount) {
		System.out.printf("Depositing €");
		System.out.println(depAmount);
		this.acctBalance = depAmount + this.acctBalance;
		if (acctBalance > 0){
			inCredit = true;
		}
	}
	
	public void withdraw(double takeAmount) {
		System.out.printf("Withdrawing €");
		System.out.println(takeAmount);
		acctBalance = acctBalance - takeAmount;
		if (acctBalance < 0){
			inCredit = false;
		}
	}

	public String getAccountName() {
		return accountName;
	}

	public void setAccountName(String accountName) {
		this.accountName = accountName;
	}

	public int getAccountNumber() {
		return accountNumber;
	}

	public void setAccountNumber(int accountNumber) {
		this.accountNumber = accountNumber;
	}

	public boolean isInCredit() {
		return inCredit;
	}

	public void setInCredit(boolean inCredit) {
		this.inCredit = inCredit;
	}

	public double getAcctBalance() {
		return acctBalance;
	}

	public void setAcctBalance(double acctBalance) {
		this.acctBalance = acctBalance;
	}
	
	public String toString(){
		String details;

		return details = "Name : " + this.accountName + " Acc Number : " + this.accountNumber + " inCredit : " + this.inCredit + " Balance : " + this.acctBalance;
	}

}

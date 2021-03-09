
public class salesEmployee extends Employee {
	private double commissionEarned;
	public salesEmployee(String firstName, String surName, int staffNumber, double annualSalary, double commissionEarned) {
		super(firstName, surName, staffNumber, annualSalary);
		this.commissionEarned = commissionEarned;
	}
	public void calculatePay(){
		double Pay = getAnnualSalary() / 12;
		Pay = Pay + commissionEarned;
		System.out.println(Pay);	
	}
}

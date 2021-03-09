
public class Employee {
	private String firstName;
	private String surName;
	private int staffNumber;
	private double annualSalary; 
	
	public Employee (String firstName, String surName, int staffNumber, double annualSalary) {
		this.firstName = firstName;
		this.surName = surName;
		this.staffNumber = staffNumber;
		this.annualSalary = annualSalary;
	}
	
	public String getFirstName() {
		return firstName;
	}
	
	public void setFirstName(String firstName) {
		this.firstName = firstName;
	}
	
	public String getSurName() {
		return surName; 
	}
	
	public void setSurName(String surName) {
		this.surName = surName;
	}
	
	public int getStaffNumber() {
		return staffNumber;
	}
	
	public void setStaffNumber(int staffNumber) {
		this.staffNumber = staffNumber;
	}
	
	public double getAnnualSalary() {
		return annualSalary;
	}
	
	public void setAnnualSalary(double annualSalary) {
		this.annualSalary = annualSalary;
	}
	
	public void calculatePay(){
		double monthlySalary;
		monthlySalary = this.annualSalary / 12 ;
		System.out.println(monthlySalary);
		
	}
	
	public String toString(){
		String details;

		return details = "Name : " + this.firstName + " " + this.surName + " Staff Number : " + this.staffNumber + " Annual Salary : " + this.annualSalary;
	}
	
}

	

	



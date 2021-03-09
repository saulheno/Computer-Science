
public class hourlyEmployee extends Employee {
	private double hoursWorked;
	private double hourlyRate;
	
	public hourlyEmployee(String firstName, String surName, int staffNumber, double annualSalary, double hoursWorked,  double hourlyRate) {
		super(firstName, surName, staffNumber, annualSalary);
		this.setAnnualSalary(0);
		this.hoursWorked = hoursWorked;
		this.hourlyRate = hourlyRate;
	}
	
	public void calculatePay(){
		double Pay = this.hoursWorked * this.hourlyRate;
		System.out.println(Pay);	
	}
	
	public double getHoursWorked() {
		return hoursWorked;
	}

	public void setHoursWorked(double hoursWorked) {
		this.hoursWorked = hoursWorked;
	}

	public double getHourlyRate() {
		return hourlyRate;
	}

	public void setHourlyRate(double hourlyRate) {
		this.hourlyRate = hourlyRate;
	}
}
	

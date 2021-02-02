package com.lab1.test;

public class Vehicle {
	    public String OwnerName;
		public String Reg;
		public int MaxSpeed;
		public String Colour;
		public boolean Automatic;
		public int Wheels; 
	
	
	
	
	public Vehicle (String OwnerName, String Reg, int MaxSpeed, String Colour, boolean Automatic, int Wheels) {
		this.OwnerName = OwnerName;
		this.Reg = Reg;
		this.MaxSpeed = MaxSpeed;
		this.Colour = Colour;
		this.Automatic = Automatic;
		this.Wheels = Wheels;
	}

	
	public String toString(){
		String details;
		return details = "Name :" + this.OwnerName + " Reg :" + this.Reg + " Max Speed :" + this.MaxSpeed + " Colour :" + this.Colour + " Automatic :" + this.Automatic + " Wheels :" + this.Wheels;
	}
	
}
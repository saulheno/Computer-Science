
public class Animal {
    private String name;
	private String breed;
	private boolean domestic;
	
	public Animal (String name) {
		this.name = name;
	}
	
	public void setName (String name) {
		this.name = name;
	}
	
	public String getName () {
		return this.name;
	}
	
	public Animal (String name, String breed, boolean domestic) {
		this.name = name;
		this.breed = breed;
		this.domestic = domestic;
	}
	
	public void makeNoise() {
		if (this.breed == "dog" || this.breed == "Dog") {
			System.out.println("Bark Bark Woof");
		} else if (this.breed == "cat" || this.breed == "Cat") {
			System.out.println("Meow");
		} else if (this.breed == "cow" || this.breed == "Cow") {
			System.out.println("Mooo");
		}
	}
	
	public String toString(){
		String details;

		return details = "Name : " + this.name + " Breed : " + this.breed + " Domestic : " + this.domestic;
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub

	}

}

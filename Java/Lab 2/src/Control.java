
public class Control {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Animal Animal1 = new Animal("Spot", "Dog", true);
		Animal Animal2 = new Animal("Leo");
		Animal Animal3 = new Animal("Ben", "Cat", true);
		Animal Animal4 = new Animal("Mark", "Cow", false);
		System.out.println(Animal1);
		System.out.println(Animal2);
		
		System.out.println(Animal1.getName());
		Animal1.setName("Tom");
		System.out.println(Animal1.getName());
		
		Animal1.makeNoise();
		Animal3.makeNoise();
		Animal4.makeNoise();
	}

}


public class Colis implements Courrier{

	private String dest;
	private String exp;
	private int poids; //en grammes

	public Colis(String dest, String exp, int poids) {
		this.dest = dest;
		this.exp = exp;
		this.poids = poids;
	}

	public String getDestinataire() {
		return this.dest;
	}

	public double coutAffranchissement() {
		return (this.poids/500)+1;
	}

	public boolean estCorrect() {
		return this.dest!=null && this.exp!=null;
	}
	
	public String toString() {
		return "Colis pour " + dest + " de la part de " + exp + " et pesant " + poids + "g, ";
	}
}

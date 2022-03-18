
public abstract class Soldat {
	
	private int poids;
	private String nom;
	
	public Soldat(int poids, String nom) {
		this.poids = poids;
		this.nom = nom;
	}
	
	public abstract double calculVitesse();

	public int getPoids() {
		return poids;
	}

	public String getNom() {
		return nom;
	}
	
	public abstract String toString();
	
}

public class Lettre implements Courrier {

	private String dest;
	private String contenu;
	
	public Lettre(String destinataire, String contenu) {
		this.dest = destinataire;
		this.contenu = contenu;
		
	}

	public String getDestinataire() {
		return this.dest;
	}

	public double coutAffranchissement() {
		return 0.5;
	}

	public boolean estCorrect() {
		return this.dest!=null;
	}

	public String toString() {
		return "Lettre pour " + dest + ", ";
	}
	
}

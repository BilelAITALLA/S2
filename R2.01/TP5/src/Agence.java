import java.util.ArrayList;

public class Agence {

	private ArrayList<Voiture> voitures;
	
	public Agence() {
		this.voitures = new ArrayList<Voiture>();
	}
	
	public void ajoute(Voiture v) {
		this.voitures.add(v);
	}
	
	public ArrayList<Voiture> getVoitures() {
		return voitures;
	}

	public ArrayList<Voiture> selection(Critere c) {
		ArrayList<Voiture> verifientCrit = new ArrayList<Voiture>();
		for (Voiture voiture : voitures) {
			if (c.estSatisfaitPar(voiture)) {
				verifientCrit.add(voiture);
			}
		}
		return verifientCrit;
	}
	
}

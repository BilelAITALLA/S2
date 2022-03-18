
public class SimpleSoldat extends Soldat{

	public SimpleSoldat(int poids, String nom) {
		super(poids, nom);
	}

	public double calculVitesse() {
		if (this.getPoids() <= 85) {
			return 7;
		} else if (this.getPoids() <= 95) {
			return 6.6;
		} else {
			return 6;
		}
	}
	
}

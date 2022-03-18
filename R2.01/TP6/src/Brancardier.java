
public class Brancardier extends SoldatAvecCharge {

	public Brancardier(int poids, String nom) {
		super(poids, nom, 60);
	}
	
	public double simpleSoldatVitesse() {
		if (this.getPoids() <= 85) {
			return 7;
		} else if (this.getPoids() <= 95) {
			return 6.6;
		} else {
			return 6;
		}
	}

	public double calculVitesse() {
		if (this.getCharge() == 0) {
			return this.simpleSoldatVitesse();
		} else if (this.getCharge() < this.getPoids()/3) {
			return this.simpleSoldatVitesse()*0.8;
		} else if (this.getCharge() < this.getPoids()/2) {
			return this.simpleSoldatVitesse()*0.7;
		} else {
			return 4;
		}
	}
}

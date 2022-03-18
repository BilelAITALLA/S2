
public class CritereModele implements Critere{
	
	private String modele;
	
	public CritereModele(String modele) {
		this.modele = modele;
	}
	
	public boolean estSatisfaitPar(Voiture v) {
		return v.getModele().equals(this.modele);
	}
	
}


public class Client {

	private String nom;
	private String adresse;

	public Client(String nomC, String adresseC) {
		this.nom = nomC;
		this.adresse = adresseC;
	}
	
	public void setAdresse(String newAdresse) {
		this.adresse  = newAdresse;
	}
	
	public String getNom() {
		return this.nom;
	}
	
	public String getAdresse() {
		return this.adresse;
	}

	public String toString() {	
		return "\nNom du client :"+this.nom+"\nAdresse du client :"+this.adresse;
	}
}

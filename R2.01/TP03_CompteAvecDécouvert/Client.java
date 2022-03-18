/**
 * Client.java : le client d'un banque. 
 * Un client est responsable de : 
 * - mettre à jour son adresse avec une nouvelle adresse
 * - donner son nom
 * - donner un version affichable de ses informations (son nom et son adresse).
 */
public class Client {

	private String nom;
	private String adresse;
	
		public Client (String nom, String adresse) {
			this.nom = nom;
			this.adresse = adresse;
		}
		
		public String getNom() {
			return this.nom;
		}
		
		public void setAdresse (String nouvelleAdresse) {
			this.adresse = nouvelleAdresse;
		}
		
		public String toString () {
			return this.nom + " habite " + this.adresse;
		}
}
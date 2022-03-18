import java.util.ArrayList;

/*
 * La banque gère ses clients et ses comptes...
 *  
 */
public class Banque {

	private String nomBanque;
	private ArrayList<Compte> comptes;
	private ArrayList<Client> clients;

	int numéroCompteMax; // Sert à générer des numéro de comptes uniques.
	
	public Banque (String nomBanque) {
		this.nomBanque = nomBanque;
		this.comptes = new ArrayList<Compte>();
		this.clients = new ArrayList<Client>();
		this.numéroCompteMax = 0;
	}

	public String getNomBanque() {
		return this.nomBanque;
	}
	
	
//	 En l'absence d'exceptions, il a été décidé pour la méthode ci-dessous (et pour d'autres méthodes plus loin) de retourner un booléen. 
//	 Ce booléen permet de savoir si l'opération s'est déroulée correctement. 
//	 Avec des exceptions, il peut être préférable de propager ou lancer une exception.
	 
	public boolean créerCompte (String nomClient) {
		Client client = this.trouverClient(nomClient);
		if (client == null) return false;
		
		this.numéroCompteMax++;
		this.comptes.add(new Compte(this.numéroCompteMax, client));
		return true;
	}
	

	public boolean ajouterClient (String nom, String adresse) {
		if (this.trouverClient(nom) != null)
			return false;
		this.clients.add(new Client(nom, adresse));
		return true;
	}
	
	public boolean modifierAdresseClient (String nom, String nouvelleAdresse) {
		Client client = this.trouverClient(nom);
		if (client == null)
			return false;
		client.setAdresse(nouvelleAdresse);
		return true;
	}
	
	public String listerComptes() {
		return this.comptes.toString();
	}
	
	public String listerCLients() {
		return this.clients.toString();
	}
	
	public int nbClients () {
		return this.clients.size();
	}
	
	public int nbComptes () {
		return this.comptes.size();
	}
			
	public String étatCompte(int numéro) {
		Compte c = this.trouverCompte(numéro);
		if (c == null)
			return ("Aucun compte ne correspond au numéro " + numéro);
		else
			return c.toString();
	}
	

	public boolean créditer (int numéroCompte, long montant) {
		Compte compteACréditer = this.trouverCompte(numéroCompte);

		if (compteACréditer == null)
			return false;
		
		compteACréditer.créditer(montant);
		return true;
	}
	

	public boolean débiter (int numéroCompte, long montant) throws CompteException {
		Compte compteADébiter = this.trouverCompte(numéroCompte);

		if (compteADébiter == null)
			return false;
		
		compteADébiter.débiter(montant);
		return true;
	}
	
	public String comptesADécouvert() {
		return this.listeComptesADécouvert().toString();
	}
	
	/*
	 * Retourne le compte ayant le numéro passé en paramètre.
	 * Retourne null si numéro inexistant.
	 */
	private Compte trouverCompte(int numero) {
		for (Compte c : this.comptes)
			if (c.getNuméro()== numero) return c;
		return null;
	}
	
	/*
	 * Retourne le client ayant le nom passé en paramètre.
	 * Retourne null si aucun client de ce nom-là.
	 */
	private Client trouverClient(String nom) {
		for (Client client : this.clients)
			if (client.getNom().equals(nom)) return client;
		return null;
	}
	
	private ArrayList<Compte> listeComptesADécouvert() {
		ArrayList<Compte> comptesADécouvert = new ArrayList<Compte>();
		for (Compte c : this.comptes)
			if (c.estADécouvert())
				comptesADécouvert.add(c);
		return comptesADécouvert;
	}
	
}
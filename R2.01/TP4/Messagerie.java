
public class Messagerie {
	
	public static void main(String[] args) throws ServeurException {
		Client nicolas = new Client("Nicolas");
		Client bilel = new Client("Bilel");
	
		Serveur gmail = new Serveur();
		
		bilel.connexion(gmail);
		bilel.envoyer("BONJOUR", "Nicolas");
		
		nicolas.connexion(gmail);
		nicolas.consulter();
		
		bilel.envoyer("AU REVOIR", "Nicolas");
		nicolas.consulter();
	}
}

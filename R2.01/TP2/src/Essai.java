
public class Essai {

	public static void main(String[] args) {
		Client tintin = new Client("Tintin", "Montreuil");
		System.out.println(tintin);
		tintin.setAdresse("Evry");
		System.out.println(tintin);
		
		Compte compte1 = new Compte(tintin,1234,10000);
		System.out.println(compte1);
		
		Client riskaa = new Client("Kaaris", "Sevran");
		Compte compte2 = new Compte(riskaa,1,500042);
		Compte compte3 = new Compte(riskaa,2,100000026);
		
		compte1.debit(1200);
		System.out.println(compte1);
		compte3.credit(1200);
		System.out.println(compte3);
		compte3.debit(100000);
		System.out.println(compte3);
		compte2.credit(100000);
		System.out.println(compte2);
		
		Banque lcm = new Banque("Le Crédit Montreuillois");	
		lcm.addClient(riskaa);
		lcm.addClient(tintin);
		lcm.addCompte(compte3);
		lcm.addCompte(compte2);
		lcm.addCompte(compte1);
		System.out.println(lcm.listeClients());
		System.out.println(lcm.listeComptes());
		System.out.println("Nombre de comptes :"+lcm.nbComptes());
		System.out.println("Nombre de clients :"+lcm.nbClients());
		System.out.println(lcm.etatCompte(1));
		System.out.println(lcm.etatCompte(12));
		
		lcm.credit(1, 150000);
		lcm.debit(2, 150000);
		
	}
	
}

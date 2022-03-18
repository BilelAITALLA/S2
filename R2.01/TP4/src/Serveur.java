import java.util.ArrayList;

public class Serveur {
	private ArrayList<Message> lesMessages;
	
	public Serveur() {
		this.lesMessages = new ArrayList<Message>();
	}
	
	public void stocker(Message message) {
		this.lesMessages.add(message);
	}
	
	public ArrayList<Message> messagesRecusPour(String dest) {
		ArrayList<Message> messagesrecus = new ArrayList<Message>();
		for (Message message : lesMessages) {
			if (message.getNomDest().equals(dest)) {
				messagesrecus.add(message);
			}
		}
		return messagesrecus;
	}
}

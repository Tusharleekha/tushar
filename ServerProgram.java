import java.net.*;
import java.io.*;
class ServerProgram
{
	int clientport=10,serverport=20;
	DatagramSocket ds;
	ServerProgram() throws Exception
	{
		ds=new DatagramSocket(serverport);
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        while(true)
        {
        	try{
        	String data=br.readLine();
        	if(data.equals("EXIT"))
        		break;
        	DatagramPacket dp=new DatagramPacket(data.getBytes(),data.length(),InetAddress.getLocalHost(),clientport);
        	ds.send();
        }
        catch(Exception e)
        {}
        }
	}
	public static void main(String args[])
	{
		ServerProgram sp=new ServerProgram();
	}
}
import java.io.*;

public class SimultaneousWriteandRead1 {
    public static void main(String[] args) {
        try {
            //data to write in file using printwriter
            PrintWriter writer=null;
            writer =new PrintWriter("H://test.txt");
            writer.write("oracle and java.");
            writer.flush();
            writer.close();

            //to read data

            FileReader fr=new FileReader(new File("H://test.txt"));
            int i=0;
            while ((i=fr.read())!=-1)
                System.out.print((char)i);
            fr.close();
        }catch (Exception ee)
        {
            ee.printStackTrace();
        }
    }
}

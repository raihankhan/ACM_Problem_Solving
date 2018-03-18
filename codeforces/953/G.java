import java.util.Scanner;


public class No953 {
    public static void main(String[] args) {
        
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        int a,even=0,odd=0,ans = 0;
        for(int i=0;i<n;i++)
        {
            //Scanner inpu=new Scanner(System.in);
            a=input.nextInt();
            if(a%2==1)
            {
                odd++;
            }
            else{
                even++;
            }
        }
        
        if(odd<even)
        {
            ans=odd;
        }
        else ans=even;
        
        odd= odd- ans ;
        
        ans += odd/3 ;
        
            System.out.println(ans);
    
    }
}
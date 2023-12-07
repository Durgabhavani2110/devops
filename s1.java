import java.util.Scanner;
class s1
{
public static void main(String args[])
{
Scanner s=new Scanner(System.in);
System.out.println("Enter a number:");
int a=s.nextInt();
if(a%2==0)
{
System.out.println("Given number is even");
}
else
{
System.out.println("Given number is odd");
}
}
}
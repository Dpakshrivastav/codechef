// {
//Initial Template for Java
import java.util.*;
class GFG
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while(t-- > 0)
        {
            int n = sc.nextInt();
            int arr[] = new int[n];
            
            for(int i = 0; i < n; i++)
             arr[i] = sc.nextInt();
             
            int sum = sc.nextInt();
            Geeks obj = new Geeks();
            System.out.println(obj.sumExists(arr,n,sum)); // prints the required result with new line
        }
    }
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for Java
/* Helper class containing sumExists function
arr[]: array eleemnts
n: size of the array
sum: to check if pair having this sum
*/
class Geeks
{
    // function to check if any pair having specified sum
    // and return 1 if so, else 0
    public static int sumExists(int arr[], int n, int sum)
    {
        HashSet<Integer> m = new HashSet<Integer>();
        for(int i=0; i<n; i++){
            // System.out.print(sum-arr[i]+" ");
            if(sum-arr[i]!=arr[i])
                m.add(sum-arr[i]);
        }
        // System.out.println();
        boolean b=false;
        for(int i=0; i<n; i++){

            if(m.contains(arr[i])) {
                b=true;
                System.out.print(arr[i]+" ");
                break;
            }
        }
        System.out.println();
        Iterator value = m.iterator(); 
        while(value.hasNext()){
            System.out.print(value.next()+" ");
        }
        System.out.println();
        if(b) return 1;
        else return 0;
        
        // your code here
    }
    
}
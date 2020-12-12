
import java.io.*;

class Main {
	public static void main (String[] args) {
	    int n=5;
/*
    	    *#####
            **####
            ***###
            ****##
            *****#
*/
	    int i, j;  
        for(i=n; i>=1; i--) //outer loop for number of rows(n) 
        { 
            for(j=n; j>=i; j--) // inner loop for starts 
            {           
                System.out.print("*"); // printing space
            } 
            for(j=1; j<=i; j++) //  inner loop for columns
            {       
                System.out.print("#"); // print hash
            }           
            System.out.println(); // ending line after each row
        } 
	}
}

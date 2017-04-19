package pkg11;

class Shape  
 {  
      //define a length which is public and can be used in square,   
      //rectangle and circle classes  
      public int length = 10;  
private void display(){
System.out.println("Length:" +length);
}
protected int breadth;
 }  
   
 //inherit the properties of Shape class with the use of extends keyword  
   
 class Square extends Shape  
 {  
      void area()  
      {  
           //calculate area of square  
           int area = length * length;  
   
           //print it on the screen  
           System.out.println("Area of square : "+area);  
      }  
 }  
   
 class Rectangle extends Shape  
 {  
      void area()  
      {  
           //define a breadth  
            breadth = 7;  
           //calculate area of rectangle  
           int area = length * breadth;  
           //print on the screen  
           System.out.println("Area of rectangle : "+area);  
      }  
 }  
   
 class Circle extends Shape  
 {  
      void area()  
      {  
           //calculate area of circle using length of the shape class as radius  
           float area = 3.14f * length * length;  
           //print on the screen  
           System.out.println("Area of circle : "+area);  
      }  
 }  
   
 //make a entry class which contains main method  
public class Main  
 {  
      public static void main(String[] args)  

      {  
	
           //object of child class square  
           Square sq = new Square();  
           //object of child class rectangle  
           Rectangle rec = new Rectangle();  
           //object of child class circle  
           Circle cir = new Circle();  
             
           //call the area methods of all child class to   
           //get the area of different objects  
           sq.area();  
           rec.area();  
           cir.area();  
      }  
 }  
/*
====OUTPUT====
Area of square : 100
Area of rectangle : 70
Area of circle : 314.0
*/

/*
package javatutorial;



/**
04
 * Example class to identify the actual and formal parameters in Java
05
 *
06
 * @author f5java.com
07
 

public class ActualAndFormalParameters {

 

    /**

     * Display the info name, course and grade
12
     

    public void displayMethod (String name, String course, String grade){

        // A. Formal parameters are those defined in method declaration

         

        // Following are the formal parameters of this method

        // 1. formal parameter is name and type is String

        // 2. formal parameter is course and type is String

        // 3. formal parameter is grade and type is String

         

        System.out.println("Name : " + name); // Print details

        System.out.println("Course : " + course);

        System.out.println("Grade : " + grade);

    }

     

     

    public static void main(String[] args) {

        // local variables

        String studentName = "John";

        String studentcourse = "Java Programming Course";

        String studentGrade = "A";

         

        // Instantiate

        ActualAndFormalParameters parameters = new ActualAndFormalParameters();

         

        // B. Actual parameters are the parameters in the method call

         

        // Following are the actual parameters in the method call

        // 1. actual parameter: studentName

        // 2. actual parameter: studentCourse

        // 3. actual parameter: studentGrade



        parameters.displayMethod(studentName, studentcourse, studentGrade); // Method call

         

    }

}
*/
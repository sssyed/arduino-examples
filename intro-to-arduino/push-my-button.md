#Introduction to Arudino Programming
A series of based on New York University's `Introduction to Computer Programming` class from the Courant Institute of Mathematical Sciences.

http://cims.nyu.edu/~kapp/common/CSCI-UA.0002/fall2013/

This is intended as a "gentle" introduction to computer programming and Arduino. No prerequisites required.


### Part 1: `Push my Button`
![Press Any Key to Continue](https://s3.amazonaws.com/lb-spree/spree/products/1339/large/IMG_8511RFLXLR.jpg?1423166125)

We're going to read the value of an input (in this case a button) and print that value out to the **serial monitor**

### The code!

    int button = A0;

    void setup(){

      Serial.begin(9600);
      pinMode(button, INPUT);

    }

    void loop(){

      Serial.println(analogRead(button));

    }

### Variables!

### Expressions!

### Arguments!

### New functions (OH MY!)


### The Expected Outcome!

In your serial monitor, you should be able to see lot's of **0**'s when you're not pushing a button and **1023** when you are.

Think of the button as a dam that is holding back the electricty from your power bit to flow to your Arduino. When the button is pressed the current flows openly at full force (1023). The Arduino has the ability to read the flow of the current coming through.

### 1023? Yeah you know me!

1023 is an **10 bit binary value** all that means is your analogRead input will be either 0 and 1023 when using a button. The Arduino **assigns** a value to the **amount** of current that is coming in through it's **circuit**. Try replacing the the **button** with a **slider** or a **dimmer** and see what happens!

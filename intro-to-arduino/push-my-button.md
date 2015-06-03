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

### The Expected Outcome!

In your serial monitor, you should be able to see lot's of 0's'

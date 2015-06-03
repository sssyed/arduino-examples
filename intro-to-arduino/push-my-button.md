#Introduction to ⧮ Arduino Programming
  A series of based on  New York University's `Introduction to Computer Programming` class from the Courant Institute of Mathematical Sciences.

  http://cims.nyu.edu/~kapp/common/CSCI-UA.0002/fall2013/

  This is intended as a "gentle" introduction to computer programming and Arduino. The only prerequisite is that you've completed our **[Arduino Basic Basics](http://https://github.com/sssyed/arduino-examples/blob/master/intro-to-arduino/getting-started.md)** guide!


### Part `1`: Push my Button~~s~~
  ![Press Any Key to Continue](https://s3.amazonaws.com/lb-spree/spree/products/1339/large/IMG_8511RFLXLR.jpg?1423166125)

  We're going to read the value of an input (in this case a button) and print that value out to the **serial monitor**

  We'll be picking up the following skills:
  - learning about programming basics
  - setting pin `modes`
  - reading `input` values
  - setting `output` values


##Equipping your coding utility belt.

As we start writing more complex programs with our Arduino we'll need to expand our coding vocabulary. Here's some terms you'll need in your
utility belt:

### "What `type` of person doesn't like pizza?"
  🍕

  We've seen them, but haven't really talked about `types`. You've seen the keyword `void` in front of our `setup()` and `loop()` functions. If you remember back in our `arduino basics` we put our code inside of each function.

    void loop(){

    }

    void setup(){

    }

  `void` is a kind of type, think of types like different states of matter. You have a liquid types (milkshakes) and a solid type (pizza), in computer programming you have things like `numbers` and `strings`. The numbers are, well, numbers. The most common number we will deal with are `integers`, whole numbers that can be negative or positive (up to a point).




### "Chill out, it's just an `expression`!"

We've already been using these left and right! Expressions are evaluated by the Arduino and can be `functions`, `strings`(text), `numbers`, or Mathematical operations like `2 + 2`. We've seen it in our own code like the `hello littleWorld!` in `Serial.println()`. Note the quotation marks!

     Serial.begin("hello littleWorld!");


### "Let's not get into an argument"

![lol](http://www.ask-gratitude.com/images/argument5.jpg)

We've also been doing this all day long and it's not as antagonistic as it sounds. Arguments are just `expressions` that are `passed` into `functions`. Say what?! Let's look at our gold old buddy Serial.begin again.

    Serial.begi()

### New functions (OH MY!)

### Variables



### Keep your comments in your pocket

### On to the code!

    int button = A0;

    void setup(){

      Serial.begin(9600);
      pinMode(button, INPUT);

    }

    void loop(){

      Serial.println(analogRead(button));

    }

### The Expected Outcome!

In your serial monitor, you should be able to see lot's of **0**'s when you're not pushing a button and **1023** when you are.

Think of the button as a dam that is holding back the electricty from your power bit to flow to your Arduino. When the button is pressed the current flows openly at full force (1023). The Arduino has the ability to read the flow of the current coming through.

### 1023? Yeah you know me!

1023 is an **10 bit binary value** all that means is your analogRead input will be either 0 and 1023 when using a button. The Arduino **assigns** a value to the **amount** of current that is coming in through it's **circuit**. Try replacing the the **button** with a **slider** or a **dimmer** and see what happens!

###Part `2`: You light up my life

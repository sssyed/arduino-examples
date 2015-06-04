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

  ![bat dance](http://vignette4.wikia.nocookie.net/batman60stv/images/b/be/BatmanBelt.jpg)


As we start writing more complex programs with our Arduino we'll need to expand our coding vocabulary. Here's some terms you'll need in your
utility belt:

### "What `type` of person doesn't like pizza?"
  🍕

  We've seen them, but haven't really talked about `types`. You've seen the keyword `void` in front of our `setup()` and `loop()` functions. If you remember back in our `arduino basics` we put our code inside of each function.

    void loop(){

    }

    void setup(){

    }

  `void` is a kind of type, think of types like different states of matter. You have a liquid types (milkshakes) and a solid type (pizza 🍕), in computer programming you have things like `numbers` and `strings`. The numbers are, well, numbers. The most common number we will deal with are `integers`, whole numbers that can be negative or positive (up to a point).



  Now `strings` are a "sequence of characters", for example: "abc" are a string of three characters. You've seen this before back in elementray days!

  ![abc123](http://cdn.shopify.com/s/files/1/0327/2129/products/Littlephant_Alphabet_1024_1024x1024.jpg)


  They are usually surrounded by double quotes (bunny ears if you will): "I LOVE PIZZA" .


### "Chill out, it's just an `expression`!"

  We've already been using these left and right! Expressions are evaluated by the Arduino and can be `functions`, `strings`(text), `numbers`, or Mathematical operations like `2 + 2`. We've seen it in our own code like the:

      "hello littleWorld!"`

  inside of `Serial.println()`. Note the quotation marks!


### "Let's not get into an argument"

  ![argv](http://www.ask-gratitude.com/images/argument5.jpg)

  We've also been doing this all day long and it's not as antagonistic as it sounds. Arguments are just `expressions` that are `passed` into `functions`. Say what?! Let's look at our good old buddy `Serial.begin()` again.

    Serial.begin(9600);

  The **expression** 9600 is being **passed** into Serial.begin(). In this case that number set's how fast we're going to communicate to the Arduino. In the case of Serial.println() the **expression** is **"hello littleWorld"**.

### On the new stuff!!
  Ok so we've equipped our bat belt with all the trusty tools we've used before. Now let's get to the new stuff!!

  The program we will be coding this time around will be using a **button**. When the button is pressed we will see a bunch of values in our **serial monitor**. Let's start coding!

  Quick review:

  - data types are just different kinds of data. The Arduino needs to know if we're using **numbers** or a string of **charactrs**
  - expressions are just **numbers** or a  



### On to the code!

    int button = A0;

    void setup(){

      Serial.begin(9600);
      pinMode(button, INPUT);

    }

    void loop(){

      Serial.println(analogRead(button));

    }

### New stuff!
  You'll notice that there are a few new lines of



### New functions / commands for the Arduino (OH MY!)



### Keep your comments in your pocket

### The Expected Outcome!

  In your serial monitor, you should be able to see lot's of **0**'s when you're not pushing a button and **1023** when you are.

  Think of the button as a dam that is holding back the electricity from your power bit to flow to your Arduino. When the button is pressed the current flows openly at full force (1023). The Arduino has the ability to read the flow of the current coming through.

### 1023? Yeah you know me!

  1023 is an **10 bit binary value** all that means is your analogRead input will be either 0 and 1023 when using a button. The Arduino **assigns** a value to the **amount** of current that is coming in through it's **circuit**. Try replacing the the **button** with a **slider** or a **dimmer** and see what happens!

###Part `2`: You light up my life

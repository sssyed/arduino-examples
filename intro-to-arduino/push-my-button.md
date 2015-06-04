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

  inside of `Serial.println();`. Note the quotation marks!


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

### And the circuit!

  hook-up a `P1 power bit` to a `button` and into the `a0` bitsnap.

### New stuff!

  You'll notice that there are some lines of code you haven't seen before. Let's check them out!

### Variable: Buckets and buckets of data

  Variables! Our first line of code is a `variable` in this case a number or `integer` that is assigned or given the name `button`. You can name it whatever you want but just don't start the name with numbers or have spaces. If you need spaces use underscores for now.

    int button = A0;

  You'll notice that we're using A0, if you check out the circuit we just buil that there is a bit snap labeled `a0`. That's the bitsnap we'll be using for our `INPUT`.

  ![mahbucket](http://4.bp.blogspot.com/-TNx3jC0imfw/Ui-rqAR9FhI/AAAAAAAAACE/cmqUf2JGqiY/s1600/bucket.png)
  src: khan academy

  In it's most primitive sense Variables are labeled buckets of data that let us "hold" on to `numbers` or `strings` or other kinds of `expresssions`. Meaning that if you wanted to reuse the number `9600` but call it something like `speed_limit` so it's more "human readable" then you would use a variable. For example:

    String message = "I'd love a slice of pizza today";


    Serial.printn(message);

  We just `assigned` our pizza loving string to a `variable` called message.


### State your case!

  One more detail to cover as we move on to the   to even more tasty concepts. Each time we `assign` a variable it's called a `statement`. Cause they `state` of a program, we'll talk about them in detail in the future.


### New functions / commands for the Arduino (OH MY!)
Let's check out pinMode()

    pinMode(button, INPUT)

We know it's a function because it has `()` at the end of it and we know it takes `two` `arguments` the first being `button` that is a `variable` (which we assigned to A0) and a `mode ` that's either `INPUT` (like a `button` or `slider`) or `OUTPUT` like a `bargraph`.

  On to analogRead()


    analogRead(button)

  Now you'll notice we're encountering another function, this one is especially important it let's the Arduino tell us if a button has been pressed or not.

### Let's flash our Arduino! (no, not that kind of flashing)

Once you've typed up the sample code, hit the upload button found in the tool bar. It looks like this: ![❤](http://arduino.cc/en/uploads/Guide/export.png)

![❤](https://raw.githubusercontent.com/Makeblock-official/XY-Plotter-2.0/master/images/Upload.png)

This will `flash` the memory in our Arduino so it can run our program!


### The Expected Outcome!

  [pic]

  In your serial monitor, you should be able to see lot's of **0**'s when you're not pushing a button and **1023** when you are.

  Think of the button as a dam that is holding back the electricity from your power bit to flow to your Arduino. When the button is pressed the current flows openly at full force (1023). The Arduino has the ability to read the flow of the current coming through.

### 1023? Yeah you know me!

  1023 is an **10 bit binary value** all that means is your analogRead input will be either 0 and 1023 when using a button. The Arduino **assigns** a value to the **amount** of current that is coming in through it's **circuit**. Try replacing the the **button** with a **slider** or a **dimmer** and see what happens!

### You made it!!!

  Congrats we're one step closer to being Arduino pros!

  Here's an emoji for all your hard work: 🎉

  On to the next tutorial: you light up my life.

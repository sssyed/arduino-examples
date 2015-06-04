#Arduino Basics

  So you've just unboxed your shiny new littleBits Arduino module and would like to get into the fabulous world of Computer Programming. Or you're already an experienced programmer and want dip your toe into coding an Arduino, we'll be covering how you can get from 0 - 💯 in no time.


  ![❤](http://arduino.cc/en/uploads/ArduinoAtHeart/ArduinoAtHeart_logo.png)

###What does the Arduino module do anyway?

  In short the littleBits Arduino at ❤ module enables you to **learn programming**, code physical **games**, and connect your littleBits modules to pretty much **any software** running on your computer.

###How does it work?

  Think of the Arduino as a little baby computer without any knowledge of the world. Using the **Arduino IDE* ** we teach (`program`) our little baby computer to **touch** (`output`) and **feel** (`input`).


  ![❤](http://blogs.swa-jkt.com/swa/10307/files/2013/02/Screen-Shot-2013-02-14-at-7.51.55-AM.png)

### * ID what?!

  To **program** the Arduino we need special software that let's us connect to the Arduino and **code**. *IDE* stands for **Integrated Development Environment**. Let's break down the jargon.

  **Development** stands for software development or **coding** so we know that this will let us create our own **programs**.

  Environment is exactly what it means humans exist in a environment that's made up of oxygen and water + lots of other stuff, things we need to live off of. In **programming** an environment includes all the things we need to code our Arduino in it's little Arduino world.

  **Integrated**! It's all one place, once  you downloaded and install the stuff

  If you'd like to learn more I highly recommend reading the [documentation](http://www.arduino.cc/en/Guide/Environment) on the Arduino Development Environment

### Let's get our hands programmy

  So to get started we need to download the **Arduino IDE** you can find it [here](http://www.arduino.cc/en/Main/Softwarehere)!

  One we've done that now grab our **p1 power bit** (blue), our Arduino (orange) and a **USB cable**. Make sure you've turned on your power bit and plugged in your USB cable. The cable will transfer our code to the Arduino.

![❤](http://cdn.instructables.com/F80/7PTZ/HXLDB6DH/F807PTZHXLDB6DH.MEDIUM.jpg)

### It's... ALIVE (almost)

  Ok now our Arduino won't do much because just like our friend frankenstein we'll need to give it some code to work. BUT before we can do that there's one more step. We need to tell the **IDE** what Arduino we're using and how we're communicating with it. So that means selecting our **board** which is based off of the Arduino **Leonardo** as well as selecting the pipe or **port** we'll be send our code through. Which is “tty.usbmodem…” for Mac, “cu.usbmodem…” for Windows.

  ![❤](http://www.pubnub.com/blog/wp-content/uploads/2015/03/arduino-1.gif)

### Flipping the programming switch

  Ok now we need to check everything is order we press the ![❤](http://arduino.cc/en/uploads/Guide/export.png) and hopefully you'll see some lights flash on your Arduino and we'll have our very first program **flashed** on to our Arduino.

  The Arduino is equipped with a tiny bit of **memory** that allows it to save our program so when we unplug the device and turn it back on it will run program that was last uploaded.

  **If things go wrong** don't fear, let's do a little **troubleshooting** (needs video):
  - Try restarting your computer.
  - Unplug your Arduino and plug it back in.
  - Make sure the right **port** and **board** are selected.
  - If all else fails check out our in-depth **troubleshooting guide**

### Brainsss

  Now just like our friend frankenstein we need to load software in to our Arduino's baby brain so it can do something. So let's get get some code in there!

    void setup() {  

      Serial.begin(9600);

    }

    void loop() {

      Serial.println("hello littleWorld!");

    }

### Wat?

  Ok so we're learning how to code now and the way we can teach our Arduino to do things is we need to speak to it in it's **language** and just like learning any new language we need to learn the rules of that language. In computer programming those rules are called **syntax**.

### The rules of the road

  Firstly you'll notice that the words **void setup**

    void setup()

  and **void loop** are **highlighted**.

    void loop()


  This is called **syntax highlighting** it means those words are special **keywords** that give the Arduino a specific command. **void setup** is a **function**, a function is a lot like a **blender** it takes in some ingredients and gives us something delicious like so:

  ![❤](http://upload.wikimedia.org/wikipedia/commons/thumb/3/3b/Function_machine2.svg/220px-Function_machine2.svg.png)


  In addition to the name of the function we need to tell the Arduino what kind or **type** of function we want, in this case we'll be using **void**. We won't do a deep dive into **types** of functions (yet!) but just know that they come before **setup()** and **loop()**.

### What's in a name?

  Now that we've told the Arduino the **type** of our function, we need the rest of the function. Just like  **setup**'s name implies it helps us setup our program.

  And just like we need a mouth to speak, the code to **setup** our program will allow our Arduino to speak.

    void setup() {  

    }


  The section after the parentheses **()**

  and in between the curly braces **{ }**

   is where we will write our first line of code that will enable the Arduino to talk to us.

   it's called **Serial.begin()**.

    void setup() {  

      Serial.begin(9600);

    }


**Serial** is a command that defines how we'll be communicating to our computer.

###Serial? As much fun as Cereal but with out the sugar!

  We have a pipe between our computer and the Arduino which is our USB cable but we need to tell the computer what will be running through that pipe, water? oil?

  In this case we're using **Serial** no not the stuff you eat but a form of communication that let's us **speak** to the Arduino. Kind of like the sounds that come out of our mouths.

  **.begin(9600)** tells the Arduino to start the communication. You'll notice that there is a **dot** that separate's Serial and begin that is yet another syntax rule. Don't worry you'll remember all of this as you keep coding!

  The **9600** tells the Arduino how fast it should talk to us. For most of the most part **9600** for what we're going to be doing.

  NOTE: Right after our **function name** we have two **parentheses** every function has them just like you have a **type** and a **name**. Think of it as a **punctuation** mark. More on that in a bit.

  Our second command is the **loop()** just like it implies it runs code over and over again. Just like like our circulatory system is a loop, the code inside of the **loop** is pumped through our program. In this case we're pumping code through the Arduino's veins. **Serial.println("hello littleWorld!");** is the command that we us to tell the Arduino to **speak**. Inside of the double quotes is where we put our message!

### Let's fire it up!

  Once you've typed up the sample code, hit the upload button found in the tool bar. It looks like this: ![❤](http://arduino.cc/en/uploads/Guide/export.png)

  ![❤](https://raw.githubusercontent.com/Makeblock-official/XY-Plotter-2.0/master/images/Upload.png)

### The Expected Outcome!

[pic]

### Why you bugging?

####In case you're seeing errors like this:

![❤](https://startingelectronics.org/software/arduino/learn-to-program-course/01-program-structure-flow/compile-error.jpg)

Most common errors when you first program are **syntax** errors ! Remember that

    Serial.begin(9600);

Needs a semicolon at the end of a **statement**

and that you need you need type your code in the right **functions** between the **{ }** curly braces.

**uploading errors!**

  - like a mentioned before this should not take more then a few mins.

### Change your message!

Each time you make changes to your code don't forget to upload.


###Why we do the things we do.

This code is an example of how you can communicate with your Arduino. And use that to talk to other programs on your computer like proccessing...etc.

### You made it!!!

  Congrats we're one step closer to being Arduino pros!

  Here's an emoji for all your hard work: 🎊

###TL;DR
- install [this](http://www.arduino.cc/en/Main/Softwarehere)!
- choose the right Arduino board and port
![❤](http://www.pubnub.com/blog/wp-content/uploads/2015/03/arduino-1.gif)
- power **and** hook-up the Arduino to your computer.
![❤](http://cdn.instructables.com/F80/7PTZ/HXLDB6DH/F807PTZHXLDB6DH.MEDIUM.jpg)
- type in the sample code, then hit upload ![❤](http://arduino.cc/en/uploads/Guide/export.png)
      void setup() {  
        Serial.begin(9600);
      }
      void loop() {
        Serial.println("hello littleWorld!");
      }
- and check out your message in the [serial monitor](http://www.arduino.cc/en/Guide/Environment#serialmonitor)  ![❤](http://arduino.cc/en/uploads/Guide/serial_monitor.png).
- if you have trouble try restarting your computer, or reseting your Arduino by unplugging and replugging it. Look for syntax errors, the line number is on the bottom left and printed in the **console**

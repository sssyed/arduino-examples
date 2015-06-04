#Introduction to ⧮ Arduino Programming
  A series of based on  New York University's `Introduction to Computer Programming` class from the Courant Institute of Mathematical Sciences.

  http://cims.nyu.edu/~kapp/common/CSCI-UA.0002/fall2013/

  This is intended as a "gentle" introduction to computer programming and Arduino. The only prerequisite is that you've completed our **[Arduino Basic Basics](http://https://github.com/sssyed/arduino-examples/blob/master/intro-to-arduino/getting-started.md)** guide!

  ### Part `1`: You light up my life.

  Ok as we level up our skills we'll talk less and code more!

  This program will let us light up our `bargraph bit` and check out some new functions

  ### The code!

    int bargraph = 5;

    void setup(){

      Serial.begin(9600);
      pinMode(bargraph, OUTPUT);

    }

    void loop(){

      analogWrite(bargraph, 1023);

    }

  ### Output!
  So our best friend `INPUT` has an a twin name `OUTPUT` and as you can guess it let's us send `current` to our bitsnap `d5`. Other output bits are `d1`, `d5`, and `d9`.

  1) We set our pinMode() to

        pinMode(bargraph, OUTPUT);

  2) Then let's "write" our output to our bit!

    analogWrite(bargraph, 1023);

  One key thing to note is that our `bargraph` `variable` is an `integer` that is `assigned` to just `5` NOT `d5`.

  ### Let's flash our Arduino! (no, not that kind of flashing)

  Once you've typed up the sample code, hit the upload button found in the tool bar. It looks like this: ![❤](http://arduino.cc/en/uploads/Guide/export.png)

  ![❤](https://raw.githubusercontent.com/Makeblock-official/XY-Plotter-2.0/master/images/Upload.png)

  This will `flash` the memory in our Arduino so it can run our program!

  ### All of the lights

  [pic]

  You should be seeing your bargraph light up!

  ### You made it!!!

  Congrats we're one step closer to being Arduino pros!

  Here's an emoji for all your hard work: 🎆

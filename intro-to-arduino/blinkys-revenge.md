#Introduction to ⧮ Arduino Programming
  A series of based on  New York University's `Introduction to Computer Programming` class from the Courant Institute of Mathematical Sciences.

  http://cims.nyu.edu/~kapp/common/CSCI-UA.0002/fall2013/

  This is intended as a "gentle" introduction to computer programming and Arduino. The only prerequisite is that you've completed our **[Arduino Basic Basics](http://https://github.com/sssyed/arduino-examples/blob/master/intro-to-arduino/getting-started.md)** guide!

  ### Part `1`: Blinky's revenge.

  Ok as we level up our skills we'll talk less and code more!

  This program will let us light up our `bargraph bit` and make it BLINK.

  ### The code!

    int bargraph = 5;

    void setup(){

      Serial.begin(9600);
      pinMode(bargraph, OUTPUT);

    }

    void loop(){

      analogWrite(bargraph, 0);
      delay(1000);
      analogRead(bargraph, 1023);


    }

  ### Do~~n't~~ Delay!

  So since we're pros at INPUT and OUTPUT. Now let's start stretching our coding chops!

  So in order to make our bargraph blink, we will need turn it off and on. Since are our Arduino is really fast, we need to add a function called `delay()` and pass in a `number` (in this case a `integer`) that will stop our program for however many milliseconds we like. We've set it at `1000` feel free to change that number and play around with it!


  1) We set our analogWrite() function to `0`, turning our bargraph off.

    analogWrite(bargraph, 0);


  2) Let's add some delay!

    delay(1000);

  3) Then we turn on our bargraph by setting the number to 1023.

    analogWrite(bargraph, 1023);

  4) profit

  One key thing to note is that our `bargraph` `variable` is an `integer` that is `assigned` to just `5` NOT `d5`.

  ### Let's flash our Arduino! (no, not that kind of flashing)

  Once you've typed up the sample code, hit the upload button found in the tool bar. It looks like this: ![❤](http://arduino.cc/en/uploads/Guide/export.png)

  ![❤](https://raw.githubusercontent.com/Makeblock-official/XY-Plotter-2.0/master/images/Upload.png)

  This will `flash` the memory in our Arduino so it can run our program!

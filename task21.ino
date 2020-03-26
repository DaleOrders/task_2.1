// ------------
// Blink an LED
// ------------

/*-------------




// First, we're going to make some variables.
// This is our "shorthand" that we'll use throughout the program:

int led1 = D7; // Instead of writing D0 over and over again, we'll write led1
// You'll need to wire an LED to this one to see it blink.


void setup() {

	// We are going to tell our device that D7 is going to be output
	// (That means that we will be sending voltage to them, rather than monitoring voltage that comes from them)

	// It's important you do this here, inside the setup() function rather than outside it or in the loop function.

	pinMode(led1, OUTPUT);

}

// Next we have the loop function, the other essential part of a microcontroller program.
// This routine gets repeated over and over, as quickly as possible and as many times as possible, after the setup function is called.
// Note: Code that blocks for too long (like more than 5 seconds), can make weird things happen (like dropping the network connection).  The built-in delay function shown below safely interleaves required background activity, so arbitrarily long delays can safely be done if you need them.

void loop() {
	// To blink the LED, first we'll turn it on...

    //D
    //long blink
    digitalWrite(led1, HIGH);
	delay(3000);
	digitalWrite(led1, LOW);
	delay(1000);
	
    //short blink
	digitalWrite(led1, HIGH);
	delay(1000);
	digitalWrite(led1, LOW);
	delay(1000);
	
	//shortblink
	digitalWrite(led1, HIGH);
	delay(1000);
	digitalWrite(led1, LOW);
	delay(1000);
	
	//A
	
    //shortblink
	digitalWrite(led1, HIGH);
	delay(1000);
	digitalWrite(led1, LOW);
	delay(1000);
	
	//long blink
    digitalWrite(led1, HIGH);
	delay(3000);
	digitalWrite(led1, LOW);
	delay(1000);
	
	//L
	//shortblink
	digitalWrite(led1, HIGH);
	delay(1000);
	digitalWrite(led1, LOW);
	delay(1000);
	
	//long blink
    digitalWrite(led1, HIGH);
	delay(3000);
	digitalWrite(led1, LOW);
	delay(1000);
	
	//shortblink
	digitalWrite(led1, HIGH);
	delay(1000);
	digitalWrite(led1, LOW);
	delay(1000);
	
	//shortblink
	digitalWrite(led1, HIGH);
	delay(1000);
	digitalWrite(led1, LOW);
	delay(1000);
	
	//E
	//shortblink
	digitalWrite(led1, HIGH);
	delay(1000);
	digitalWrite(led1, LOW);
	delay(1000);

	// And repeat!
}

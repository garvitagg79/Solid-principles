abstract class Bird {
  abstract info(): void;
}

class FlyingBird extends Bird {
  fly(): void {
    console.log("Flying...");
  }
}

class Sparrow extends FlyingBird {
  info(): void {
    console.log("I am a sparrow.");
  }
}

class Penguin extends Bird {
  info(): void {
    console.log("I am a penguin. I can't fly.");
  }
}

const sparrow = new Sparrow();
sparrow.fly(); // Output: Flying...
sparrow.info(); // Output: I am a sparrow.

const penguin = new Penguin();
penguin.info(); // Output: I am a penguin. I can't fly.

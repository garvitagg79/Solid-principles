class Bird {
  fly(): void {
    console.log("Flying...");
  }
}

class Penguin extends Bird {
  fly(): void {
    console.log("I can't fly!"); 
  }
}

function makeBirdFly(bird: Bird) {
  bird.fly();
}

const sparrow = new Bird();  
const penguin = new Penguin();

makeBirdFly(sparrow);  // Output: Flying...
makeBirdFly(penguin);  // Output: I can't fly! (unexpected behavior)
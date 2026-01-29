// JavaScript program demonstrating closures and scope

function outerFunction(outerVariable) {
    // This is the enclosing function scope
    return function innerFunction(innerVariable) {
        // This is the inner function scope
        return outerVariable + innerVariable;  // Accessing outer variable
    }
}

// Create a closure by passing a value to the outer function
const closure = outerFunction(10);
const result = closure(5);  // The inner function is executed, using both outer and inner variables
console.log("Closure result in JavaScript:", result);

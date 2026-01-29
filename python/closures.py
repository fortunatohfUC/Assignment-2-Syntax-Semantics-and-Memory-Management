# Python program demonstrating closures and scope

def outer_function(outer_variable):
    # This is the enclosing function scope
    def inner_function(inner_variable):
        # This is the inner function scope
        return outer_variable + inner_variable  # Accessing outer variable
    return inner_function  # Returning the inner function

# Create a closure by passing a value to the outer function
closure = outer_function(10)
result = closure(5)  # The inner function is executed, using both outer and inner variables
print("Closure result in Python:", result)

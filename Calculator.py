def calculator():
    """A simple calculator that can perform basic arithmetic operations."""

    while True:
        print("Enter an expression (or 'quit' to exit):")
        expression = input()

        if expression.lower() == 'quit':
            break

        try:
            result = eval(expression)
            print("Result:", result)
        except Exception as e:
            print("Error:", e)

if __name__ == "__main__":
    calculator()

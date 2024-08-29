function calculate(operator, num1, num2) {
  switch (operator) {
    case '+':
      return num1 + num2;
    case '-':
      return num1 - num2;
    case '*':
      return num1 * num2;
    case '/':
      if (num2 === 0) {
        throw new Error('Division by zero is not allowed.');
      }
      return num1 / num2;
    default:
      throw new Error('Invalid operator.');
  }
}

function main() {
  const operators = ['+', '-', '*', '/'];

  while (true) {
    const num1 = parseFloat(prompt('Enter the first number:'));
    const operator = prompt('Enter the operator (+, -, *, /):');
    const num2 = parseFloat(prompt('Enter the second number:'));

    if (!operators.includes(operator)) {
      console.log('Invalid operator.');
      continue;
    }

    try {
      const result = calculate(operator, num1, num2);
      console.log('Result:', result);
    } catch (error) {
      console.error(error.message);
    }

    const continueCalculation = prompt('Do you want to continue? (yes/no)');
    if (continueCalculation.toLowerCase() !== 'yes') {
      break;
    }
  }
}

main();

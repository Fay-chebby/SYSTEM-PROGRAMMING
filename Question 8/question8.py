def closest_square(number):
    """
    Finds the closest integer with a whole number square root for a given positive integer.

    Args:
        number: A positive integer.

    Returns:
        The closest integer with a whole number square root.
    """

    # Handle invalid input (non-positive integer)
    if number <= 0:
        return "Invalid input: Please enter a positive integer."

    # Find the square root
    root = int(number ** 0.5)

    # Check if the square root is a perfect square
    if root * root == number:
        return root * root  # Return the perfect square itself

    # Compare distances to perfect squares
    distance_left = number - (root * root)
    distance_right = ((root + 1) * (root + 1)) - number

    # Return the closest perfect square
    if distance_right < distance_left:
        return (root + 1) * (root + 1)
    else:
        return root * root

# Get user input
number_str = input("Enter a positive integer: ")

try:
    number = int(number_str)
    closest_integer = closest_square(number)
    print(f"The closest integer with a whole number square root for {number} is {closest_integer}")
except ValueError:
    print("Invalid input: Please enter a positive integer.")

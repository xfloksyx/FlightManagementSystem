# FlightManagementSystem
Flight Management System

The project is a flight management system developed in C++ by Marouane El Hizabri. Its primary objective is to facilitate basic flight management tasks such as adding, deleting, and modifying passenger, aircraft, and flight data. Additionally, it supports searching for specific details such as flights by date or passengers by age. The system is designed to provide a straightforward command-line interface for interacting with the flight management functionalities.

Classes: 

1. *Passager*: Represents passengers with attributes like name, age, and ID. It offers functionalities for displaying and modifying passenger details.

2. *Avion*: Represents aircraft with features such as ID, model, and capacity. It includes methods for viewing and updating aircraft information.

3. *Date*: Represents dates with fields for day, month, and year, likely used for flight departure and arrival dates.

4. *Vol*: Represents flights, incorporating attributes like aircraft, passengers, departure and arrival dates, origin, destination, and flight ID. It provides functionalities for displaying and modifying flight details, as well as managing passenger lists.

5. *managementSystem*: Acts as the central hub for managing passengers, aircraft, and flights. It maintains collections of passengers, aircraft, and flights and offers methods for adding, deleting, searching, and displaying them.


The project employs several key programming concepts and techniques to implement a functional flight management system:

1. **Object-Oriented Programming (OOP)**: The entire system is built using OOP principles, with classes such as `Passager`, `Avion`, `Vol`, and `managementSystem`. Each class encapsulates data and behavior relevant to its respective entity, promoting modularity, reusability, and maintainability.

2. **Encapsulation**: Data members of classes are declared as private, encapsulating them within the class and restricting direct access from outside. Access to these members is provided through public member functions, ensuring data integrity and abstraction.

3. **Inheritance**: While not explicitly shown in the provided code snippets, inheritance could be utilized to establish relationships between classes, such as a base `Vehicule` class from which `Avion` and `Passager` classes inherit common properties and behaviors.

4. **Composition**: The `Vol` class demonstrates composition by containing objects of other classes such as `Avion` and `Passager`. This allows the `Vol` class to model the relationship between flights, aircraft, and passengers effectively.

5. **Vector**: The project utilizes the `std::vector` container to store collections of objects such as passengers, aircraft, and flights. Vectors offer dynamic resizing and efficient element access, making them suitable for managing variable-sized lists of objects.

6. **Input/Output Handling**: The system interacts with users through standard input and output streams (`std::cin` and `std::cout`). Users can input data to add or modify passengers, aircraft, or flights, and the system provides informative output to display relevant information or error messages.

7. **Conditional Statements and Loops**: Control structures such as `if` statements and loops (`for`, `while`) are used extensively to implement functionalities like searching for passengers or flights based on certain criteria, modifying data, and iterating over collections.

8. **Error Handling**: The system includes basic error handling mechanisms to manage invalid user inputs or handle exceptional cases. For instance, it checks for invalid dates when modifying flight details and provides feedback to users accordingly.



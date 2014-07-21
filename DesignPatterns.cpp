using namespace std;
#include <iostream>
#include <stdio.h>
#include <string.h>

string getAName(bool displayDefinition)
{
	int randomNumber = rand() % 13;

	string vocab;
	string definition;

	switch (randomNumber) {
		case 0:
			definition = "Defines a one-to-many dependency between objects so that when one object changes state, all of its dependents are notified and updated automatically.";
			vocab = "Observer";
			break;
		case 1:
			definition = "Attaches additional responsibilities to an object dynamically. Proves a flexible alternative to subclassing for extending functionality.";
			vocab = "Decorator";
			break;
		case 2:
			definition = "Defines the skeleton of an algorithm in a method, deferring some steps to subclasses. Lets subclasses redefine certain steps of an algorithm without changing the algorithm’s structure.";
			vocab = "Template Method";
			break;
		case 3:
			definition = "Divides a given software application into three interconnected parts, so as to separate internal representations of information from the ways that information is presented to or accepted from the user. ";
			vocab = "Model - View - Controller";
			break;
		case 4:
			definition = "Ensures a class has only one instance, and provides a global point of access to it.";
			vocab = "Singleton";
			break;
		case 5:
			definition = "Allows you to compose objects into tree structures to represent part-whole hierarchies. Lets clients treat individual objects and compositions of objects uniformly.";
			vocab = "Composite";
			break;
		case 6:
			definition = "Defines a family of algorithms, encapsulates each one, and makes them interchangeable. Lets the algorithm vary independently from clients that use it.";
			vocab = "Strategy";
			break;
		case 7:
			definition = "Defines an interface for creating an object, but lets subclasses decide which class to instantiate. Lets a class defer instantiation to subclasses.";
			vocab = "Factory Method";
			break;
		case 8:
			definition = "Provides a way to access the elements of an aggregate object sequentially without exposing its underlying representation.";
			vocab = "Iterator";
			break;
		case 9:
			definition = "Converts the interface of a class into another interface clients expect. Lets classes work together that couldn’t otherwise because of incompatible interfaces.";
			vocab = "Adaptor";
			break;
		case 10:
			definition = "Encapsulates a request as an object, thereby letting you parameterize other objects with different requests, queue or log requests, and support undoable operations.";
			vocab = "Command";
			break;
		case 11:
			definition = "Separates an algorithm from an object structure on which it operates. Offers the ability to add new operations to existing object structures without modifying those structures.";
			vocab = "Visitor";
			break;
		case 12:
			definition = "Provides an interface for creating families of related or dependent objects without specifying their concrete classes.";
			vocab = "Abstract Factory";
			break;
		default:
			cout << "Error? need to do it over again.";
			break;
	}
	if (displayDefinition)
	{
		cout << definition;
		cout << endl;
	}

	return vocab;
}

string get3PossibleSolutions(string answer)
{
	string first;
	string second;
	string third;
	do
	{
		first = getAName(false);
		second = getAName(false);
		third = getAName(false);		
	} while (first.compare(answer) && second.compare(answer) && third.compare(answer));
	return first + " \n" + second + " \n" + third;

}


int main(int argc, char ** argv)
{
	srand(time(NULL));

	string inputVocab = "nothing in particular";
	string vocab = "nothing in particular";
	vocab = getAName(true);

	for (;;)
	{		
		cout << "Please enter your guess: ";
		getline(cin, inputVocab);
		
	
		if (inputVocab == "help")
		{
			cout << "Possible Solutions:\n";
			cout << get3PossibleSolutions(vocab) << endl;
		}
		else if (inputVocab == vocab)
		{
			cout << "Correct!" << endl << endl;
			vocab = getAName(true);
		}
		else if (inputVocab == "quit")
			break;
		else
		{
			cout << "Incorrect, the answer is " << vocab << endl;
			cout << "Your answer: " << inputVocab << endl << endl;
			vocab = getAName(true);
		}
	}
}
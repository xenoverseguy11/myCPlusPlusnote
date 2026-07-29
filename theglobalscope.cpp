/*
GLOBAL SCOPE
*/

int x{ 5 }; // is part of the global scope(or global namespace)
int o; // also part of global scope
int baba(int p); // is part of global scope

int main()
{
	int l{ 5 }; // Is a local variable
}

/*
SUMMARY
*/

//ANYTHING THAT IS DECLARED OR DEFINED IN THE GLOBAL SCOPE IS GLOBAL
//IT IS DISCOURAGED TO PUT VARIABLES ON THE GLOBAL SCOPE, BECAUSE OF NAMING COLLISIONS
//VARIABLES,FUNCTIONS,CLASSES,OR MOST THINGS ON THE GLOBAL SCOPE HAVE LONGER LIFETIME THAN LOCAL ONES

double suma(double a, double b) {
	return a+b;
}

double roznica(double a, double b) {
	return a-b;
}

double iloczyn (double a, double b) {
	return a*b;
}

double iloraz (double a, double b) {
	if (b!=0) return a/b;
	else {
		std::cout << "Blad! Nie mozna dzielic przez 0!" << std::endl;
		return 0.;
	}
}

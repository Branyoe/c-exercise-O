Proceso problema3
	Escribir "escribe 3 numeros";
	definir a,b,c Como Entero;
	Leer a,b,c;
	Si a > b Entonces
		Si b > c Entonces
			Escribir a," ",b," ",c;
		SiNo
			Escribir a," ",c," ",b;
			Si c > a Entonces
				Escribir c," ",a," ",b;
			FinSi
		FinSi
	SiNo
		Si a > c Entonces
			Escribir b," ",a," ",c;
		SiNo
			Escribir b," ",c," ",a;
			Si c > b Entonces
				Escribir c," ",b," ",a;
			FinSi
		FinSi
	FinSi
FinProceso

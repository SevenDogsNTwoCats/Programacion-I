%limpiar variables y ventana
clear
clc
%crear una variable x
syms x;
%Pedir ecuacion
printf('Analizar funcion del tipo f(x)=a^(bx+c)+d \n')
do
a=input('ingrese a:');
until(a!=1);
do
b=input('ingrese b:');
until(b!=0);
c=input('ingrese c:');
d=input('ingrese d:');
f(x)=a^(b*x+c)+d
%crecimiento
if(a>0)
  if(b>0)
  printf('\nLa funcion es creciente.');
  t=1;
  else
  printf('\nLa funcion es decreciente.');
  t=2;
  endif
else
  if(b<0)
  printf('\nLa funcion es creciente.');
  t=3;
  else
  printf('\nLa funcion es decreciente.');
  t=4;
  endif
endif
%dominio
printf('\nEl Dominio de la funcion es: R\n');
%rango
if(t==1||t==2)
disp(['El Rango de la funcion es: [',num2str(d),',+infinito)']);
endif
if(t==3||t==4)
fprintf('El Rango de la funcion es (-inf,%.2f]',num2str(d));
endif
%asintota horizontal
fprintf('\nLa asintota horizontal es: ');
disp(d);
%intercepto en X
if(d>=0)
printf('\nLa funcion no tiene interceptos en el eje x.');
else 
printf('\nEl intercepto en el eje X es:');
Ix=(log(-1*d)-c*log(a))/b*log(a);
disp(Ix);
endif
%intercepto en Y
Iy=a^(b*0+c)+d;
printf('\nEl intercepto en el eje Y es:');
disp(Iy)
%graficar
grid;
X = [-3:0.1:3];
Y = a.^(b*X+c)+d;%f(x)=a^(b*x+c)+d
plot(X,Y)
fprintf('\n ');
fprintf('\n------------------------------------------------------------------------------');
clear;
printf('\nEscriba la letra en minuscula de la funcion que quiera analizar: \n');
printf('a. Funcion lineal de la forma f(x)=ax+b \n');
printf('b. Funcion cuadratica de la forma f(x)=ax^2+b \n');
printf('c. Funcion de valor absoluto de la forma f(x)=k|ax+b| \n');
printf('d. Funcion radical de la forma f(x)=raiz(ax+b)+c \n');
printf('e. Funcion logaritmica de la forma f(x)=log_basea(bx+c)\n');
printf('f. Funcion exponencial de la forma f(x)=a^(bx+c)+d \n');
printf('g. Funcion racional de la forma f(x)=p(x)/q(x), donde p(x)=ax+b y q(x)=cx+d \n');
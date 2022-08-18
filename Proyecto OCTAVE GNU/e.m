%limpiar variables y ventana
clear
clc
syms x;
%Pedir ecuacion
printf('Analizar funcion del tipo f(x)=log_basea(bx+c)\n');
do
a=input('Ingrese a:');
if(a<=0||a==1)
fprintf('\nIngrese un valor de a>0 y distinto de 1\n');
endif
until(a!=0 && a!=1 && a>0)
do
b=input('Ingrese b:');
if(b==0)
fprintf('\nb debe ser distinto de cero\n');
endif
until(b!=0)
c=input('Ingrese c:');
fprintf('\nf(x)= log_base%d',a);
fprintf('(%d*x +',b);
fprintf('%d)',c);
%dominio
x1=-c/b;
if(b>0)
fprintf('\nDominio: ]%.2f,',x1);
fprintf('+inf)');
else
fprintf('\nDominio: (-inf,');
fprintf('%.2f[',x1);
endif
%rango
fprintf('\nRango: R');
%asintotaV
av=-c/b;
fprintf('\nAsintota V: %.2f',av);
%interceptos
ix1=(1-c)/b;
fprintf('\nIntercepto en x=%.2f',ix1);

if(c==0)
fprintf('\nNo hay intercepto en y');
endif
if(c<0)
fprintf('\nNo hay intercepto en y');
endif
if(c>0)
iy=log(c)/log(a);
fprintf('\nIntercepto en y=%.2f',iy);
endif
%crecimiento
if(b>0)
if(a>1)
fprintf('\nLa funcion crece de ]%.2f,+inf)',av);
else
fprintf('\nLa funcion decrece de (-inf,%.2f[',av);
endif
else
if(a>1)
fprintf('\nLa funcion decrece de (-inf,%.2f[',av);
else
fprintf('\nLa funcion crece de ]%.2f,+inf)',av);
endif
endif
%graficamos
grid;
x=[av:0.01:3];

y = log(b*x+c)/log(a);
plot(x,y);
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

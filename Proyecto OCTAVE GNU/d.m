%limpiar variables y ventana
clear
clc
%crear una variable x
syms x;
%Pedir ecuacion
printf('Analizar funcion del tipo f(x)=f(x)=kraiz(ax+b)+c, escriba "menu" si quiere volver al menu inicial\n')
do
   k=input('ingrese k:');
   if(k==0)
   printf('\ningrese un k distinto a cero\n');
 endif
until (k!=0)
do
   a=input('ingrese a:');
   if(a==0)
   printf('\ningrese un a distinto a cero\n');
 endif
until (a!=0)
b=input('ingrese b:');
c=input('ingrese c:');

f(x) = k*sqrt(a*x+b)+c

%calculo de el intercepto en x y y:
if(k>0)
if(b>0 && c>0)
fprintf('\nNo hay intercepto en x,');
fprintf('intercepto en y es %.4f:', k*sqrt(b)+c);
endif
if( b>0 && c<0)
fprintf('el intercepto en x es: %.2f,', ((c/k)^2-b)/(a));
fprintf('el intercepto en y es: %.4f', k*sqrt(b)+c);
endif
if( b<0 && c>0)
fprintf('no hay interceptos en x,');
fprintf('no hay interceptos en y');
endif
if( b<0 && c<0)
fprintf('el intercepto en x es: %.2f,', ((c/k)^2-b)/(a));
fprintf('no hay interceptos en y');
endif
if( b==0 && c==0)
fprintf('el intercepto en x es: ,',0);
fprintf('el intercepto en y es: ',0);
endif
if( b!=0 && c==0)
fprintf('el intercepto en x es: %.2f,', ((c/k)^2-b)/(a));
fprintf('el intercepto en y es: %.4f', k*sqrt(b)+c);
endif
if(b==0 && c!=0)
fprintf('\nNo hay intercepto en x,');
fprintf('intercepto en y es %.4f:', k*sqrt(b)+c);
endif          
else
if(a!=0 && b>0 && c>0)
fprintf('el intercepto en x es: %.2f,',((c/k)^2-b)/(a));
fprintf('intercepto en y es %.4f:', k*sqrt(b)+c);
endif
if(a!=0 && b>0 && c<0)
fprintf('\nNo hay intercepto en x,');
fprintf('el intercepto en y es: %.4f', k*sqrt(b)+c);
endif
if(a!=0 && b<0 && c>0)
fprintf('el intercepto en x es: %.2f,', ((c/k)^2-b)/(a));
fprintf('no hay interceptos en y');
endif
if( b<0 && c<0)
fprintf('\nNo hay intercepto en x,');
fprintf('no hay interceptos en y');
endif
if( b==0 && c==0)
fprintf('el intercepto en x es: ,',0);
fprintf('el intercepto en y es: ',0);
endif
if( b!=0 && c==0)
fprintf('el intercepto en x es: %.2f,', ((c/k)^2-b)/(a));
fprintf('el intercepto en y es: %.4f', k*sqrt(b)+c);
endif
if( b==0 && c!=0)
fprintf('el intercepto en x es: %.2f,', ((c/k)^2-b)/(a));
fprintf('intercepto en y es %.4f:', k*sqrt(b)+c);
endif          
endif
%Dominio 
if (a>0)
if(b!=0)
fprintf('\nel dominio es: [%.2f ', -b/a);fprintf(',+infinito [');
else
fprintf('\nel dominio es: [ 0');fprintf(',+infinito [');
endif
else
fprintf('\nel dominio es: ] -infinito, %.2f', -b/a);fprintf(' ]');
endif
% Rango
if(k>0)
if(a!=0)
fprintf('\nel rango es: [ %.2f',c);fprintf(',+infinito [');
endif
else
if(a!=0)
fprintf('\nel rango es: ] -infinito, %.2f', c);fprintf(' ]');
endif
endif
%intervalo de crecimiento
if(k>0)
if(a>0)
fprintf('\nla funcion crece de: [ %.2f', -b/a);fprintf(',+infinito [\n');
else
fprintf('\nla funcion decrece de: ] -infinito, %.2f', -b/a);fprintf(' ]\n');
endif
else
if(a>0)
fprintf('\nla funcion decrece de: [ %.2f', -b/a);fprintf(',+infinito [\n');
else
fprintf('\nla funcion crece de: ] -infinito, %.2f', -b/a);fprintf(' ]\n');
endif
endif  
%graficar
if(k!=0)
if(a>0 && b!=0 && c!=0)
grid;
x=double(-b/a):1/100:10;y = k*sqrt(a*x+b)+c;
plot(x,y);  
endif
if(a<0 && b!=0 && c!=0)
grid;
x=-10:1/100:double(-b/a);y = k*sqrt(a*x+b)+c;
plot(x,y);  
endif
endif
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
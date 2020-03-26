function answer=che221Assign1()
%for N2
a=2.42;
A0=106.73;
b=0.002328;
B0=0.04074;
c=73790;
C0=816400;
al=0.0001272;
gam=0.0053;
Ru=8.3143;
%Tc=126.2 k
%Pc=34 bar
%rho=0.01118 mol/l
v=1/0.01:1/0.00002:1/0.0200
p=Ru*T/v+(B0*Ru*T-A0-C0/(T^2))/(v^2)+(b*Ru*T-a)/(v^3)+a*al/(v^6)+c*(1+gam/(v^2))*exp^(-gam/(v^2))/((v^3)*(T^2);
for T=50:50:250
	plot(v,p);
	hold on;
end
















function root = leastSquared()
fileName=input("Enter the Input Points file: ", 's');
fileID=fopen(fileName,'r');
k = fscanf(fileID, '%d', 1);
a = fscanf(fileID, '%f', [2 k])';
entries=k;
a
n=input("Enter the order of the polynomial: ");

%generate the design matrix and the y matrix
for i=1:n+1
    y(i)=0;
    for j=1:k
        y(i)=y(i)+a(j,2)*(a(j,1).^(i-1));
    end

    for j=1:n+1
        x(i,j)=0;
        for p=1:k
            x(i,j)=x(i,j)+a(p,1).^(i+j-2);
        end
    end
end


y=y';
y
x

%solve the matrix for the coefficients
%PIVOT THE MATRIX
n=n+1;
for i=1:n
    max=x(i,i);
    index=i;
    
    %find the max entry in the given colum under the given index
    for j=i:n
        if(x(j,i)>max)
            max=x(j,i);
            index=j;
        end
    end
    
    %make the switch
    for k=1:n
        c=x(i,k);
        x(i,k)=x(index,k);
        x(index,k)=c;
    end
    %corresponding switch in b
    d=y(i);
    y(i)=y(index);
    y(index)=d;
    

    %make all entries below that 0
    if(i<n)
        for k=i+1:n
            c=x(k,i)/x(i,i);
            for m=1:n
                x(k,m)=x(k,m)-c*x(i,m);
            end
            y(k)=y(k)-c*y(i);
        end
    end
    
    
end

c(n)=y(n)/x(n,n);

for i=n-1:-1:1
    sigma=0;
    for j=i+1:n
        sigma = sigma+x(i,j)*c(j);
    end
    c(i)=(y(i)-sigma)/x(i, i);
end
c

fileID=fopen('leastSquaredSoln(T9Q1).txt', 'w');
fprintf(fileID, 'p(x)= ');
for i=1:n
    if(i==1)
        fprintf(fileID, '(%4.4f)x^%1.0f', c(i),(i-1));
    else
        fprintf(fileID, ' + (%4.4f)x^%1.0f', c(i),(i-1));

    end
end

%calculate the rsquared
c=flip(c);
ybar=mean(a(:,2));
S0 =0;
S1 =0;
for i=1:entries
    S0=S0+(a(i,2)-ybar)^2;
    S1=S1+(a(i,2)-polyval(c,a(i,1)))^2;
end
rsquared=1-S1/S0;

S0
S1
rsquared
fprintf(fileID, '\nR^2 = %4.4f',rsquared);
fclose(fileID)
scatter(a(:,1),a(:,2))
title('Least Squared Solution')
hold on
fplot(poly2sym(c))
hold off
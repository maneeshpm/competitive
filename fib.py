function root = eulerFor()
fileName = input("Enter the Input Points file: ", 's');
fileID = fopen(fileName,'r');
str = fgets(fileID);
a0 = fscanf(fileID, '%f', [2 1])';
an = fscanf(fileID, '%f', 1);
h = fscanf(fileID, '%f', 1);
tol = fscanf(fileID, '%f', 1);
fclose(fileID);
f=inline(str,'x','y');

n=mod((an-a0)/h);
xi(1)=a0(1);
yi(1)=a0(2);

for i=1:n
	xi(i+1)=xi(i)+h;
	yi(i+1)= yi(i)+h*f(yi(i),x(i));
end

fileID=fopen('eulerForwardSoln.txt','w');
for i=1:n+1
	fprintf(fileID, '%f %f\n', xi(i), yi(i));
end
fclose(fileID);
fplot(xi,yi);

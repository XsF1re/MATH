%variable init 0
clear all; close all;

%start here
totala(1) = 1;

%change X with 2 : X to show about graph range!
for n = 2 : 30
    %main calculate!
    ya(n) = (-11/10)^n;
    totala(n) = totala(n-1) + ya(n);
end

subplot(1,1,1)
semilogx(totala)

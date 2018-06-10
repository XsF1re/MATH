clear all; close all;

syms x y z w
eqn1 = 2*x + y + z + w== 2;
eqn2 = -x + y -z + w== 3;
eqn3 = x + 2*y + 3*z + w == 11;
eqn4 = 4*x + 2*y + 3*z + w == 5;

sol = solve([eqn1, eqn2, eqn3, eqn4], [x, y, z, w]);
xSol = sol.x
ySol = sol.y
zSol = sol.z
wSol = sol.w
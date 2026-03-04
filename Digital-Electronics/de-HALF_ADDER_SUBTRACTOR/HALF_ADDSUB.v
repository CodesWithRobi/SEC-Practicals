module HALF_ADDSUB(a,b,sum,carry,D,Bo);
input a,b;
output sum,carry,D,Bo; // Outputs sum and carry for half adder:Outputs difference D,Borrow Bo for half subtractor
//TYPE HERE THE COMMAND FOR SUM GENERATION IN GATE LEVEL MODELLING
xor(sum, a, b);
//TYPE HERE THE COMMAND FOR CARRY GENERATION IN GATE LEVEL MODELLING
and(carry, a, b);
//Type logic for half subtractor difference D,Borrow Bo using gate level modelling
assign D = sum;
assign Bo = ~a & b;
endmodule

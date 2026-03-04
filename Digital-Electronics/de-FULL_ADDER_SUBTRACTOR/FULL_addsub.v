module FULL_addsub(a,b,cin,sum,carry,BO,DIFF);
input a,b,cin;
output sum,carry,BO,DIFF;
//Write syntax for full adder sum and carry in date flow modelling 
assign sum = a^b^cin;
assign carry = (a&b)|(b&cin)|(a&cin);
wire a0;
not(a0,a);
//Write syntax for full subtractor Borrow and Difference in date flow modelling
assign DIFF = sum;
assign BO = (a0&b)|(a0&cin)|(b&cin);
endmodule

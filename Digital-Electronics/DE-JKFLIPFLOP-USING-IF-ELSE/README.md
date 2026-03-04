# JKFLIPFLOP-USING-IF-ELSE

**AIM:** 

To implement  JK flipflop using verilog and validating their functionality using their functional tables

**SOFTWARE REQUIRED:**

Quartus prime

**THEORY**

**JK Flip-Flop**

JK flip-flop is the modified version of SR flip-flop. It operates with only positive clock transitions or negative clock transitions. The circuit diagram of JK flip-flop is shown in the following figure.

![image](https://github.com/naavaneetha/JKFLIPFLOP-USING-IF-ELSE/assets/154305477/a649c30b-232b-4558-b188-fd6c09845180)


This circuit has two inputs J & K and two outputs Qtt & Qtt’. The operation of JK flip-flop is similar to SR flip-flop. Here, we considered the inputs of SR flip-flop as S = J Qtt’ and R = KQtt in order to utilize the modified SR flip-flop for 4 combinations of inputs. The following table shows the state table of JK flip-flop.

![image](https://github.com/naavaneetha/JKFLIPFLOP-USING-IF-ELSE/assets/154305477/c4360742-e8a8-4937-b089-c46c0433f9a3)

 
Here, Qtt & Qt+1t+1 are present state & next state respectively. So, JK flip-flop can be used for one of these four functions such as Hold, Reset, Set & Complement of present state based on the input conditions, when positive transition of clock signal is applied. The following table shows the characteristic table of JK flip-flop. Present Inputs Present State Next State
 
![image](https://github.com/naavaneetha/JKFLIPFLOP-USING-IF-ELSE/assets/154305477/6c275261-a6d5-4c37-a3a7-1e88ca11c4cd)

By using three variable K-Map, we can get the simplified expression for next state, Qt+1t+1. Three variable K-Map for next state, Qt+1t+1 is shown in the following figure.
 
![image](https://github.com/naavaneetha/JKFLIPFLOP-USING-IF-ELSE/assets/154305477/5174f41b-0ce0-4329-a372-6d1943ea6673)

The maximum possible groupings of adjacent ones are already shown in the figure. Therefore, the simplified expression for next state Qt+1t+1 is Q(t+1)=JQ(t)′+K′Q(t)Q(t+1)=JQ(t)′+K′Q(t)

**Procedure**
1.Type the program in Quartus software.

2.Compile and run the program.

3.Generate the RTL schematic and save the logic diagram.

4.Create nodes for inputs and outputs to generate the timing diagram.

5.For different input combinations generate the timing diagram

**PROGRAM**

Program for flipflops and verify its truth table in quartus using Verilog programming.
Developed by: ROBINSON J
RegisterNumber: 212223040170

```
module JKFLIPFLOPUSINGIFELSE(q, qb,j,k,clock,reset);
    input j,k,clock,reset;
    output reg q, qb;
	 
always @ (posedge (clock))

    begin 
        if (!reset)
            begin
               q <= q;
               qb <=qb;
            end   
        
else
 //Write logic for JK flipflop using if else statement for four conditions
	begin
      case({j, k}) // Use the concatenation of j and k as the case selector
        2'b00: q <= q;   // No change to q when both j and k are 0
        2'b01: q <= 1'b0; // Set q to 0 when j = 0 and k = 1
        2'b10: q <= 1'b1; // Set q to 1 when j = 1 and k = 0
        2'b11: q <= ~q; // Negation when both j and k are 1
      endcase
    end
 assign qb = ~q;           
endmodule

```

**RTL LOGIC FOR FLIPFLOPS**
![image](https://github.com/CodesWithRobi/DE-JKFLIPFLOP-USING-IF-ELSE/assets/130537166/dd50a820-5c46-4406-9fca-5a8808b6afe9)

**TIMING DIGRAMS FOR FLIP FLOPS**
![image](https://github.com/CodesWithRobi/DE-JKFLIPFLOP-USING-IF-ELSE/assets/130537166/0dfbb4d0-cd45-466c-aeea-a8ca64e20828)

**RESULT:**

Implemented JK flipflop using verilog and validated their functionality using their functional tables

# SERIAL-IN-SERIAL-OUT-SHIFTREGISTER

**AIM:**

To implement  SISO Shift Register using verilog and validating their functionality using their functional tables

**SOFTWARE REQUIRED:**

Quartus prime

**THEORY**

**SISO shift Register**

A Serial-In Serial-Out shift register is a sequential logic circuit that allows data to be shifted in and out one bit at a time in a serial manner. It consists of a cascade of flip-flops connected in series, forming a chain. The input data is applied to the first flip-flop in the chain, and as the clock pulses, the data propagates through the flip-flops, ultimately appearing at the output.

The logic circuit provided below demonstrates a serial-in serial-out (SISO) shift register. It comprises four D flip-flops that are interconnected in a sequential manner. These flip-flops operate synchronously with one another, as they all receive the same clock signal.

![image](https://github.com/naavaneetha/SERIAL-IN-SERIAL-OUT-SHIFTREGISTER/assets/154305477/e81c4072-37f9-46c6-8145-566764b74c3a)

Figure 01 4 Bit SISO Register

The synchronous nature of the flip-flops ensures that the shifting of data occurs in a coordinated manner. When the clock signal rises, the input data is sampled and stored in the first flip-flop. On subsequent clock pulses, the stored data propagates through the flip-flops, moving from one flip-flop to the next.
Each D flip-flop in the circuit has a Data (D) input, a Clock (CLK) input, and an output (Q). The D input represents the data to be loaded into the flip-flop, while the CLK input is connected to the common clock signal. The output (Q) of each flip-flop is connected to the D input of the next flip-flop, forming a cascade.

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
module SISOSR(clk,clear,si,so,tmp);
input clk,si,clear;
output so;
output [3:0] tmp;
reg so;
reg [3:0] tmp;
always @(posedge clk )
//Use shift register logic here
begin
	if(clear)
		tmp[3:0] = 0;
	else
		so <= tmp[3];
		tmp[3] <= tmp[2];
		tmp[2] <= tmp[1];
		tmp[1] <= tmp[0];
		tmp[0] <= si;
end
endmodule

```

**RTL LOGIC FOR SISO Shift Register**

![image](https://github.com/CodesWithRobi/DE-SERIAL-IN-SERIAL-OUT-SHIFTREGISTER/assets/130537166/339ff4ac-d593-473a-8960-9477fbd0de85)

**TIMING DIGRAMS FOR SISO Shift Register**

![image](https://github.com/CodesWithRobi/DE-SERIAL-IN-SERIAL-OUT-SHIFTREGISTER/assets/130537166/d89beb77-ddf7-4342-99e9-81b0a9e7cfce)


**RESULTS**

Implemented SISO Shift Register using verilog and validated their functionality using their functional tables.

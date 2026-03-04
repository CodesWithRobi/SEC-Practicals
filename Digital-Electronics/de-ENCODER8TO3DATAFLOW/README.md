### ENCODER 8TO3 DATAFLOW Modelling

**AIM:**

To implement  Encoder 8 To 3 in Dataflow Modelling using verilog and validating their functionality using their functional tables

**SOFTWARE REQUIRED:** Quartus prime

**THEORY**

**Encoder 8 To 3**

The 8 to 3 line Encoder is also known as Octal to Binary Encoder. In 8 to 3 line encoder, there is a total of eight inputs, i.e., D0, D1, D2, D3, D4, D5, D6, and D7 and three outputs, i.e., A0, A1, and A2. In 8-input lines, one input-line is set to true at a time to get the respective binary code in the output side. Below are the block diagram and the truth table of the 8 to 3 line encoder.

![image](https://github.com/naavaneetha/ENCODER8TO3DATAFLOW/assets/154305477/0bc242c1-eb9e-4c47-afe5-30428470efc3)

Figure 01  Block Diagram of Encoder 8 * 3

**Truth Table**

![image](https://github.com/naavaneetha/ENCODER8TO3DATAFLOW/assets/154305477/35496b14-ae6e-4cd1-9abd-d6736b576575)

The logical expression of the term A0, A1, and A2 are as follows:

A0 = D1 + D3 + D5 + D7

A1 = D2 + D3 + D6 + D7

A2 = D4 + D5 + D6 + D7

Logical circuit of the above expressions is given below:

![image](https://github.com/naavaneetha/ENCODER8TO3DATAFLOW/assets/154305477/95acaee6-c873-4c75-89eb-ef09fb158053)

Figure 02  Encoder 8 * 3

**Procedure**
1.Write program in Verilog HDL file using Quartus software
2.This would include logic to encode
3.Compile it
4.Use gate level simulation to find the output
5.Generate RTL viewer to generate the circuit

**PROGRAM**
```
module ENCODER8TO3(a0,a1,a2,d0,d1,d2,d3,d4,d5,d6,d7);
input d0,d1,d2,d3,d4,d5,d6,d7;
output a0,a1,a2;
//add logic here using dataflow modelling
assign a0 = d1 | d3 | d5 | d7;
assign a1 = d2 | d3 | d6 | d7;
assign a2 = d4 | d5 | d6 | d7;
endmodule
```
Developed by: ROBINSON J
RegisterNumber:212223040170

**RTL LOGIC FOR Encoder 8 To 3 in Dataflow Modelling**
![image](https://github.com/CodesWithRobi/de-ENCODER8TO3DATAFLOW/assets/130537166/925c352d-50f6-410e-935e-5cc2bc889826)

**TIMING DIGRAMS FOR Encoder 8 To 3 in Dataflow Modelling**
![waveform](https://github.com/CodesWithRobi/de-ENCODER8TO3DATAFLOW/assets/130537166/a6bc3c30-a4d6-4ab8-81f2-ea9ec749ef1d)

**RESULTS**
![compile](https://github.com/CodesWithRobi/de-ENCODER8TO3DATAFLOW/assets/130537166/6a670fe8-ba6c-4165-8225-2414675d9423)

Implementation of  Encoder 8 To 3 in Dataflow Modelling using verilog was successful and validated their functionality using their functional tables.





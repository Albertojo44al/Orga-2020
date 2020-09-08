

module Mux_2x1_NBits #(
    parameter Bits = 2
)
(
    input [0:0] sel,
    input [(Bits - 1):0] in_0,
    input [(Bits - 1):0] in_1,
    output reg [(Bits - 1):0] out
);
    always @ (*) begin
        case (sel)
            1'h0: out = in_0;
            1'h1: out = in_1;
            default:
                out = 'h0;
        endcase
    end
endmodule


module DIG_Register_BUS #(
    parameter Bits = 1
)
(
    input C,
    input en,
    input [(Bits - 1):0]D,
    output [(Bits - 1):0]Q
);

    reg [(Bits - 1):0] state = 'h0;

    assign Q = state;

    always @ (posedge C) begin
        if (en)
            state <= D;
   end
endmodule
module DIG_Add
#(
    parameter Bits = 1
)
(
    input [(Bits-1):0] a,
    input [(Bits-1):0] b,
    input c_i,
    output [(Bits - 1):0] s,
    output c_o
);
   wire [Bits:0] temp;

   assign temp = a + b + c_i;
   assign s = temp [(Bits-1):0];
   assign c_o = temp[Bits];
endmodule


module AsyncROM (
  input [7:0] addr,
  input en,
  output [31:0] read_data
);
  reg [31:0] memory[0:255] /*verilator public*/;

  assign read_data = en? memory[addr] : 32'hz;
  
  initial begin
`ifndef NO_INIT_MEM
    $readmemh("code.mif", memory, 0, 255);
`endif
  end
endmodule

module DIG_ROM_128X15_ControlUnit (
    input [6:0] A,
    input sel,
    output reg [14:0] D
);
    reg [14:0] my_rom [0:127];

    always @ (*) begin
        if (~sel)
            D = 15'hz;
        else
            D = my_rom[A];
    end

    initial begin
        my_rom[0] = 15'h4400;
        my_rom[1] = 15'h4400;
        my_rom[2] = 15'h4400;
        my_rom[3] = 15'h4400;
        my_rom[4] = 15'h4400;
        my_rom[5] = 15'h4400;
        my_rom[6] = 15'h4400;
        my_rom[7] = 15'h4400;
        my_rom[8] = 15'h4400;
        my_rom[9] = 15'h4400;
        my_rom[10] = 15'h4400;
        my_rom[11] = 15'h4400;
        my_rom[12] = 15'h4400;
        my_rom[13] = 15'h4400;
        my_rom[14] = 15'h4400;
        my_rom[15] = 15'h4400;
        my_rom[16] = 15'h4400;
        my_rom[17] = 15'h4400;
        my_rom[18] = 15'h4400;
        my_rom[19] = 15'h4400;
        my_rom[20] = 15'h4400;
        my_rom[21] = 15'h4400;
        my_rom[22] = 15'h4400;
        my_rom[23] = 15'h4400;
        my_rom[24] = 15'h4400;
        my_rom[25] = 15'h4400;
        my_rom[26] = 15'h4400;
        my_rom[27] = 15'h4400;
        my_rom[28] = 15'h4400;
        my_rom[29] = 15'h4400;
        my_rom[30] = 15'h4400;
        my_rom[31] = 15'h4400;
        my_rom[32] = 15'h4300;
        my_rom[33] = 15'h4400;
        my_rom[34] = 15'h4b00;
        my_rom[35] = 15'h4400;
        my_rom[36] = 15'h5b00;
        my_rom[37] = 15'h6300;
        my_rom[38] = 15'h4400;
        my_rom[39] = 15'h4400;
        my_rom[40] = 15'h4400;
        my_rom[41] = 15'h4400;
        my_rom[42] = 15'h5300;
        my_rom[43] = 15'h4400;
        my_rom[44] = 15'h4400;
        my_rom[45] = 15'h4400;
        my_rom[46] = 15'h4400;
        my_rom[47] = 15'h4400;
        my_rom[48] = 15'h4400;
        my_rom[49] = 15'h4400;
        my_rom[50] = 15'h4400;
        my_rom[51] = 15'h4400;
        my_rom[52] = 15'h4400;
        my_rom[53] = 15'h4400;
        my_rom[54] = 15'h4400;
        my_rom[55] = 15'h4400;
        my_rom[56] = 15'h4400;
        my_rom[57] = 15'h4400;
        my_rom[58] = 15'h4400;
        my_rom[59] = 15'h4400;
        my_rom[60] = 15'h4400;
        my_rom[61] = 15'h4400;
        my_rom[62] = 15'h4400;
        my_rom[63] = 15'h4400;
        my_rom[64] = 15'h4400;
        my_rom[65] = 15'h4400;
        my_rom[66] = 15'h4001;
        my_rom[67] = 15'h4400;
        my_rom[68] = 15'h4802;
        my_rom[69] = 15'h4804;
        my_rom[70] = 15'h4400;
        my_rom[71] = 15'h4400;
        my_rom[72] = 15'h4180;
        my_rom[73] = 15'h4400;
        my_rom[74] = 15'h4400;
        my_rom[75] = 15'h4400;
        my_rom[76] = 15'h1980;
        my_rom[77] = 15'h2180;
        my_rom[78] = 15'h4400;
        my_rom[79] = 15'h4140;
        my_rom[80] = 15'h4400;
        my_rom[81] = 15'h4400;
        my_rom[82] = 15'h4400;
        my_rom[83] = 15'h4400;
        my_rom[84] = 15'h4400;
        my_rom[85] = 15'h4400;
        my_rom[86] = 15'h4400;
        my_rom[87] = 15'h4400;
        my_rom[88] = 15'h4400;
        my_rom[89] = 15'h4400;
        my_rom[90] = 15'h4400;
        my_rom[91] = 15'h4400;
        my_rom[92] = 15'h4400;
        my_rom[93] = 15'h4400;
        my_rom[94] = 15'h4400;
        my_rom[95] = 15'h4400;
        my_rom[96] = 15'h4400;
        my_rom[97] = 15'h4400;
        my_rom[98] = 15'h4400;
        my_rom[99] = 15'h41a8;
        my_rom[100] = 15'h4400;
        my_rom[101] = 15'h4400;
        my_rom[102] = 15'h4400;
        my_rom[103] = 15'h4400;
        my_rom[104] = 15'h4400;
        my_rom[105] = 15'h4400;
        my_rom[106] = 15'h4400;
        my_rom[107] = 15'h4090;
        my_rom[108] = 15'h4400;
        my_rom[109] = 15'h4400;
        my_rom[110] = 15'h4400;
        my_rom[111] = 15'h4400;
        my_rom[112] = 15'h4400;
        my_rom[113] = 15'h4400;
        my_rom[114] = 15'h4400;
        my_rom[115] = 15'h4400;
        my_rom[116] = 15'h4400;
        my_rom[117] = 15'h4400;
        my_rom[118] = 15'h4400;
        my_rom[119] = 15'h4400;
        my_rom[120] = 15'h4400;
        my_rom[121] = 15'h4400;
        my_rom[122] = 15'h4400;
        my_rom[123] = 15'h4400;
        my_rom[124] = 15'h4400;
        my_rom[125] = 15'h4400;
        my_rom[126] = 15'h4400;
        my_rom[127] = 15'h4400;
    end
endmodule


module control_unit_full (
  input [5:0] opcode,
  input [5:0] \function ,
  output jump,
  output [1:0] Branch,
  output MemRead,
  output MemWrite,
  output [1:0] MemToReg,
  output ALUSrc,
  output RegWrite,
  output RegDst,
  output InvOpcode,
  output [2:0] ALUFunc,
  output ImmExtend
);
  wire [6:0] s0;
  wire [14:0] s1;
  wire [5:0] s2;
  wire s3;
  assign s3 = (opcode[0] | opcode[1] | opcode[2] | opcode[3] | opcode[4] | opcode[5]);
  Mux_2x1_NBits #(
    .Bits(6)
  )
  Mux_2x1_NBits_i0 (
    .sel( s3 ),
    .in_0( \function  ),
    .in_1( opcode ),
    .out( s2 )
  );
  assign s0[5:0] = s2;
  assign s0[6] = s3;
  // Control Unit
  DIG_ROM_128X15_ControlUnit DIG_ROM_128X15_ControlUnit_i1 (
    .A( s0 ),
    .sel( 1'b1 ),
    .D( s1 )
  );
  assign jump = s1[0];
  assign Branch = s1[2:1];
  assign MemRead = s1[3];
  assign MemWrite = s1[4];
  assign MemToReg = s1[6:5];
  assign ALUSrc = s1[7];
  assign RegWrite = s1[8];
  assign RegDst = s1[9];
  assign InvOpcode = s1[10];
  assign ALUFunc = s1[13:11];
  assign ImmExtend = s1[14];
endmodule
module DIG_BitExtender #(
    parameter inputBits = 2,
    parameter outputBits = 4
)
(
    input [(inputBits-1):0] in,
    output [(outputBits - 1):0] out
);
    assign out = {{(outputBits - inputBits){in[inputBits - 1]}}, in};
endmodule



module RegisterFile (
    input [4:0] read_addr1,
    input [4:0] read_addr2,
    input [4:0] write_addr,
    input [31:0] write_data,
    input write_en,
    input clk,
    output [31:0] read_data1,
    output [31:0] read_data2
);

    reg [31:0] memory[0:31] /*verilator public*/;
    
    assign read_data1 = memory[read_addr1];
    assign read_data2 = memory[read_addr2];
    
    always @(posedge clk)
    begin
        if (write_en)
            memory[write_addr] <= write_data;
    end

    initial begin
        memory[0] = 32'd0;
    end
endmodule


module DIG_Sub #(
    parameter Bits = 2
)
(
    input [(Bits-1):0] a,
    input [(Bits-1):0] b,
    input c_i,
    output [(Bits-1):0] s,
    output c_o
);
    wire [Bits:0] temp;

    assign temp = a - b - c_i;
    assign s = temp[(Bits-1):0];
    assign c_o = temp[Bits];
endmodule


module CompSigned #(
    parameter Bits = 1
)
(
    input [(Bits -1):0] a,
    input [(Bits -1):0] b,
    output \> ,
    output \= ,
    output \<
);
    assign \> = $signed(a) > $signed(b);
    assign \= = $signed(a) == $signed(b);
    assign \< = $signed(a) < $signed(b);
endmodule


module Mux_8x1_NBits #(
    parameter Bits = 2
)
(
    input [2:0] sel,
    input [(Bits - 1):0] in_0,
    input [(Bits - 1):0] in_1,
    input [(Bits - 1):0] in_2,
    input [(Bits - 1):0] in_3,
    input [(Bits - 1):0] in_4,
    input [(Bits - 1):0] in_5,
    input [(Bits - 1):0] in_6,
    input [(Bits - 1):0] in_7,
    output reg [(Bits - 1):0] out
);
    always @ (*) begin
        case (sel)
            3'h0: out = in_0;
            3'h1: out = in_1;
            3'h2: out = in_2;
            3'h3: out = in_3;
            3'h4: out = in_4;
            3'h5: out = in_5;
            3'h6: out = in_6;
            3'h7: out = in_7;
            default:
                out = 'h0;
        endcase
    end
endmodule


module CompUnsigned #(
    parameter Bits = 1
)
(
    input [(Bits -1):0] a,
    input [(Bits -1):0] b,
    output \> ,
    output \= ,
    output \<
);
    assign \> = a > b;
    assign \= = a == b;
    assign \< = a < b;
endmodule


module alu (
  input [31:0] a,
  input [31:0] b,
  input [2:0] func,
  output [31:0] res,
  output zero
);
  wire [31:0] s0;
  wire [31:0] s1;
  wire [31:0] s2;
  wire s3;
  wire [31:0] s4;
  wire [31:0] s5;
  wire [31:0] res_temp;
  DIG_Add #(
    .Bits(32)
  )
  DIG_Add_i0 (
    .a( a ),
    .b( b ),
    .c_i( 1'b0 ),
    .s( s0 )
  );
  DIG_Sub #(
    .Bits(32)
  )
  DIG_Sub_i1 (
    .a( a ),
    .b( b ),
    .c_i( 1'b0 ),
    .s( s1 )
  );
  assign s2 = (a & b);
  CompSigned #(
    .Bits(32)
  )
  CompSigned_i2 (
    .a( a ),
    .b( b ),
    .\< ( s3 )
  );
  assign s4 = (a | b);
  assign s5[0] = s3;
  assign s5[31:1] = 31'b0;
  Mux_8x1_NBits #(
    .Bits(32)
  )
  Mux_8x1_NBits_i3 (
    .sel( func ),
    .in_0( s0 ),
    .in_1( s1 ),
    .in_2( s5 ),
    .in_3( s2 ),
    .in_4( s4 ),
    .in_5( 32'b0 ),
    .in_6( 32'b0 ),
    .in_7( 32'b0 ),
    .out( res_temp )
  );
  CompUnsigned #(
    .Bits(32)
  )
  CompUnsigned_i4 (
    .a( res_temp ),
    .b( 32'b0 ),
    .\= ( zero )
  );
  assign res = res_temp;
endmodule
module RAMDualPort (
  input [7:0] addr,
  input [31:0] write_data,
  input mem_write,
  input clk,
  input mem_read,
  output [31:0] read_data
);
  reg [31:0] memory[0:255] /*verilator public*/;

  assign read_data = mem_read? memory[addr] : 32'hz;

  always @ (posedge clk) begin
    if (mem_write)
      memory[addr] <= write_data;
  end

  initial begin
`ifndef NO_INIT_MEM
    $readmemh("data.mif", memory, 0, 255);
`endif
  end
endmodule


module Mux_4x1_NBits #(
    parameter Bits = 2
)
(
    input [1:0] sel,
    input [(Bits - 1):0] in_0,
    input [(Bits - 1):0] in_1,
    input [(Bits - 1):0] in_2,
    input [(Bits - 1):0] in_3,
    output reg [(Bits - 1):0] out
);
    always @ (*) begin
        case (sel)
            2'h0: out = in_0;
            2'h1: out = in_1;
            2'h2: out = in_2;
            2'h3: out = in_3;
            default:
                out = 'h0;
        endcase
    end
endmodule


module Mips32SoC(
  input clk,
  input rst
);
  wire [31:0] s0;
  wire [31:0] s1;
  wire [31:0] s2;
  wire [7:0] s3;
  wire [31:0] s4;
  wire [31:0] s5;
  wire RegWrite;
  wire [4:0] s6;
  wire [4:0] s7;
  wire [4:0] s8;
  wire [31:0] s9;
  wire [31:0] s10;
  wire [5:0] func;
  wire [4:0] s11;
  wire [5:0] s12;
  wire [31:0] s13;
  wire [2:0] s14;
  wire [31:0] s15;
  wire zero;
  wire Jump;
  wire [1:0] Branch;
  wire MemRead;
  wire MemWrite;
  wire [1:0] MemToReg;
  wire ALUSrc;
  wire RegDst;
  wire InvOpcode;
  wire ie;
  wire [7:0] s16;
  wire [31:0] s17;
  wire [31:0] s18;
  wire [15:0] s19;
  wire [31:0] s20;
  wire [31:0] s21;
  wire [31:0] s22;
  wire s23;
  wire [31:0] s24;
  wire [31:0] s25;
  wire [31:0] s26;
  wire [31:0] s27;
  wire [27:0] s28;
  wire [31:0] s29;
  Mux_2x1_NBits #(
    .Bits(32)
  )
  Mux_2x1_NBits_i0 (
    .sel( rst ),
    .in_0( s27 ),
    .in_1( 32'b0 ),
    .out( s0 )
  );
  reg [31:0] PC /*verilator public*/;

  assign s1 = PC;

  always @ (posedge clk) begin
    if (1'b1)
      PC <= s0;
  end

  DIG_Add #(
    .Bits(32)
  )
  DIG_Add_i2 (
    .a( s1 ),
    .b( 32'b100 ),
    .c_i( 1'b0 ),
    .s( s2 )
  );
  assign s3 = s1[9:2];
  // Inst Mem
  AsyncROM inst_mem (
    .addr( s3 ),
    .en( 1'b1 ),
    .read_data( s4 )
  );

  assign s28[1:0] = 2'b0;
  assign s28[27:2] = s4[25:0];
  assign func = s4[5:0];
  assign s11 = s4[15:11];
  assign s8 = s4[20:16];
  assign s7 = s4[25:21];
  assign s12 = s4[31:26];
  assign s19 = s4[15:0];
  control_unit_full control_unit_full_i4 (
    .opcode( s12 ),
    .\function ( func ),
    .jump( Jump ),
    .Branch( Branch ),
    .MemRead( MemRead ),
    .MemWrite( MemWrite ),
    .MemToReg( MemToReg ),
    .ALUSrc( ALUSrc ),
    .RegWrite( RegWrite ),
    .RegDst( RegDst ),
    .InvOpcode( InvOpcode ),
    .ALUFunc( s14 ),
    .ImmExtend( ie )
  );
  DIG_BitExtender #(
    .inputBits(16),
    .outputBits(32)
  )
  DIG_BitExtender_i5 (
    .in( s19 ),
    .out( s20 )
  );
  assign s26[27:0] = s28;
  assign s26[31:28] = s2[31:28];
  assign s29[15:0] = s19;
  assign s29[31:16] = 16'b0;
  Mux_2x1_NBits #(
    .Bits(5)
  )
  Mux_2x1_NBits_i6 (
    .sel( RegDst ),
    .in_0( s8 ),
    .in_1( s11 ),
    .out( s6 )
  );
  assign s22[1:0] = 2'b0;
  assign s22[31:2] = s20[29:0];
  Mux_2x1_NBits #(
    .Bits(32)
  )
  Mux_2x1_NBits_i7 (
    .sel( ie ),
    .in_0( s29 ),
    .in_1( s20 ),
    .out( s21 )
  );
  DIG_Add #(
    .Bits(32)
  )
  DIG_Add_i8 (
    .a( s2 ),
    .b( s22 ),
    .c_i( 1'b0 ),
    .s( s24 )
  );
  assign s18[15:0] = 16'b0;
  assign s18[31:16] = s21[15:0];
  RegisterFile reg_file (
    .clk( clk ),
    .read_addr1( s7 ),
    .read_addr2( s8 ),
    .write_addr( s6 ),
    .write_en( RegWrite ),
    .write_data( s5 ),
    .read_data1( s9 ),
    .read_data2( s10 )
  );

  alu alu_i10 (
    .a( s9 ),
    .b( s13 ),
    .func( s14 ),
    .res( s15 ),
    .zero( zero )
  );
  // Data Mem
  RAMDualPort data_mem(
    .addr( s16 ),
    .mem_write( MemWrite ),
    .write_data( s10 ),
    .clk( clk ),
    .mem_read( MemRead ),
    .read_data( s17 )
  );

  Mux_4x1_NBits #(
    .Bits(32)
  )
  Mux_4x1_NBits_i12 (
    .sel( MemToReg ),
    .in_0( s15 ),
    .in_1( s17 ),
    .in_2( s18 ),
    .in_3( 32'b0 ),
    .out( s5 )
  );
  Mux_2x1_NBits #(
    .Bits(32)
  )
  Mux_2x1_NBits_i13 (
    .sel( ALUSrc ),
    .in_0( s10 ),
    .in_1( s21 ),
    .out( s13 )
  );
  Mux_2x1_NBits #(
    .Bits(32)
  )
  Mux_2x1_NBits_i14 (
    .sel( s23 ),
    .in_0( s2 ),
    .in_1( s24 ),
    .out( s25 )
  );
  Mux_2x1_NBits #(
    .Bits(32)
  )
  Mux_2x1_NBits_i15 (
    .sel( Jump ),
    .in_0( s25 ),
    .in_1( s26 ),
    .out( s27 )
  );
  assign s23 = ((Branch[0] & zero) | (Branch[1] & ~ zero));
  assign s16 = s15[9:2];
endmodule

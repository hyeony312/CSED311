module register_file(input	reset,
                     input clk,
                     input [4:0] rs1,          // source register 1
                     input [4:0] rs2,          // source register 2
                     input [4:0] rd,           // destination register
                     input [31:0] rd_din,      // input data for rd
                     input write_enable,          // RegWrite signal
                     input is_ecall,
                     output reg is_halted,
                     output reg [31:0] rs1_dout,   // output of rs 1
                     output reg [31:0] rs2_dout,   // output of rs 2
                     output reg [31:0] print_reg [0:31]);
  integer i;
  // Register file
  reg [31:0] rf[0:31];
  // Do not touch or use print_reg
  assign print_reg = rf;

  // TODO
  // Asynchronously read register file
  // Synchronously write data to the register file
  assign rs1_dout = rf[rs1][31:0];
  assign rs2_dout = rf[rs2][31:0];

  always @(posedge clk) begin
      if((write_enable) && (rd!=0)) begin//never write to x0
          rf[rd][31:0] <= rd_din[31:0];
      end
      /*else begin      // rd안 쓰이지 않게,, rd_din이 unused signal 뜰거 같긴함;;
          rf[rd][31:0] <= rf[rd][31:0];        
      end*/
      
  end


  // Initialize register file (do not touch)
  always @(posedge clk) begin
    // Reset register file
    if (reset) begin
      for (i = 0; i < 32; i = i + 1)
        // DO NOT TOUCH COMMENT BELOW
        /* verilator lint_off BLKSEQ */
        rf[i] = 32'b0;
        /* verilator lint_on BLKSEQ */
        // DO NOT TOUCH COMMENT ABOVE

      // DO NOT TOUCH COMMENT BELOW
      /* verilator lint_off BLKSEQ */
      rf[2] = 32'h2ffc; // stack pointer
      /* verilator lint_on BLKSEQ */
      // DO NOT TOUCH COMMENT ABOVE
    end
  end

  always @(is_ecall) begin
      if (rf[17] == 10) begin
          is_halted <= 1;
      end
  end

endmodule

--  Copyright (C) Your Company Name
--
--  @generated with QGen Code Generator 22.1 (20220109)
--  Command line arguments: ./xmi/Step.xmi
--    --gen-entrypoint
--    --wrap-io
--    --pre-process-xmi
--    --incremental
--    --no-misra
--    --language ada
--    --output src

pragma Style_Checks ("M999");  --  ignore long lines

with Interfaces; use Interfaces;

package qgen_base_workspace_TM_Mode is

   type TM_Mode is record
      tm_timestamp : Unsigned_32;
      tm_payload : Integer_32;
   end record;

end qgen_base_workspace_TM_Mode;
--  @EOF

--  Copyright (C) Your Company Name
--
--  @generated with QGen Code Generator 22.0w (20210910)
--  Command line arguments: ./xmi/Step.xmi
--    --gen-entrypoint
--    --wrap-io
--    --pre-process-xmi
--    --incremental
--    --no-misra
--    --language ada
--    --output src

pragma Style_Checks ("M999");  --  ignore long lines

package qgen_type_Boolean_Array_3 is

   subtype Boolean_Array_3_Range_1 is Integer range 1 .. 3;
   type Boolean_Array_3 is array (Boolean_Array_3_Range_1) of Boolean;
end qgen_type_Boolean_Array_3;
--  @EOF

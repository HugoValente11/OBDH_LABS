--  DO NOT EDIT THIS FILE, IT WILL BE OVERWRITTEN DURING THE BUILD
--  Generated by TASTE (Kazoo template templates/skeletons/ada-ri-source/function.tmplt)
--  2022-02-23 14:43:02
with Native_Implementation_Dataview; use Native_Implementation_Dataview;
with Taste_Basictypes;               use Taste_Basictypes;
with adaasn1rtl;

package Manager_RI is

   procedure Hk_Task;
   
   
   procedure Tm_Error (Contents : in out asn1SccTm_Error_Contents);
   
   
   procedure Tm_Mode (Op_Mode : in out asn1SccOperating_Mode);

   --  Timer Coverage_Timer Set and Reset functions
   procedure Set_Coverage_Timer (Val : in out asn1SccT_UInt32);

   procedure Reset_Coverage_Timer;

   procedure Check_Queue (Res : out adaasn1rtl.Asn1Boolean)
      with Import, Convention => C, Link_Name => "manager_check_queue";
end Manager_RI;

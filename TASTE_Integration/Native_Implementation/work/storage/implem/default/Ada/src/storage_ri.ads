--  DO NOT EDIT THIS FILE, IT WILL BE OVERWRITTEN DURING THE BUILD
--  Generated by TASTE (Kazoo template templates/skeletons/ada-ri-source/function.tmplt)
--  2022-02-21 17:48:38
with Native_Implementation_Dataview; use Native_Implementation_Dataview;
with Taste_Basictypes;               use Taste_Basictypes;
with adaasn1rtl;

package Storage_RI is

   

   procedure Check_Queue (Res : out adaasn1rtl.Asn1Boolean)
      with Import, Convention => C, Link_Name => "storage_check_queue";
end Storage_RI;
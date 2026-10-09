// ===== 0xd910 _GLOBAL__sub_I_GainMapPostProcPlugin.cpp @ 0010d5a4

/* WARNING: Type propagation algorithm not settling */

void _GLOBAL__sub_I_GainMapPostProcPlugin_cpp(void)

{
  long lVar1;
  int iVar2;
  int local_4b8 [2];
  byte local_4b0;
  undefined uStack_4af;
  undefined uStack_4ae;
  undefined5 uStack_4ad;
  void *local_4a0;
  int local_498 [2];
  byte local_490;
  undefined uStack_48f;
  undefined uStack_48e;
  undefined5 uStack_48d;
  void *local_480;
  int local_478 [2];
  byte local_470;
  undefined uStack_46f;
  undefined uStack_46e;
  undefined5 uStack_46d;
  void *local_460;
  int local_458 [2];
  byte local_450;
  undefined uStack_44f;
  undefined uStack_44e;
  undefined5 uStack_44d;
  void *local_440;
  int local_438 [2];
  byte local_430;
  undefined uStack_42f;
  undefined uStack_42e;
  undefined5 uStack_42d;
  void *local_420;
  int local_418 [2];
  byte local_410;
  undefined uStack_40f;
  undefined uStack_40e;
  undefined5 uStack_40d;
  void *local_400;
  int local_3f8 [2];
  byte local_3f0;
  undefined uStack_3ef;
  undefined uStack_3ee;
  undefined5 uStack_3ed;
  void *local_3e0;
  int local_3d8 [2];
  byte local_3d0;
  undefined uStack_3cf;
  undefined uStack_3ce;
  undefined5 uStack_3cd;
  void *local_3c0;
  int local_3b8 [2];
  byte local_3b0;
  undefined uStack_3af;
  undefined uStack_3ae;
  undefined5 uStack_3ad;
  void *local_3a0;
  int local_398 [2];
  byte local_390;
  undefined uStack_38f;
  undefined uStack_38e;
  undefined5 uStack_38d;
  void *local_380;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  memcpy(local_4b8,&DAT_00110008,0x110);
  std::__1::
  map<unsigned_int,char_const*,std::__1::less<unsigned_int>,std::__1::allocator<std::__1::pair<unsigned_int_const,char_const*>>>
  ::map_abi_ne200000_((map<unsigned_int,char_const*,std::__1::less<unsigned_int>,std::__1::allocator<std::__1::pair<unsigned_int_const,char_const*>>>
                       *)&DAT_00114008,(initializer_list)local_4b8,(less *)0x11);
  __cxa_atexit(std::__1::
               map<unsigned_int,char_const*,std::__1::less<unsigned_int>,std::__1::allocator<std::__1::pair<unsigned_int_const,char_const*>>>
               ::~map_abi_ne200000_,&DAT_00114008,&DAT_00110000);
  local_4b0 = 2;
  uStack_4af = 0x67;
  local_498[0] = 1;
  local_490 = 2;
  uStack_48f = 0x68;
  local_478[0] = 2;
  local_470 = 2;
  uStack_46f = 0x69;
  local_458[0] = 3;
  local_450 = 2;
  uStack_44f = 0x6a;
  local_438[0] = 4;
  local_430 = 2;
  uStack_42f = 0x6b;
  local_418[0] = 5;
  local_410 = 2;
  uStack_40f = 0x6c;
  local_3f8[0] = 6;
  local_3f0 = 2;
  uStack_3ef = 0x6d;
  local_3d8[0] = 7;
  local_3d0 = 2;
  uStack_3cf = 0x6e;
  local_3b8[0] = 8;
  local_3b0 = 2;
  uStack_3af = 0x6f;
  local_398[0] = 9;
  local_4b8[0] = 0;
  uStack_4ae = 0;
  uStack_48e = 0;
  uStack_46e = 0;
  uStack_44e = 0;
  uStack_42e = 0;
  uStack_40e = 0;
  uStack_3ee = 0;
  uStack_3ce = 0;
  uStack_3ae = 0;
  local_390 = 2;
  uStack_38f = 0x70;
  uStack_38e = 0;
  DAT_00114030 = 0;
  DAT_00114028 = 0;
  DAT_00114020 = &DAT_00114028;
                    /* try { // try from 0010d6f8 to 0010d7bb has its CatchHandler @ 0010da3c */
  std::__1::
  __tree<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::__map_value_compare<int,std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::less<int>,true>,std::__1::allocator<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>>>
  ::
  __emplace_hint_unique_key_args<int,std::__1::pair<int_const,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>const&>
            ((__tree<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::__map_value_compare<int,std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::less<int>,true>,std::__1::allocator<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>>>
              *)&DAT_00114020,0x114028,local_4b8,(pair_conflict *)local_4b8);
  std::__1::
  __tree<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::__map_value_compare<int,std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::less<int>,true>,std::__1::allocator<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>>>
  ::
  __emplace_hint_unique_key_args<int,std::__1::pair<int_const,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>const&>
            ((__tree<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::__map_value_compare<int,std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::less<int>,true>,std::__1::allocator<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>>>
              *)&DAT_00114020,0x114028,local_498,(pair_conflict *)local_498);
  std::__1::
  __tree<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::__map_value_compare<int,std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::less<int>,true>,std::__1::allocator<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>>>
  ::
  __emplace_hint_unique_key_args<int,std::__1::pair<int_const,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>const&>
            ((__tree<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::__map_value_compare<int,std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::less<int>,true>,std::__1::allocator<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>>>
              *)&DAT_00114020,0x114028,local_478,(pair_conflict *)local_478);
  std::__1::
  __tree<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::__map_value_compare<int,std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::less<int>,true>,std::__1::allocator<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>>>
  ::
  __emplace_hint_unique_key_args<int,std::__1::pair<int_const,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>const&>
            ((__tree<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::__map_value_compare<int,std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::less<int>,true>,std::__1::allocator<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>>>
              *)&DAT_00114020,0x114028,local_458,(pair_conflict *)local_458);
  std::__1::
  __tree<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::__map_value_compare<int,std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::less<int>,true>,std::__1::allocator<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>>>
  ::
  __emplace_hint_unique_key_args<int,std::__1::pair<int_const,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>const&>
            ((__tree<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::__map_value_compare<int,std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::less<int>,true>,std::__1::allocator<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>>>
              *)&DAT_00114020,0x114028,local_438,(pair_conflict *)local_438);
  std::__1::
  __tree<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::__map_value_compare<int,std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::less<int>,true>,std::__1::allocator<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>>>
  ::
  __emplace_hint_unique_key_args<int,std::__1::pair<int_const,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>const&>
            ((__tree<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::__map_value_compare<int,std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::less<int>,true>,std::__1::allocator<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>>>
              *)&DAT_00114020,0x114028,local_418,(pair_conflict *)local_418);
  std::__1::
  __tree<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::__map_value_compare<int,std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::less<int>,true>,std::__1::allocator<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>>>
  ::
  __emplace_hint_unique_key_args<int,std::__1::pair<int_const,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>const&>
            ((__tree<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::__map_value_compare<int,std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::less<int>,true>,std::__1::allocator<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>>>
              *)&DAT_00114020,0x114028,local_3f8,(pair_conflict *)local_3f8);
  std::__1::
  __tree<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::__map_value_compare<int,std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::less<int>,true>,std::__1::allocator<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>>>
  ::
  __emplace_hint_unique_key_args<int,std::__1::pair<int_const,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>const&>
            ((__tree<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::__map_value_compare<int,std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::less<int>,true>,std::__1::allocator<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>>>
              *)&DAT_00114020,0x114028,local_3d8,(pair_conflict *)local_3d8);
  std::__1::
  __tree<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::__map_value_compare<int,std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::less<int>,true>,std::__1::allocator<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>>>
  ::
  __emplace_hint_unique_key_args<int,std::__1::pair<int_const,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>const&>
            ((__tree<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::__map_value_compare<int,std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::less<int>,true>,std::__1::allocator<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>>>
              *)&DAT_00114020,0x114028,local_3b8,(pair_conflict *)local_3b8);
  std::__1::
  __tree<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::__map_value_compare<int,std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::less<int>,true>,std::__1::allocator<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>>>
  ::
  __emplace_hint_unique_key_args<int,std::__1::pair<int_const,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>const&>
            ((__tree<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::__map_value_compare<int,std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::less<int>,true>,std::__1::allocator<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>>>
              *)&DAT_00114020,0x114028,local_398,(pair_conflict *)local_398);
  if ((local_390 & 1) != 0) {
    operator_delete(local_380,
                    CONCAT53(uStack_38d,CONCAT12(uStack_38e,CONCAT11(uStack_38f,local_390))) &
                    0xfffffffffffffffe);
  }
  if ((local_3b0 & 1) != 0) {
    operator_delete(local_3a0,
                    CONCAT53(uStack_3ad,CONCAT12(uStack_3ae,CONCAT11(uStack_3af,local_3b0))) &
                    0xfffffffffffffffe);
  }
  if ((local_3d0 & 1) != 0) {
    operator_delete(local_3c0,
                    CONCAT53(uStack_3cd,CONCAT12(uStack_3ce,CONCAT11(uStack_3cf,local_3d0))) &
                    0xfffffffffffffffe);
  }
  if ((local_3f0 & 1) != 0) {
    operator_delete(local_3e0,
                    CONCAT53(uStack_3ed,CONCAT12(uStack_3ee,CONCAT11(uStack_3ef,local_3f0))) &
                    0xfffffffffffffffe);
  }
  if ((local_410 & 1) != 0) {
    operator_delete(local_400,
                    CONCAT53(uStack_40d,CONCAT12(uStack_40e,CONCAT11(uStack_40f,local_410))) &
                    0xfffffffffffffffe);
  }
  if ((local_430 & 1) != 0) {
    operator_delete(local_420,
                    CONCAT53(uStack_42d,CONCAT12(uStack_42e,CONCAT11(uStack_42f,local_430))) &
                    0xfffffffffffffffe);
  }
  if ((local_450 & 1) != 0) {
    operator_delete(local_440,
                    CONCAT53(uStack_44d,CONCAT12(uStack_44e,CONCAT11(uStack_44f,local_450))) &
                    0xfffffffffffffffe);
  }
  if ((local_470 & 1) != 0) {
    operator_delete(local_460,
                    CONCAT53(uStack_46d,CONCAT12(uStack_46e,CONCAT11(uStack_46f,local_470))) &
                    0xfffffffffffffffe);
  }
  if ((local_490 & 1) != 0) {
    operator_delete(local_480,
                    CONCAT53(uStack_48d,CONCAT12(uStack_48e,CONCAT11(uStack_48f,local_490))) &
                    0xfffffffffffffffe);
  }
  if ((local_4b0 & 1) != 0) {
    operator_delete(local_4a0,
                    CONCAT53(uStack_4ad,CONCAT12(uStack_4ae,CONCAT11(uStack_4af,local_4b0))) &
                    0xfffffffffffffffe);
  }
  __cxa_atexit(std::__1::
               map<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>,std::__1::less<int>,std::__1::allocator<std::__1::pair<int_const,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>>>
               ::~map_abi_ne200000_,&DAT_00114020,&DAT_00110000);
  memcpy(local_4b8,&DAT_00110118,0x140);
  std::__1::
  map<unsigned_int,char_const*,std::__1::less<unsigned_int>,std::__1::allocator<std::__1::pair<unsigned_int_const,char_const*>>>
  ::map_abi_ne200000_((map<unsigned_int,char_const*,std::__1::less<unsigned_int>,std::__1::allocator<std::__1::pair<unsigned_int_const,char_const*>>>
                       *)&DAT_00114038,(initializer_list)local_4b8,(less *)0x14);
  __cxa_atexit(std::__1::
               map<unsigned_int,char_const*,std::__1::less<unsigned_int>,std::__1::allocator<std::__1::pair<unsigned_int_const,char_const*>>>
               ::~map_abi_ne200000_,&DAT_00114038,&DAT_00110000);
  memcpy(local_4b8,&DAT_00110258,0x470);
  std::__1::
  map<unsigned_int,char_const*,std::__1::less<unsigned_int>,std::__1::allocator<std::__1::pair<unsigned_int_const,char_const*>>>
  ::map_abi_ne200000_((map<unsigned_int,char_const*,std::__1::less<unsigned_int>,std::__1::allocator<std::__1::pair<unsigned_int_const,char_const*>>>
                       *)&DAT_00114050,(initializer_list)local_4b8,(less *)0x47);
  __cxa_atexit(std::__1::
               map<unsigned_int,char_const*,std::__1::less<unsigned_int>,std::__1::allocator<std::__1::pair<unsigned_int_const,char_const*>>>
               ::~map_abi_ne200000_,&DAT_00114050,&DAT_00110000);
  DAT_00114068 = property_get_int32("persist.vendor.camera.algoengine.forceAppBugHunter",0);
  DAT_0011406c = property_get_int32("persist.vendor.camera.gainmap.scaleFactor",2);
  DAT_00114070 = property_get_int32("persist.vendor.camera.gainmap.superhd.scaleFactor",4);
  iVar2 = property_get_int32("persist.vendor.camera.gainmap.maxHdrBoost",500);
  DAT_00114074 = (float)iVar2 / 100.0;
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



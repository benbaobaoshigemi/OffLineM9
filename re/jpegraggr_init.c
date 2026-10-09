// ===== 0x33080 _GLOBAL__sub_I_jpegrAggrPlugin.cpp @ 00132804

/* WARNING: Type propagation algorithm not settling */

void _GLOBAL__sub_I_jpegrAggrPlugin_cpp(void)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  size_t sVar4;
  void *pvVar5;
  undefined4 local_4e0 [2];
  undefined8 local_4d8;
  size_t local_4d0;
  void *local_4c8;
  undefined4 local_4c0 [2];
  undefined8 local_4b8;
  size_t local_4b0;
  void *local_4a8;
  undefined4 local_4a0 [2];
  undefined8 local_498;
  size_t local_490;
  void *local_488;
  undefined4 local_480 [2];
  undefined8 local_478;
  size_t local_470;
  void *local_468;
  undefined4 local_460 [2];
  undefined8 local_458;
  size_t local_450;
  void *local_448;
  undefined4 local_440 [2];
  undefined8 local_438;
  size_t local_430;
  void *local_428;
  undefined4 local_420 [2];
  undefined8 local_418;
  size_t local_410;
  void *local_408;
  undefined4 local_400 [2];
  undefined8 local_3f8;
  size_t local_3f0;
  void *local_3e8;
  undefined4 local_3e0 [2];
  undefined8 local_3d8;
  size_t local_3d0;
  void *local_3c8;
  undefined4 local_3c0 [2];
  undefined8 local_3b8;
  size_t sStack_3b0;
  void *local_3a8;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  memcpy(local_4e0,&DAT_00138008,0x110);
  std::__1::
  map<unsigned_int,char_const*,std::__1::less<unsigned_int>,std::__1::allocator<std::__1::pair<unsigned_int_const,char_const*>>>
  ::map_abi_ne200000_((map<unsigned_int,char_const*,std::__1::less<unsigned_int>,std::__1::allocator<std::__1::pair<unsigned_int_const,char_const*>>>
                       *)&DAT_0013c008,(initializer_list)local_4e0,(less *)0x11);
  __cxa_atexit(std::__1::
               map<unsigned_int,char_const*,std::__1::less<unsigned_int>,std::__1::allocator<std::__1::pair<unsigned_int_const,char_const*>>>
               ::~map_abi_ne200000_,&DAT_0013c008,&DAT_00138000);
  local_4e0[0] = 0;
  sVar4 = strlen("g");
  if (0xfffffffffffffff7 < sVar4) {
    if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
      std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
      __throw_length_error_abi_ne200000_();
    }
    goto LAB_001334d4;
  }
  if (sVar4 < 0x17) {
    pvVar5 = (void *)((long)&local_4d8 + 1);
    local_4d8 = CONCAT71(local_4d8._1_7_,(char)((int)sVar4 << 1));
    if (sVar4 != 0) goto LAB_001328e8;
  }
  else {
    uVar1 = 0x1a;
    if ((sVar4 | 7) != 0x17) {
      uVar1 = (sVar4 | 7) + 1;
    }
    pvVar5 = operator_new(uVar1);
    local_4d8 = uVar1 | 1;
    local_4d0 = sVar4;
    local_4c8 = pvVar5;
LAB_001328e8:
    memcpy(pvVar5,&DAT_0010b330,sVar4);
  }
  *(undefined *)((long)pvVar5 + sVar4) = 0;
  local_4c0[0] = 1;
  sVar4 = strlen("h");
  if (0xfffffffffffffff7 < sVar4) {
    if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* try { // try from 001331e4 to 001331eb has its CatchHandler @ 00133320 */
                    /* WARNING: Subroutine does not return */
      std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
      __throw_length_error_abi_ne200000_();
    }
    goto LAB_001334d4;
  }
  if (sVar4 < 0x17) {
    pvVar5 = (void *)((long)&local_4b8 + 1);
    local_4b8 = CONCAT71(local_4b8._1_7_,(char)((int)sVar4 << 1));
    if (sVar4 != 0) goto LAB_00132970;
  }
  else {
    uVar1 = 0x1a;
    if ((sVar4 | 7) != 0x17) {
      uVar1 = (sVar4 | 7) + 1;
    }
                    /* try { // try from 00132958 to 0013295f has its CatchHandler @ 00133320 */
    pvVar5 = operator_new(uVar1);
    local_4b8 = uVar1 | 1;
    local_4b0 = sVar4;
    local_4a8 = pvVar5;
LAB_00132970:
    memcpy(pvVar5,&DAT_0010b332,sVar4);
  }
  *(undefined *)((long)pvVar5 + sVar4) = 0;
  local_4a0[0] = 2;
  sVar4 = strlen("i");
  if (0xfffffffffffffff7 < sVar4) {
    if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* try { // try from 00133200 to 00133207 has its CatchHandler @ 00133314 */
                    /* WARNING: Subroutine does not return */
      std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
      __throw_length_error_abi_ne200000_();
    }
    goto LAB_001334d4;
  }
  if (sVar4 < 0x17) {
    pvVar5 = (void *)((long)&local_498 + 1);
    local_498 = CONCAT71(local_498._1_7_,(char)((int)sVar4 << 1));
    if (sVar4 != 0) goto LAB_001329f8;
  }
  else {
    uVar1 = 0x1a;
    if ((sVar4 | 7) != 0x17) {
      uVar1 = (sVar4 | 7) + 1;
    }
                    /* try { // try from 001329e0 to 001329e7 has its CatchHandler @ 00133314 */
    pvVar5 = operator_new(uVar1);
    local_498 = uVar1 | 1;
    local_490 = sVar4;
    local_488 = pvVar5;
LAB_001329f8:
    memcpy(pvVar5,&DAT_0010802d,sVar4);
  }
  *(undefined *)((long)pvVar5 + sVar4) = 0;
  local_480[0] = 3;
  sVar4 = strlen("j");
  if (0xfffffffffffffff7 < sVar4) {
    if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* try { // try from 0013321c to 00133223 has its CatchHandler @ 00133308 */
                    /* WARNING: Subroutine does not return */
      std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
      __throw_length_error_abi_ne200000_();
    }
    goto LAB_001334d4;
  }
  if (sVar4 < 0x17) {
    pvVar5 = (void *)((long)&local_478 + 1);
    local_478 = CONCAT71(local_478._1_7_,(char)((int)sVar4 << 1));
    if (sVar4 != 0) goto LAB_00132a80;
  }
  else {
    uVar1 = 0x1a;
    if ((sVar4 | 7) != 0x17) {
      uVar1 = (sVar4 | 7) + 1;
    }
                    /* try { // try from 00132a68 to 00132a6f has its CatchHandler @ 00133308 */
    pvVar5 = operator_new(uVar1);
    local_478 = uVar1 | 1;
    local_470 = sVar4;
    local_468 = pvVar5;
LAB_00132a80:
    memcpy(pvVar5,&DAT_0010b334,sVar4);
  }
  *(undefined *)((long)pvVar5 + sVar4) = 0;
  local_460[0] = 4;
  sVar4 = strlen("k");
  if (0xfffffffffffffff7 < sVar4) {
    if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* try { // try from 00133238 to 0013323f has its CatchHandler @ 001332fc */
                    /* WARNING: Subroutine does not return */
      std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
      __throw_length_error_abi_ne200000_();
    }
    goto LAB_001334d4;
  }
  if (sVar4 < 0x17) {
    pvVar5 = (void *)((long)&local_458 + 1);
    local_458 = CONCAT71(local_458._1_7_,(char)((int)sVar4 << 1));
    if (sVar4 != 0) goto LAB_00132b0c;
  }
  else {
    uVar1 = 0x1a;
    if ((sVar4 | 7) != 0x17) {
      uVar1 = (sVar4 | 7) + 1;
    }
                    /* try { // try from 00132af4 to 00132afb has its CatchHandler @ 001332fc */
    pvVar5 = operator_new(uVar1);
    local_458 = uVar1 | 1;
    local_450 = sVar4;
    local_448 = pvVar5;
LAB_00132b0c:
    memcpy(pvVar5,&DAT_00108d14,sVar4);
  }
  *(undefined *)((long)pvVar5 + sVar4) = 0;
  local_440[0] = 5;
  sVar4 = strlen("l");
  if (0xfffffffffffffff7 < sVar4) {
    if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* try { // try from 00133254 to 0013325b has its CatchHandler @ 001332f0 */
                    /* WARNING: Subroutine does not return */
      std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
      __throw_length_error_abi_ne200000_();
    }
    goto LAB_001334d4;
  }
  if (sVar4 < 0x17) {
    pvVar5 = (void *)((long)&local_438 + 1);
    local_438 = CONCAT71(local_438._1_7_,(char)((int)sVar4 << 1));
    if (sVar4 != 0) goto LAB_00132b98;
  }
  else {
    uVar1 = 0x1a;
    if ((sVar4 | 7) != 0x17) {
      uVar1 = (sVar4 | 7) + 1;
    }
                    /* try { // try from 00132b80 to 00132b87 has its CatchHandler @ 001332f0 */
    pvVar5 = operator_new(uVar1);
    local_438 = uVar1 | 1;
    local_430 = sVar4;
    local_428 = pvVar5;
LAB_00132b98:
    memcpy(pvVar5,&DAT_001090d9,sVar4);
  }
  *(undefined *)((long)pvVar5 + sVar4) = 0;
  local_420[0] = 6;
  sVar4 = strlen("m");
  if (0xfffffffffffffff7 < sVar4) {
    if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* try { // try from 00133270 to 00133277 has its CatchHandler @ 001332e4 */
                    /* WARNING: Subroutine does not return */
      std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
      __throw_length_error_abi_ne200000_();
    }
    goto LAB_001334d4;
  }
  if (sVar4 < 0x17) {
    pvVar5 = (void *)((long)&local_418 + 1);
    local_418 = CONCAT71(local_418._1_7_,(char)((int)sVar4 << 1));
    if (sVar4 != 0) goto LAB_00132c24;
  }
  else {
    uVar1 = 0x1a;
    if ((sVar4 | 7) != 0x17) {
      uVar1 = (sVar4 | 7) + 1;
    }
                    /* try { // try from 00132c0c to 00132c13 has its CatchHandler @ 001332e4 */
    pvVar5 = operator_new(uVar1);
    local_418 = uVar1 | 1;
    local_410 = sVar4;
    local_408 = pvVar5;
LAB_00132c24:
    memcpy(pvVar5,&DAT_00108c39,sVar4);
  }
  *(undefined *)((long)pvVar5 + sVar4) = 0;
  local_400[0] = 7;
  sVar4 = strlen("n");
  if (0xfffffffffffffff7 < sVar4) {
    if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* try { // try from 0013328c to 00133293 has its CatchHandler @ 001332d8 */
                    /* WARNING: Subroutine does not return */
      std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
      __throw_length_error_abi_ne200000_();
    }
    goto LAB_001334d4;
  }
  if (sVar4 < 0x17) {
    pvVar5 = (void *)((long)&local_3f8 + 1);
    local_3f8 = CONCAT71(local_3f8._1_7_,(char)((int)sVar4 << 1));
    if (sVar4 != 0) goto LAB_00132cac;
  }
  else {
    uVar1 = 0x1a;
    if ((sVar4 | 7) != 0x17) {
      uVar1 = (sVar4 | 7) + 1;
    }
                    /* try { // try from 00132c94 to 00132c9b has its CatchHandler @ 001332d8 */
    pvVar5 = operator_new(uVar1);
    local_3f8 = uVar1 | 1;
    local_3f0 = sVar4;
    local_3e8 = pvVar5;
LAB_00132cac:
    memcpy(pvVar5,&DAT_0010863b,sVar4);
  }
  *(undefined *)((long)pvVar5 + sVar4) = 0;
  local_3e0[0] = 8;
  sVar4 = strlen("o");
  if (0xfffffffffffffff7 < sVar4) {
    if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* try { // try from 001332a8 to 001332af has its CatchHandler @ 001332d4 */
                    /* WARNING: Subroutine does not return */
      std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
      __throw_length_error_abi_ne200000_();
    }
    goto LAB_001334d4;
  }
  if (sVar4 < 0x17) {
    pvVar5 = (void *)((long)&local_3d8 + 1);
    local_3d8 = CONCAT71(local_3d8._1_7_,(char)((int)sVar4 << 1));
    if (sVar4 != 0) goto LAB_00132d38;
  }
  else {
    uVar1 = 0x1a;
    if ((sVar4 | 7) != 0x17) {
      uVar1 = (sVar4 | 7) + 1;
    }
                    /* try { // try from 00132d20 to 00132d27 has its CatchHandler @ 001332d4 */
    pvVar5 = operator_new(uVar1);
    local_3d8 = uVar1 | 1;
    local_3d0 = sVar4;
    local_3c8 = pvVar5;
LAB_00132d38:
    memcpy(pvVar5,&DAT_00109725,sVar4);
  }
  *(undefined *)((long)pvVar5 + sVar4) = 0;
  local_3c0[0] = 9;
  sVar4 = strlen("p");
  if (0xfffffffffffffff7 < sVar4) {
    if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* try { // try from 001332c4 to 001332cb has its CatchHandler @ 001332cc */
                    /* WARNING: Subroutine does not return */
      std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
      __throw_length_error_abi_ne200000_();
    }
    goto LAB_001334d4;
  }
  if (sVar4 < 0x17) {
    pvVar5 = (void *)((long)&local_3b8 + 1);
    local_3b8 = CONCAT71(local_3b8._1_7_,(char)((int)sVar4 << 1));
    if (sVar4 != 0) goto LAB_00132dc8;
  }
  else {
    uVar1 = 0x1a;
    if ((sVar4 | 7) != 0x17) {
      uVar1 = (sVar4 | 7) + 1;
    }
                    /* try { // try from 00132da8 to 00132daf has its CatchHandler @ 001332cc */
    pvVar5 = operator_new(uVar1);
    local_3b8 = uVar1 | 1;
    sStack_3b0 = sVar4;
    local_3a8 = pvVar5;
LAB_00132dc8:
    memcpy(pvVar5,&DAT_001083a6,sVar4);
  }
  *(undefined *)((long)pvVar5 + sVar4) = 0;
  DAT_0013c030 = 0;
  DAT_0013c028 = 0;
  DAT_0013c020 = &DAT_0013c028;
                    /* try { // try from 00132df8 to 00132ebb has its CatchHandler @ 00133354 */
  std::__1::
  __tree<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::__map_value_compare<int,std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::less<int>,true>,std::__1::allocator<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>>>
  ::
  __emplace_hint_unique_key_args<int,std::__1::pair<int_const,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>const&>
            ((__tree<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::__map_value_compare<int,std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::less<int>,true>,std::__1::allocator<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>>>
              *)&DAT_0013c020,&DAT_0013c028,local_4e0,local_4e0);
  std::__1::
  __tree<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::__map_value_compare<int,std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::less<int>,true>,std::__1::allocator<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>>>
  ::
  __emplace_hint_unique_key_args<int,std::__1::pair<int_const,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>const&>
            ((__tree<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::__map_value_compare<int,std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::less<int>,true>,std::__1::allocator<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>>>
              *)&DAT_0013c020,&DAT_0013c028,local_4c0,local_4c0);
  std::__1::
  __tree<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::__map_value_compare<int,std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::less<int>,true>,std::__1::allocator<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>>>
  ::
  __emplace_hint_unique_key_args<int,std::__1::pair<int_const,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>const&>
            ((__tree<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::__map_value_compare<int,std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::less<int>,true>,std::__1::allocator<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>>>
              *)&DAT_0013c020,&DAT_0013c028,local_4a0,local_4a0);
  std::__1::
  __tree<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::__map_value_compare<int,std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::less<int>,true>,std::__1::allocator<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>>>
  ::
  __emplace_hint_unique_key_args<int,std::__1::pair<int_const,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>const&>
            ((__tree<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::__map_value_compare<int,std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::less<int>,true>,std::__1::allocator<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>>>
              *)&DAT_0013c020,&DAT_0013c028,local_480,local_480);
  std::__1::
  __tree<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::__map_value_compare<int,std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::less<int>,true>,std::__1::allocator<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>>>
  ::
  __emplace_hint_unique_key_args<int,std::__1::pair<int_const,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>const&>
            ((__tree<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::__map_value_compare<int,std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::less<int>,true>,std::__1::allocator<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>>>
              *)&DAT_0013c020,&DAT_0013c028,local_460,local_460);
  std::__1::
  __tree<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::__map_value_compare<int,std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::less<int>,true>,std::__1::allocator<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>>>
  ::
  __emplace_hint_unique_key_args<int,std::__1::pair<int_const,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>const&>
            ((__tree<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::__map_value_compare<int,std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::less<int>,true>,std::__1::allocator<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>>>
              *)&DAT_0013c020,&DAT_0013c028,local_440,local_440);
  std::__1::
  __tree<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::__map_value_compare<int,std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::less<int>,true>,std::__1::allocator<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>>>
  ::
  __emplace_hint_unique_key_args<int,std::__1::pair<int_const,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>const&>
            ((__tree<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::__map_value_compare<int,std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::less<int>,true>,std::__1::allocator<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>>>
              *)&DAT_0013c020,&DAT_0013c028,local_420,local_420);
  std::__1::
  __tree<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::__map_value_compare<int,std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::less<int>,true>,std::__1::allocator<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>>>
  ::
  __emplace_hint_unique_key_args<int,std::__1::pair<int_const,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>const&>
            ((__tree<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::__map_value_compare<int,std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::less<int>,true>,std::__1::allocator<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>>>
              *)&DAT_0013c020,&DAT_0013c028,local_400,local_400);
  std::__1::
  __tree<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::__map_value_compare<int,std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::less<int>,true>,std::__1::allocator<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>>>
  ::
  __emplace_hint_unique_key_args<int,std::__1::pair<int_const,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>const&>
            ((__tree<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::__map_value_compare<int,std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::less<int>,true>,std::__1::allocator<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>>>
              *)&DAT_0013c020,&DAT_0013c028,local_3e0,local_3e0);
  std::__1::
  __tree<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::__map_value_compare<int,std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::less<int>,true>,std::__1::allocator<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>>>
  ::
  __emplace_hint_unique_key_args<int,std::__1::pair<int_const,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>const&>
            ((__tree<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::__map_value_compare<int,std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>,std::__1::less<int>,true>,std::__1::allocator<std::__1::__value_type<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>>>
              *)&DAT_0013c020,&DAT_0013c028,local_3c0,local_3c0);
  if ((local_3b8 & 1) != 0) {
    operator_delete(local_3a8,local_3b8 & 0xfffffffffffffffe);
  }
  if ((local_3d8 & 1) != 0) {
    operator_delete(local_3c8,local_3d8 & 0xfffffffffffffffe);
  }
  if ((local_3f8 & 1) != 0) {
    operator_delete(local_3e8,local_3f8 & 0xfffffffffffffffe);
  }
  if ((local_418 & 1) != 0) {
    operator_delete(local_408,local_418 & 0xfffffffffffffffe);
  }
  if ((local_438 & 1) != 0) {
    operator_delete(local_428,local_438 & 0xfffffffffffffffe);
  }
  if ((local_458 & 1) != 0) {
    operator_delete(local_448,local_458 & 0xfffffffffffffffe);
  }
  if ((local_478 & 1) != 0) {
    operator_delete(local_468,local_478 & 0xfffffffffffffffe);
  }
  if ((local_498 & 1) != 0) {
    operator_delete(local_488,local_498 & 0xfffffffffffffffe);
  }
  if ((local_4b8 & 1) != 0) {
    operator_delete(local_4a8,local_4b8 & 0xfffffffffffffffe);
  }
  if ((local_4d8 & 1) != 0) {
    operator_delete(local_4c8,local_4d8 & 0xfffffffffffffffe);
  }
  __cxa_atexit(std::__1::
               map<int,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>,std::__1::less<int>,std::__1::allocator<std::__1::pair<int_const,std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>>>>
               ::~map_abi_ne200000_,&DAT_0013c020,&DAT_00138000);
  memcpy(local_4e0,&DAT_00138118,0x140);
  std::__1::
  map<unsigned_int,char_const*,std::__1::less<unsigned_int>,std::__1::allocator<std::__1::pair<unsigned_int_const,char_const*>>>
  ::map_abi_ne200000_((map<unsigned_int,char_const*,std::__1::less<unsigned_int>,std::__1::allocator<std::__1::pair<unsigned_int_const,char_const*>>>
                       *)&DAT_0013c038,(initializer_list)local_4e0,(less *)0x14);
  __cxa_atexit(std::__1::
               map<unsigned_int,char_const*,std::__1::less<unsigned_int>,std::__1::allocator<std::__1::pair<unsigned_int_const,char_const*>>>
               ::~map_abi_ne200000_,&DAT_0013c038,&DAT_00138000);
  memcpy(local_4e0,&DAT_00138258,0x470);
  std::__1::
  map<unsigned_int,char_const*,std::__1::less<unsigned_int>,std::__1::allocator<std::__1::pair<unsigned_int_const,char_const*>>>
  ::map_abi_ne200000_((map<unsigned_int,char_const*,std::__1::less<unsigned_int>,std::__1::allocator<std::__1::pair<unsigned_int_const,char_const*>>>
                       *)&DAT_0013c050,(initializer_list)local_4e0,(less *)0x47);
  __cxa_atexit(std::__1::
               map<unsigned_int,char_const*,std::__1::less<unsigned_int>,std::__1::allocator<std::__1::pair<unsigned_int_const,char_const*>>>
               ::~map_abi_ne200000_,&DAT_0013c050,&DAT_00138000);
  DAT_0013c068 = property_get_int32("persist.vendor.camera.algoengine.forceAppBugHunter",0);
  DAT_0013c06c = property_get_int32("persist.vendor.camera.gainmap.scaleFactor",2);
  DAT_0013c070 = property_get_int32("persist.vendor.camera.gainmap.superhd.scaleFactor",4);
  iVar3 = property_get_int32("persist.vendor.camera.gainmap.maxHdrBoost",500);
  DAT_0013c074 = (float)iVar3 / 100.0;
  DAT_0013c078 = property_get_int32("persist.vendor.camera.algoengine.jpegrAggr.dump",0);
  DAT_0013c07c = property_get_int32("persist.vendor.camera.jpegrAggr.showGainMap",0);
  property_get("ro.miui.build.region",&DAT_0013c080,"unknown");
  iVar3 = property_get_int32("persist.vendor.camera.algoengine.jpegrAggr.iso21496_1",1);
  DAT_0013c0dc = iVar3 != 0;
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
LAB_001334d4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



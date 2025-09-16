create table watpnpaf
(
dwtnpboo    varchar2(8),
wtnpurno    varchar2(8),
wtnpcode    varchar2(9),
dwtnpcnt    varchar2(2),
wtnpdret    varchar2(8),
wtnpdchg    varchar2(8),
wtnpoutc    varchar2(3),
wtnpreas    varchar2(3),
wtnpcomm    varchar2(50),
wtnpncnt    varchar2(2),
wtnpspar    varchar2(18),
lf          varchar2(1),
constraint watpnpa1 primary key( 
dwtnpboo)
)
tablespace iba01ad 
initrans 2 
storage ( 
  initial 16k 
) 
enable primary key using index 
  tablespace iba01ax 
  initrans 3 
  storage ( 
    initial 16k 
  ); 
create public synonym watpnpaf for watpnpaf;
create unique index watpnpa2 on watpnpaf
(
wtnpurno,
wtnpcode,
dwtnpcnt,
dwtnpboo
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 

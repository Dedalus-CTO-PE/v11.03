create table priaudaf
(
praddebt    varchar2(8),
dpradscn    varchar2(2),
pradprac    varchar2(6),
pradrecp    varchar2(12),
dpradtcn    varchar2(3),
praddate    varchar2(8),
pradtime    varchar2(8),
pradoper    varchar2(4),
pradport    number(2,0),
pradamou    number(14,2),
pradmeth    number(1,0),
praddraw    varchar2(30),
pradbank    varchar2(30),
pradbrnc    varchar2(30),
pradspar    varchar2(15),
lf          varchar2(1),
constraint priauda1 primary key( 
praddebt,
dpradscn,
pradprac,
pradrecp,
dpradtcn)
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
create public synonym priaudaf for priaudaf;

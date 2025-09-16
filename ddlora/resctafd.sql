create table resctaaf
(
rectlab     varchar2(3),
rectseg     varchar2(3),
rectfld     varchar2(2),
rectsys     varchar2(12),
rectcod     varchar2(12),
rectdes     varchar2(50),
rectslv     varchar2(2),
rectspa     varchar2(58),
lf          varchar2(1),
constraint resctaa1 primary key( 
rectlab,
rectseg,
rectfld,
rectsys,
rectcod)
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
create public synonym resctaaf for resctaaf;

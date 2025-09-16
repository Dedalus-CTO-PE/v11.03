create table corfldaf
(
coflfnum    varchar2(5),
coflfdsc    varchar2(50),
coflgrp     varchar2(20),
cofltab     varchar2(8),
coflfld     varchar2(8),
coflfspa    varchar2(19),
lf          varchar2(1),
constraint corflda1 primary key( 
coflfnum)
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
create public synonym corfldaf for corfldaf;

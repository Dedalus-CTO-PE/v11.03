create table priremaf
(
prrmseid    varchar2(4),
prrmsedc    varchar2(35),
prrmdbfr    varchar2(9),
prrmdbto    varchar2(9),
prrmmpfr    varchar2(6),
prrmmpto    varchar2(6),
prrminfr    varchar2(9),
prrminto    varchar2(9),
prrmidfr    varchar2(8),
prrmidto    varchar2(8),
prrmccfr    varchar2(3),
prrmccto    varchar2(3),
prrmmbal    number(10,2),
prrmmscd    varchar2(3),
prrmscan    varchar2(1),
prrmspar    varchar2(21),
lf          varchar2(1),
constraint prirema1 primary key( 
prrmseid)
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
create public synonym priremaf for priremaf;

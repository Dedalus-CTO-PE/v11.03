create table patvw8af
(
ptw8drgc    varchar2(4),
ptw8sdmt    varchar2(1),
ptw8mvel    varchar2(1),
ptw8cpay    varchar2(1),
ptw8libp    number(4,0),
ptw8hibp    number(4,0),
ptw8ilos    number(6,2),
ptw8sdod    varchar2(1),
ptw8tsdw    number(10,4),
ptw8todw    number(10,4),
ptw8tlom    number(10,4),
ptw8timw    number(10,4),
ptw8thom    number(10,4),
ptw8spar    varchar2(50),
lf          varchar2(1),
constraint patvw8a1 primary key( 
ptw8drgc)
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
create public synonym patvw8af for patvw8af;

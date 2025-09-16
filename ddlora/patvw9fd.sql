create table patvw9af
(
ptw9drgc    varchar2(4),
ptw9sdmt    varchar2(1),
ptw9mvel    varchar2(1),
ptw9cpay    varchar2(1),
ptw9libp    number(4,0),
ptw9hibp    number(4,0),
ptw9ilos    number(6,2),
ptw9sdod    varchar2(1),
ptw9tsdw    number(10,4),
ptw9todw    number(10,4),
ptw9tlom    number(10,4),
ptw9timw    number(10,4),
ptw9thom    number(10,4),
ptw9spar    varchar2(50),
lf          varchar2(1),
constraint patvw9a1 primary key( 
ptw9drgc)
)
tablespace ibandx0x 
initrans 2 
storage ( 
  initial 16k 
) 
enable primary key using index 
  tablespace ibadat0x 
  initrans 3 
  storage ( 
    initial 16k 
  ); 
create public synonym patvw9af for patvw9af;

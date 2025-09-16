create table patvw7af
(
ptw7drgc    varchar2(4),
ptw7sdmt    varchar2(1),
ptw7mvel    varchar2(1),
ptw7cpay    varchar2(1),
ptw7libp    number(4,0),
ptw7hibp    number(4,0),
ptw7ilos    number(6,2),
ptw7sdod    varchar2(1),
ptw7fsdw    number(10,4),
ptw7vsdw    number(10,4),
ptw7tsdw    number(10,4),
ptw7fodw    number(10,4),
ptw7vodw    number(10,4),
ptw7todw    number(10,4),
ptw7flom    number(10,4),
ptw7vlom    number(10,4),
ptw7tlom    number(10,4),
ptw7fimw    number(10,4),
ptw7vimw    number(10,4),
ptw7timw    number(10,4),
ptw7fhom    number(10,4),
ptw7vhom    number(10,4),
ptw7thom    number(10,4),
ptw7spar    varchar2(50),
lf          varchar2(1),
constraint patvw7a1 primary key( 
ptw7drgc)
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
create public synonym patvw7af for patvw7af;

create table patw12bf
(
pt12drgc    varchar2(4),
pt12drgd    varchar2(60),
pt12sdmt    varchar2(1),
pt12mvel    varchar2(1),
pt12cpay    varchar2(3),
pt12libp    number(4,0),
pt12hibp    number(4,0),
pt12ilos    number(6,2),
pt12sdod    varchar2(1),
pt12tsdw    number(10,4),
pt12todw    number(10,4),
pt12tlom    number(10,4),
pt12timw    number(10,4),
pt12thom    number(10,4),
pt12thih    number(10,4),
pt12spar    varchar2(50),
lf          varchar2(1),
constraint patw12b1 primary key( 
pt12drgc)
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
create public synonym patw12bf for patw12bf;

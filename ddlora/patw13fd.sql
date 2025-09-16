create table patw13af
(
pt13drgc    varchar2(4),
pt13drgd    varchar2(60),
pt13sdmt    varchar2(1),
pt13mvel    varchar2(1),
pt13cpay    varchar2(3),
pt13libp    number(4,0),
pt13hibp    number(4,0),
pt13ilos    number(6,2),
pt13sdod    varchar2(1),
pt13tsdw    number(10,4),
pt13todw    number(10,4),
pt13tlom    number(10,4),
pt13timw    number(10,4),
pt13thom    number(10,4),
pt13thih    number(10,4),
pt13spar    varchar2(50),
lf          varchar2(1),
constraint patw13a1 primary key( 
pt13drgc)
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
create public synonym patw13af for patw13af;

create table patw10af
(
pt10drgc    varchar2(4),
pt10drgd    varchar2(60),
pt10sdmt    varchar2(1),
pt10mvel    varchar2(1),
pt10cpay    varchar2(3),
pt10libp    number(4,0),
pt10hibp    number(4,0),
pt10ilos    number(6,2),
pt10sdod    varchar2(1),
pt10tsdw    number(10,4),
pt10todw    number(10,4),
pt10tlom    number(10,4),
pt10timw    number(10,4),
pt10thom    number(10,4),
pt10spar    varchar2(50),
lf          varchar2(1),
constraint patw10a1 primary key( 
pt10drgc)
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
create public synonym patw10af for patw10af;

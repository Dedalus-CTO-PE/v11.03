create table patw11af
(
pt11drgc    varchar2(4),
pt11drgd    varchar2(60),
pt11sdmt    varchar2(1),
pt11mvel    varchar2(1),
pt11cpay    varchar2(3),
pt11libp    number(4,0),
pt11hibp    number(4,0),
pt11ilos    number(6,2),
pt11sdod    varchar2(1),
pt11tsdw    number(10,4),
pt11todw    number(10,4),
pt11tlom    number(10,4),
pt11timw    number(10,4),
pt11thom    number(10,4),
pt11thih    number(10,4),
pt11spar    varchar2(50),
lf          varchar2(1),
constraint patw11a1 primary key( 
pt11drgc)
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
create public synonym patw11af for patw11af;

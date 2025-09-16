create table patw15af
(
pt15drgc    varchar2(4),
pt15drgd    varchar2(60),
pt15sdmt    varchar2(1),
pt15mvel    varchar2(1),
pt15cpay    varchar2(3),
pt15libp    number(4,0),
pt15hibp    number(4,0),
pt15ilos    number(6,2),
pt15sdod    varchar2(1),
pt15tsdw    number(10,4),
pt15todw    number(10,4),
pt15tlom    number(10,4),
pt15timw    number(10,4),
pt15thom    number(10,4),
pt15thih    number(10,4),
pt15spar    varchar2(50),
lf          varchar2(1),
constraint patw15a1 primary key( 
pt15drgc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym patw15af for patw15af;

create table patw16af
(
pt16drgc    varchar2(4),
pt16drgd    varchar2(60),
pt16sdmt    varchar2(1),
pt16mvel    varchar2(1),
pt16cpay    varchar2(3),
pt16libp    number(4,0),
pt16hibp    number(4,0),
pt16ilos    number(6,2),
pt16sdod    varchar2(1),
pt16tsdw    number(10,4),
pt16todw    number(10,4),
pt16tlom    number(10,4),
pt16timw    number(10,4),
pt16thom    number(10,4),
pt16thih    number(10,4),
pt16spar    varchar2(50),
lf          varchar2(1),
constraint patw16a1 primary key( 
pt16drgc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym patw16af for patw16af;

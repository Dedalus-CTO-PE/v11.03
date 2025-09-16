create table patw14af
(
pt14drgc    varchar2(4),
pt14drgd    varchar2(60),
pt14sdmt    varchar2(1),
pt14mvel    varchar2(1),
pt14cpay    varchar2(3),
pt14libp    number(4,0),
pt14hibp    number(4,0),
pt14ilos    number(6,2),
pt14sdod    varchar2(1),
pt14tsdw    number(10,4),
pt14todw    number(10,4),
pt14tlom    number(10,4),
pt14timw    number(10,4),
pt14thom    number(10,4),
pt14thih    number(10,4),
pt14spar    varchar2(50),
lf          varchar2(1),
constraint patw14a1 primary key( 
pt14drgc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym patw14af for patw14af;

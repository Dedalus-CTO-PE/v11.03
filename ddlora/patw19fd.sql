create table patw19af
(
  pt19drgc    varchar2(4) default ' ' not null,
  pt19drgd    varchar2(60) default ' ' not null,
  pt19sdmt    varchar2(1) default ' ' not null,
  pt19mvel    varchar2(1) default ' ' not null,
  pt19cpay    varchar2(3) default ' ' not null,
  pt19libp    number(4,0) default 0 not null,
  pt19hibp    number(4,0) default 0 not null,
  pt19ilos    number(6,2) default 0 not null,
  pt19sdod    varchar2(1) default ' ' not null,
  pt19tsdw    number(10,4) default 0 not null,
  pt19todw    number(10,4) default 0 not null,
  pt19tlom    number(10,4) default 0 not null,
  pt19timw    number(10,4) default 0 not null,
  pt19thom    number(10,4) default 0 not null,
  pt19thih    number(10,4) default 0 not null,
  pt19spar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patw19a1 primary key( 
pt19drgc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 

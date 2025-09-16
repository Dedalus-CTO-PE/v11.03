create table patw20af
(
  pt20drgc    varchar2(4) default ' ' not null,
  pt20drgd    varchar2(60) default ' ' not null,
  pt20sdmt    varchar2(1) default ' ' not null,
  pt20mvel    varchar2(1) default ' ' not null,
  pt20cpay    varchar2(3) default ' ' not null,
  pt20libp    number(4,0) default 0 not null,
  pt20hibp    number(4,0) default 0 not null,
  pt20ilos    number(6,2) default 0 not null,
  pt20sdod    varchar2(1) default ' ' not null,
  pt20tsdw    number(10,4) default 0 not null,
  pt20todw    number(10,4) default 0 not null,
  pt20tlom    number(10,4) default 0 not null,
  pt20timw    number(10,4) default 0 not null,
  pt20thom    number(10,4) default 0 not null,
  pt20thih    number(10,4) default 0 not null,
  pt20spar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patw20a1 primary key( 
pt20drgc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 

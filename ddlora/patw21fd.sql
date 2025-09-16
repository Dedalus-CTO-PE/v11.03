create table patw21af
(
  pt21drgc    varchar2(4) default ' ' not null,
  pt21drgd    varchar2(60) default ' ' not null,
  pt21sdmt    varchar2(1) default ' ' not null,
  pt21mvel    varchar2(1) default ' ' not null,
  pt21cpay    varchar2(3) default ' ' not null,
  pt21libp    number(4,0) default 0 not null,
  pt21hibp    number(4,0) default 0 not null,
  pt21ilos    number(6,2) default 0 not null,
  pt21sdod    varchar2(1) default ' ' not null,
  pt21tsdw    number(10,4) default 0 not null,
  pt21todw    number(10,4) default 0 not null,
  pt21tlom    number(10,4) default 0 not null,
  pt21timw    number(10,4) default 0 not null,
  pt21thom    number(10,4) default 0 not null,
  pt21thih    number(10,4) default 0 not null,
  pt21spar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patw21a1 primary key( 
pt21drgc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 

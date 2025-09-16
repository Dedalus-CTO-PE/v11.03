create table patw17af
(
  pt17drgc    varchar2(4) default ' ' not null,
  pt17drgd    varchar2(60) default ' ' not null,
  pt17sdmt    varchar2(1) default ' ' not null,
  pt17mvel    varchar2(1) default ' ' not null,
  pt17cpay    varchar2(3) default ' ' not null,
  pt17libp    number(4,0) default 0 not null,
  pt17hibp    number(4,0) default 0 not null,
  pt17ilos    number(6,2) default 0 not null,
  pt17sdod    varchar2(1) default ' ' not null,
  pt17tsdw    number(10,4) default 0 not null,
  pt17todw    number(10,4) default 0 not null,
  pt17tlom    number(10,4) default 0 not null,
  pt17timw    number(10,4) default 0 not null,
  pt17thom    number(10,4) default 0 not null,
  pt17thih    number(10,4) default 0 not null,
  pt17spar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patw17a1 primary key( 
pt17drgc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym patw17af for patw17af;

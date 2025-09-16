create table patw18af
(
  pt18drgc    varchar2(4) default ' ' not null,
  pt18drgd    varchar2(60) default ' ' not null,
  pt18sdmt    varchar2(1) default ' ' not null,
  pt18mvel    varchar2(1) default ' ' not null,
  pt18cpay    varchar2(3) default ' ' not null,
  pt18libp    number(4,0) default 0 not null,
  pt18hibp    number(4,0) default 0 not null,
  pt18ilos    number(6,2) default 0 not null,
  pt18sdod    varchar2(1) default ' ' not null,
  pt18tsdw    number(10,4) default 0 not null,
  pt18todw    number(10,4) default 0 not null,
  pt18tlom    number(10,4) default 0 not null,
  pt18timw    number(10,4) default 0 not null,
  pt18thom    number(10,4) default 0 not null,
  pt18thih    number(10,4) default 0 not null,
  pt18spar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patw18a1 primary key( 
pt18drgc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 

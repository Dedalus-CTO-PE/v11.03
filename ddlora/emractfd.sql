create table emractaf
(
  ematcode    varchar2(30) default ' ' not null,
  ematfdat    varchar2(8) default ' ' not null,
  emattdat    varchar2(8) default ' ' not null,
  ematadmf    number(9,6) default 0 not null,
  ematdsdc    number(9,6) default 0 not null,
  ematraba    number(9,6) default 0 not null,
  ematrtah    number(9,6) default 0 not null,
  ematabam    number(9,6) default 0 not null,
  emattct1    number(9,6) default 0 not null,
  emattct2    number(9,6) default 0 not null,
  emattct3    number(9,6) default 0 not null,
  emattct4    number(9,6) default 0 not null,
  emattct5    number(9,6) default 0 not null,
  ematcdat    varchar2(8) default ' ' not null,
  ematctim    varchar2(8) default ' ' not null,
  ematcuid    varchar2(10) default ' ' not null,
  ematudat    varchar2(8) default ' ' not null,
  ematutim    varchar2(8) default ' ' not null,
  ematuuid    varchar2(10) default ' ' not null,
  emataflg    varchar2(1) default ' ' not null,
  ematspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emracta1 primary key( 
ematcode,
ematfdat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 

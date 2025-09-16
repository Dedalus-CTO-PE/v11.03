create table prigslaf
(
  prgsseid    varchar2(4) default ' ' not null,
  prgsdebt    varchar2(8) default ' ' not null,
  dprgssca    varchar2(2) default ' ' not null,
  dprgsuni    varchar2(8) default ' ' not null,
  prgsprac    varchar2(6) default ' ' not null,
  prgssdoc    varchar2(10) default ' ' not null,
  prgspind    varchar2(3) default ' ' not null,
  prgsstat    varchar2(1) default ' ' not null,
  prgsspar    varchar2(18) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint prigsla1 primary key( 
prgsseid,
prgsdebt,
dprgssca,
dprgsuni)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 

create table sincihaf
(
  siihcat     varchar2(7) default ' ' not null,
  siihwar     varchar2(5) default ' ' not null,
  siihdat     varchar2(6) default ' ' not null,
  siihuqt     number(14,2) default 0 not null,
  siihuam     number(14,2) default 0 not null,
  siihpqt     number(14,2) default 0 not null,
  siihpam     number(14,2) default 0 not null,
  siihrqt     number(14,2) default 0 not null,
  siihram     number(14,2) default 0 not null,
  siihspa     varchar2(18) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinciha1 primary key( 
siihcat,
siihwar,
siihdat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index sinciha2 on sincihaf
(
siihcat,
siihdat,
siihwar
)
  tablespace pas_indx; 

create table outerhaf
(
  oterhosp    varchar2(3) default ' ' not null,
  oterpypn    varchar2(8) default ' ' not null,
  oterprun    varchar2(4) default ' ' not null,
  oterpdat    varchar2(8) default ' ' not null,
  oterbsbc    varchar2(6) default ' ' not null,
  oteraccn    varchar2(9) default ' ' not null,
  oteracnm    varchar2(30) default ' ' not null,
  oterdamn    varchar2(9) default ' ' not null,
  oterstat    varchar2(1) default ' ' not null,
  oterrkey    varchar2(24) default ' ' not null,
  oterspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outerha1 primary key( 
oterhosp,
oterpypn,
oterprun,
oterpdat,
oterrkey)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index outerha2 on outerhaf
(
oterhosp,
oterpdat,
oterpypn,
oterprun,
oterrkey
)
  tablespace pas_indx; 
create unique index outerha3 on outerhaf
(
oterhosp,
oterstat,
oterpdat,
oterpypn,
oterprun,
oterrkey
)
  tablespace pas_indx; 
create unique index outerha4 on outerhaf
(
oterhosp,
oterrkey,
oterpypn,
oterprun,
oterpdat
)
  tablespace pas_indx; 

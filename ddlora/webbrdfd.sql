create table webbrdaf
(
  wbbrhosp    varchar2(3) default ' ' not null,
  wbbrpypn    varchar2(8) default ' ' not null,
  wbbrprun    varchar2(4) default ' ' not null,
  wbbrpdat    varchar2(8) default ' ' not null,
  wbbrclbp    varchar2(9) default ' ' not null,
  wbbrclca    varchar2(9) default ' ' not null,
  wbbrclid    varchar2(6) default ' ' not null,
  wbbrldat    varchar2(8) default ' ' not null,
  wbbrtrid    varchar2(24) default ' ' not null,
  wbbrrkey    varchar2(24) default ' ' not null,
  wbbrstat    varchar2(1) default ' ' not null,
  wbbrltyp    varchar2(2) default ' ' not null,
  wbbrmsid    varchar2(36) default ' ' not null,
  wbbrspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webbrda1 primary key( 
wbbrhosp,
wbbrpypn,
wbbrprun,
wbbrpdat,
wbbrclid,
wbbrtrid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webbrda2 on webbrdaf
(
wbbrtrid,
wbbrhosp,
wbbrpypn,
wbbrprun,
wbbrpdat,
wbbrclid
)
  tablespace pas_indx; 
create unique index webbrda3 on webbrdaf
(
wbbrrkey,
wbbrhosp,
wbbrpypn,
wbbrprun,
wbbrpdat,
wbbrclid,
wbbrtrid
)
  tablespace pas_indx; 
create unique index webbrda4 on webbrdaf
(
wbbrrkey,
wbbrtrid,
wbbrhosp,
wbbrpypn,
wbbrprun,
wbbrpdat,
wbbrclid
)
  tablespace pas_indx; 

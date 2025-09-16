create table webbrhaf
(
  wbbhhosp    varchar2(3) default ' ' not null,
  wbbhpypn    varchar2(8) default ' ' not null,
  wbbhprun    varchar2(4) default ' ' not null,
  wbbhpdat    varchar2(8) default ' ' not null,
  wbbhdamn    varchar2(9) default ' ' not null,
  wbbhaccn    varchar2(9) default ' ' not null,
  wbbhacnm    varchar2(30) default ' ' not null,
  wbbhbsbc    varchar2(6) default ' ' not null,
  wbbhstat    varchar2(1) default ' ' not null,
  wbbhrsta    varchar2(50) default ' ' not null,
  wbbhrkey    varchar2(24) default ' ' not null,
  wbbhmsid    varchar2(36) default ' ' not null,
  wbbhspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webbrha1 primary key( 
wbbhhosp,
wbbhpypn,
wbbhprun,
wbbhpdat,
wbbhrkey)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webbrha2 on webbrhaf
(
wbbhhosp,
wbbhpdat,
wbbhpypn,
wbbhprun,
wbbhrkey
)
  tablespace pas_indx; 
create unique index webbrha3 on webbrhaf
(
wbbhhosp,
wbbhstat,
wbbhpdat,
wbbhpypn,
wbbhprun,
wbbhrkey
)
  tablespace pas_indx; 
create unique index webbrha4 on webbrhaf
(
wbbhhosp,
wbbhrkey,
wbbhpypn,
wbbhprun,
wbbhpdat
)
  tablespace pas_indx; 
create unique index webbrha5 on webbrhaf
(
wbbhrkey,
wbbhhosp,
wbbhpypn,
wbbhprun,
wbbhpdat
)
  tablespace pas_indx; 

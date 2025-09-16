create table sinaudga
(
  sigaaudd    varchar2(8) default ' ' not null,
  sigaaudt    varchar2(8) default ' ' not null,
  sigaaudp    varchar2(2) default ' ' not null,
  sigaaudr    varchar2(1) default ' ' not null,
  sigaauds    number(1,0) default 0 not null,
  sigaaudo    varchar2(4) default ' ' not null,
  sigacod     varchar2(6) default ' ' not null,
  sigades     varchar2(40) default ' ' not null,
  sigagli     varchar2(12) default ' ' not null,
  sigaudd1    varchar2(8) default ' ' not null,
  sigaudd2    varchar2(8) default ' ' not null,
  sigaudy1    varchar2(1) default ' ' not null,
  sigaudy2    varchar2(1) default ' ' not null,
  sigaudr1    varchar2(15) default ' ' not null,
  sigaudr2    varchar2(15) default ' ' not null,
  sigaspa     varchar2(9) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index sinaudga on sinaudga
(
sigaaudd,
sigaaudt,
sigaaudp,
sigaaudr
)
tablespace pas_indx; 
create table sincgaaf
(
  sigacod     varchar2(6) default ' ' not null,
  sigades     varchar2(40) default ' ' not null,
  sigagli     varchar2(12) default ' ' not null,
  sigaudd1    varchar2(8) default ' ' not null,
  sigaudd2    varchar2(8) default ' ' not null,
  sigaudy1    varchar2(1) default ' ' not null,
  sigaudy2    varchar2(1) default ' ' not null,
  sigaudr1    varchar2(15) default ' ' not null,
  sigaudr2    varchar2(15) default ' ' not null,
  sigaspa     varchar2(9) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sincgaa1 primary key( 
sigacod)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index sincgaa2 on sincgaaf
(
sigades,
sigacod
)
  tablespace pas_indx; 

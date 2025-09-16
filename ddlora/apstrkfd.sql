create table apstrkaf
(
  aptkcrd     varchar2(5) default ' ' not null,
  aptkdtrc    varchar2(8) default ' ' not null,
  aptkuniq    varchar2(3) default ' ' not null,
  aptkdtin    varchar2(8) default ' ' not null,
  aptkref     varchar2(15) default ' ' not null,
  aptkord     varchar2(8) default ' ' not null,
  aptkled     varchar2(2) default ' ' not null,
  aptkccen    varchar2(12) default ' ' not null,
  aptkdept    varchar2(30) default ' ' not null,
  aptkamt     number(14,2) default 0 not null,
  aptkdtpr    varchar2(8) default ' ' not null,
  aptkbat     varchar2(5) default ' ' not null,
  aptkuid     varchar2(4) default ' ' not null,
  aptkdate    varchar2(8) default ' ' not null,
  aptktime    varchar2(8) default ' ' not null,
  aptkur1     varchar2(25) default ' ' not null,
  aptkur2     varchar2(25) default ' ' not null,
  aptkud1     varchar2(8) default ' ' not null,
  aptkud2     varchar2(8) default ' ' not null,
  aptkuy1     varchar2(1) default ' ' not null,
  aptkuy2     varchar2(1) default ' ' not null,
  aptkspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint apstrka1 primary key( 
aptkcrd,
aptkdtrc,
aptkuniq)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index apstrka2 on apstrkaf
(
aptkdtrc,
aptkcrd,
aptkuniq
)
  tablespace pas_indx; 
create unique index apstrka3 on apstrkaf
(
aptkcrd,
aptkbat,
aptkdtrc,
aptkuniq
)
  tablespace pas_indx; 

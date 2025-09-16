create table legmmbsf
(
  lmmcode     varchar2(9) default ' ' not null,
  dlmmadmn    varchar2(8) default ' ' not null,
  dlmmrecn    varchar2(2) default ' ' not null,
  lmmdate     varchar2(8) default ' ' not null,
  lmmstim     varchar2(5) default ' ' not null,
  lmmetim     varchar2(5) default ' ' not null,
  lmmspare    varchar2(6) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint legmmbs1 primary key( 
dlmmadmn,
dlmmrecn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index legmmbs2 on legmmbsf
(
lmmcode,
dlmmadmn,
dlmmrecn
)
  tablespace pas_indx; 

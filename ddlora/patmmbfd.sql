create table patmmbsf
(
  mmcode      varchar2(9) default ' ' not null,
  dmmadmn     varchar2(8) default ' ' not null,
  dmmrecn     varchar2(3) default ' ' not null,
  mmdate      varchar2(8) default ' ' not null,
  mmstim      varchar2(5) default ' ' not null,
  mmetim      varchar2(5) default ' ' not null,
  ptmmdesc    varchar2(70) default ' ' not null,
  ptmmopid    varchar2(10) default ' ' not null,
  ptmmtmno    varchar2(1) default ' ' not null,
  ptmmedat    varchar2(8) default ' ' not null,
  ptmmrpst    varchar2(5) default ' ' not null,
  ptmmrpet    varchar2(5) default ' ' not null,
  ptmmvaid    varchar2(1) default ' ' not null,
  ptmmapra    varchar2(20) default ' ' not null,
  mmspare     varchar2(49) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patmmbs1 primary key( 
dmmadmn,
dmmrecn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patmmbs2 on patmmbsf
(
mmcode,
dmmadmn,
dmmrecn
)
  tablespace pas_indx; 

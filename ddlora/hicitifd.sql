create table hicitiaf
(
  hcitinvn    varchar2(8) default ' ' not null,
  hcitclmn    varchar2(8) default ' ' not null,
  hcitvisn    varchar2(8) default ' ' not null,
  hcittran    varchar2(2) default ' ' not null,
  hcitidat    varchar2(8) default ' ' not null,
  hcitiinv    number(14,2) default 0 not null,
  hcitspar    varchar2(40) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hicitia1 primary key( 
hcitinvn,
hcitclmn,
hcitvisn,
hcittran)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index hicitia2 on hicitiaf
(
hcitclmn,
hcitinvn,
hcitvisn,
hcittran
)
  tablespace pas_indx; 
create unique index hicitia3 on hicitiaf
(
hcitidat,
hcitclmn,
hcitvisn,
hcittran,
hcitinvn
)
  tablespace pas_indx; 

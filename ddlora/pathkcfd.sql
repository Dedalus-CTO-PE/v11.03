create table pathkcaf
(
  pthkclam    varchar2(3) default ' ' not null,
  pthkdept    varchar2(3) default ' ' not null,
  pthkdiet    varchar2(3) default ' ' not null,
  pthkbtyp    varchar2(3) default ' ' not null,
  dpthkage    varchar2(3) default ' ' not null,
  pthkcchg    number(14,2) default 0 not null,
  pthkdesc    varchar2(30) default ' ' not null,
  pthkspar    varchar2(17) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pathkca1 primary key( 
pthkclam,
pthkdept,
pthkdiet,
pthkbtyp,
dpthkage)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 

create table fmsbcfaf
(
  fmbcbat     varchar2(5) default ' ' not null,
  fmbcsta     varchar2(1) default ' ' not null,
  fmbcsec     number(5,0) default 0 not null,
  fmbctot     number(14,2) default 0 not null,
  fmbcdis     number(14,2) default 0 not null,
  fmbcuid     varchar2(4) default ' ' not null,
  fmbcdat     varchar2(8) default ' ' not null,
  fmbcpdat    varchar2(8) default ' ' not null,
  fmbcled     varchar2(2) default ' ' not null,
  fmbctrt     varchar2(2) default ' ' not null,
  fmbcinv     number(1,0) default 0 not null,
  fmbccdat    varchar2(8) default ' ' not null,
  fmbcspar    varchar2(12) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmsbcfa1 primary key( 
fmbcbat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index fmsbcfa2 on fmsbcfaf
(
fmbcsta,
fmbcbat
)
  tablespace pas_indx; 
create unique index fmsbcfa3 on fmsbcfaf
(
fmbcdat,
fmbcbat
)
  tablespace pas_indx; 

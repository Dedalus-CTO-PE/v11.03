create table sinreaaf
(
  siratyp     varchar2(1) default ' ' not null,
  sirareq     varchar2(7) default ' ' not null,
  siraind     number(1,0) default 0 not null,
  siracst     varchar2(5) default ' ' not null,
  siradat     varchar2(8) default ' ' not null,
  siradel     varchar2(50) default ' ' not null,
  siratot     number(14,2) default 0 not null,
  siraspa     varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinreaa1 primary key( 
siratyp,
sirareq)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index sinreaa2 on sinreaaf
(
siracst,
siratyp,
sirareq
)
  tablespace pas_indx; 
create unique index sinreaa3 on sinreaaf
(
siradat,
siratyp,
sirareq
)
  tablespace pas_indx; 
create unique index sinreaa4 on sinreaaf
(
siracst,
siradat,
siratyp,
sirareq
)
  tablespace pas_indx; 

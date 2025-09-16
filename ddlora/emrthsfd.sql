create table emrthsaf
(
  emtsvisn    varchar2(8) default ' ' not null,
  emtscntr    varchar2(3) default ' ' not null,
  emtssite    varchar2(3) default ' ' not null,
  emtshosp    varchar2(3) default ' ' not null,
  emtslocn    varchar2(3) default ' ' not null,
  emtsstat    varchar2(1) default ' ' not null,
  emtscdat    varchar2(8) default ' ' not null,
  emtsctim    varchar2(8) default ' ' not null,
  emtscuid    varchar2(10) default ' ' not null,
  emtsudat    varchar2(8) default ' ' not null,
  emtsutim    varchar2(8) default ' ' not null,
  emtsuuid    varchar2(10) default ' ' not null,
  emtsspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emrthsa1 primary key( 
emtsvisn,
emtscntr)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index emrthsa2 on emrthsaf
(
emtssite,
emtsvisn,
emtscntr
)
  tablespace pas_indx; 
create unique index emrthsa3 on emrthsaf
(
emtssite,
emtshosp,
emtsvisn,
emtscntr
)
  tablespace pas_indx; 
create unique index emrthsa4 on emrthsaf
(
emtsstat,
emtsvisn,
emtscntr
)
  tablespace pas_indx; 

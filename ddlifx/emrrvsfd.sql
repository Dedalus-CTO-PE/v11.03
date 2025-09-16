create table emrrvsaf
(
  emrvresp    char(3) default ' ' not null,
  emrvsdat    char(8) default ' ' not null,
  emrvvisn    char(8) default ' ' not null,
  emrvpsta    char(1) default ' ' not null,
  emrvcuid    char(10) default ' ' not null,
  emrvcdat    char(8) default ' ' not null,
  emrvctim    char(8) default ' ' not null,
  emrvuuid    char(10) default ' ' not null,
  emrvudat    char(8) default ' ' not null,
  emrvutim    char(8) default ' ' not null,
  emrvspar    char(60) default ' ' not null,
  lf          char(1)
);
create unique index emrrvsa1 on emrrvsaf
(
emrvresp,
emrvsdat,
emrvvisn
);
revoke all on emrrvsaf from public ; 
grant select on emrrvsaf to public ; 

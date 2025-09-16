create table fmsrstaf
(
  fmrtstyc    char(3) default ' ' not null,
  fmrtrown    char(2) default ' ' not null,
  fmrtline    char(2) default ' ' not null,
  fmrttype    char(2) default ' ' not null,
  fmrtwidt    char(2) default ' ' not null,
  fmrtvtyp    char(2) default ' ' not null,
  fmrtscal    char(2) default ' ' not null,
  fmrtperi    char(2) default ' ' not null,
  fmrtfrmt    char(20) default ' ' not null,
  fmrtspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index fmsrsta1 on fmsrstaf
(
fmrtstyc,
fmrtrown,
fmrtline
);
revoke all on fmsrstaf from public ; 
grant select on fmsrstaf to public ; 

create table pmsoosaf
(
  pmoourno    char(8) default ' ' not null,
  pmoocusr    char(10) default ' ' not null,
  pmoocdte    char(8) default ' ' not null,
  pmooctme    char(8) default ' ' not null,
  pmoospar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index pmsoosa1 on pmsoosaf
(
pmoourno
);
revoke all on pmsoosaf from public ; 
grant select on pmsoosaf to public ; 

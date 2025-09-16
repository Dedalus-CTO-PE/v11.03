create table mehrevaf
(
  dmhrvadm    char(8) default ' ' not null,
  mhrvdate    char(8) default ' ' not null,
  mhrvtime    char(5) default ' ' not null,
  mhrvdeci    decimal(1,0) default 0 not null,
  mhrvldat    char(8) default ' ' not null,
  mhrvltim    char(5) default ' ' not null,
  mhrvreas    char(3) default ' ' not null,
  mhrvndat    char(8) default ' ' not null,
  mhrvspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index mehreva1 on mehrevaf
(
dmhrvadm,
mhrvdate,
mhrvtime
);
revoke all on mehrevaf from public ; 
grant select on mehrevaf to public ; 

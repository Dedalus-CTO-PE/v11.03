create table scropnaf
(
  scoppid     char(8) default ' ' not null,
  scopfil     char(8) default ' ' not null,
  scopphy     char(8) default ' ' not null,
  scopmod     decimal(1,0) default 0 not null,
  scopopt     char(20) default ' ' not null,
  scopspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index scropna1 on scropnaf
(
scoppid,
scopfil
);
revoke all on scropnaf from public ; 
grant select on scropnaf to public ; 

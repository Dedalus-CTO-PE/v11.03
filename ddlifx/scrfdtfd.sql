create table scrfdtaf
(
  scfdfid     char(8) default ' ' not null,
  scfdpid     char(8) default ' ' not null,
  scfdlin     char(5) default ' ' not null,
  scfdcod     char(80) default ' ' not null,
  scfdspa     char(12) default ' ' not null,
  lf          char(1)
);
create unique index scrfdta1 on scrfdtaf
(
scfdfid,
scfdpid,
scfdlin
);
revoke all on scrfdtaf from public ; 
grant select on scrfdtaf to public ; 

create table scrvcmaf
(
  scvcsid     char(12) default ' ' not null,
  scvcver     char(3) default ' ' not null,
  scvclin     char(3) default ' ' not null,
  scvcdat     char(70) default ' ' not null,
  scvcspa     char(10) default ' ' not null,
  lf          char(1)
);
create unique index scrvcma1 on scrvcmaf
(
scvcsid,
scvcver,
scvclin
);
revoke all on scrvcmaf from public ; 
grant select on scrvcmaf to public ; 

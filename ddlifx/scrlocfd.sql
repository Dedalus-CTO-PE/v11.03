create table scrlocaf
(
  sclopid     char(8) default ' ' not null,
  sclouid     char(10) default ' ' not null,
  sclospa     char(10) default ' ' not null,
  lf          char(1)
);
create unique index scrloca1 on scrlocaf
(
sclopid
);
revoke all on scrlocaf from public ; 
grant select on scrlocaf to public ; 

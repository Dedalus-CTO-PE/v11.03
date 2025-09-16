create table scrtagaf
(
  sctapid     char(8) default ' ' not null,
  sctasid     char(2) default ' ' not null,
  sctafno     char(5) default ' ' not null,
  sctacbd     char(8) default ' ' not null,
  sctacad     char(8) default ' ' not null,
  sctacbk     char(8) default ' ' not null,
  sctacak     char(8) default ' ' not null,
  sctaspa     char(30) default ' ' not null,
  lf          char(1)
);
create unique index scrtaga1 on scrtagaf
(
sctapid,
sctasid,
sctafno
);
revoke all on scrtagaf from public ; 
grant select on scrtagaf to public ; 

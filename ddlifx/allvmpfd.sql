create table allvmpaf
(
  alvmdept    char(3) default ' ' not null,
  alvmcatg    char(2) default ' ' not null,
  alvmedat    char(8) default ' ' not null,
  alvmcode    char(3) default ' ' not null,
  alvmspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index allvmpa1 on allvmpaf
(
alvmdept,
alvmcatg,
alvmedat
);
revoke all on allvmpaf from public ; 
grant select on allvmpaf to public ; 

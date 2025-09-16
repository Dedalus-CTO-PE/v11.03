create table scrveraf
(
  scvesid     char(12) default ' ' not null,
  scvever     char(3) default ' ' not null,
  scvewho     char(3) default ' ' not null,
  scvedat     char(8) default ' ' not null,
  scvesrf     char(8) default ' ' not null,
  scvequo     char(8) default ' ' not null,
  scvespa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index scrvera1 on scrveraf
(
scvesid,
scvever
);
revoke all on scrveraf from public ; 
grant select on scrveraf to public ; 

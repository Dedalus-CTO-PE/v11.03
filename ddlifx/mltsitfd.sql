create table mltsitaf
(
  mlstusid    char(10) default ' ' not null,
  mlstsite    char(6) default ' ' not null,
  mlstspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index mltsita1 on mltsitaf
(
mlstusid,
mlstsite
);
revoke all on mltsitaf from public ; 
grant select on mltsitaf to public ; 

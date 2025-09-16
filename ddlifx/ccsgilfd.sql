create table ccsgilaf
(
  ccgikey     char(20) default ' ' not null,
  ccgihcd     char(2) default ' ' not null,
  ccgidpt     char(8) default ' ' not null,
  ccgicty     char(4) default ' ' not null,
  ccgiper     decimal(10,6) default 0 not null,
  ccgispa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index ccsgila1 on ccsgilaf
(
ccgikey,
ccgihcd,
ccgidpt,
ccgicty
);
create unique index ccsgila2 on ccsgilaf
(
ccgihcd,
ccgidpt,
ccgicty,
ccgikey
);
revoke all on ccsgilaf from public ; 
grant select on ccsgilaf to public ; 

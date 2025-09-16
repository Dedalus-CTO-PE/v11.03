create table webschaf
(
  wbscschd    char(8) default ' ' not null,
  wbscstat    char(1) default ' ' not null,
  wbscscdt    char(8) default ' ' not null,
  wbscsctm    char(8) default ' ' not null,
  wbscactv    char(9) default ' ' not null,
  wbscunix    char(50) default ' ' not null,
  wbscdsrp    char(50) default ' ' not null,
  wbscrpid    char(8) default ' ' not null,
  wbscuser    char(10) default ' ' not null,
  wbscrdte    char(8) default ' ' not null,
  wbscrtim    char(8) default ' ' not null,
  wbscsdat    char(8) default ' ' not null,
  wbscstim    char(8) default ' ' not null,
  wbscsflg    decimal(1,0) default 0 not null,
  wbscotyp    decimal(1,0) default 0 not null,
  wbscnrec    decimal(6,0) default 0 not null,
  wbscrpro    decimal(6,0) default 0 not null,
  wbscutim    char(8) default ' ' not null,
  wbscprin    char(6) default ' ' not null,
  wbscspoo    char(50) default ' ' not null,
  wbscncop    decimal(3,0) default 0 not null,
  wbscprep    char(1) default ' ' not null,
  wbscrdat    char(12) default ' ' not null,
  wbscrend    char(8) default ' ' not null,
  wbscperm    char(1) default ' ' not null,
  wbscexcp    char(8) default ' ' not null,
  wbschosp    char(3) default ' ' not null,
  wbscsite    char(6) default ' ' not null,
  wbsccdat    char(8) default ' ' not null,
  wbscctim    char(8) default ' ' not null,
  wbscspar    char(10) default ' ' not null,
  lf          char(1)
);
create unique index webscha1 on webschaf
(
wbscschd
);
create unique index webscha2 on webschaf
(
wbscstat,
wbscscdt,
wbscsctm,
wbscschd
);
create unique index webscha3 on webschaf
(
wbscuser,
wbscscdt,
wbscschd
);
create unique index webscha4 on webschaf
(
wbscscdt,
wbscschd
);
create unique index webscha5 on webschaf
(
wbscrpid,
wbscscdt,
wbscuser,
wbscschd
);
revoke all on webschaf from public ; 
grant select on webschaf to public ; 

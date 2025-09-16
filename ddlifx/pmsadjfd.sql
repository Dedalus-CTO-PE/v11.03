create table pmsadjaf
(
  pmajcntr    char(6) default ' ' not null,
  pmajadjt    char(3) default ' ' not null,
  pmajadjv    decimal(14,4) default 0 not null,
  pmajcuid    char(10) default ' ' not null,
  pmajcdat    char(8) default ' ' not null,
  pmajctim    char(8) default ' ' not null,
  pmajuuid    char(10) default ' ' not null,
  pmajudat    char(8) default ' ' not null,
  pmajutim    char(8) default ' ' not null,
  pmajspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index pmsadja1 on pmsadjaf
(
pmajcntr,
pmajadjt
);
revoke all on pmsadjaf from public ; 
grant select on pmsadjaf to public ; 

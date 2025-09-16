create table pmspwaaf
(
  pmpwcntr    char(6) default ' ' not null,
  pmpwdrgc    char(4) default ' ' not null,
  pmpwdrgd    char(80) default ' ' not null,
  pmpwsdpy    char(1) default ' ' not null,
  pmpwbicu    char(1) default ' ' not null,
  pmpwalos    decimal(8,2) default 0 not null,
  pmpwlowb    decimal(4,0) default 0 not null,
  pmpwuppb    decimal(4,0) default 0 not null,
  pmpwpsrv    decimal(5,2) default 0 not null,
  pmpwpaed    decimal(5,2) default 0 not null,
  pmpwsday    decimal(14,4) default 0 not null,
  pmpwssob    decimal(14,4) default 0 not null,
  pmpwssop    decimal(14,4) default 0 not null,
  pmpwinli    decimal(14,4) default 0 not null,
  pmpwlsop    decimal(14,4) default 0 not null,
  pmpwcdat    char(8) default ' ' not null,
  pmpwctim    char(8) default ' ' not null,
  pmpwcuid    char(10) default ' ' not null,
  pmpwudat    char(8) default ' ' not null,
  pmpwutim    char(8) default ' ' not null,
  pmpwuuid    char(10) default ' ' not null,
  pmpwspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index pmspwaa1 on pmspwaaf
(
pmpwcntr,
pmpwdrgc
);
create unique index pmspwaa2 on pmspwaaf
(
pmpwdrgc,
pmpwcntr
);
revoke all on pmspwaaf from public ; 
grant select on pmspwaaf to public ; 

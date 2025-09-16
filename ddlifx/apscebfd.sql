create table apscebaf
(
  apebisc     char(1) default ' ' not null,
  apebord     char(7) default ' ' not null,
  apebcat     char(6) default ' ' not null,
  apebled     char(2) default ' ' not null,
  apebacc     char(12) default ' ' not null,
  apebdis     char(5) default ' ' not null,
  apebres     char(4) default ' ' not null,
  apebdes     char(35) default ' ' not null,
  apebamt     decimal(14,2) default 0 not null,
  apebgst     decimal(14,2) default 0 not null,
  apebuct     decimal(16,4) default 0 not null,
  apebugs     decimal(16,4) default 0 not null,
  apebqty     decimal(14,2) default 0 not null,
  apebspa     char(42) default ' ' not null,
  lf          char(1)
);
create unique index apsceba1 on apscebaf
(
apebisc,
apebord,
apebcat
);
create unique index apsceba2 on apscebaf
(
apebled,
apebacc,
apebisc,
apebord,
apebcat
);
revoke all on apscebaf from public ; 
grant select on apscebaf to public ; 

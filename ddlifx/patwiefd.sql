create table patwieaf
(
  ptwidrgc    char(4) default ' ' not null,
  ptwidrgd    char(60) default ' ' not null,
  ptwivrsn    char(3) default ' ' not null,
  ptwisdmt    char(1) default ' ' not null,
  ptwimvel    char(1) default ' ' not null,
  ptwicpay    char(3) default ' ' not null,
  ptwilibp    decimal(4,0) default 0 not null,
  ptwihibp    decimal(4,0) default 0 not null,
  ptwiilos    decimal(6,2) default 0 not null,
  ptwisdod    char(1) default ' ' not null,
  ptwitdsw    decimal(10,4) default 0 not null,
  ptwitodw    decimal(10,4) default 0 not null,
  ptwitlom    decimal(10,4) default 0 not null,
  ptwitimw    decimal(10,4) default 0 not null,
  ptwithom    decimal(10,4) default 0 not null,
  ptwithih    decimal(10,4) default 0 not null,
  ptwissdr    char(1) default ' ' not null,
  ptwisswt    decimal(10,4) default 0 not null,
  ptwispar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index patwiea1 on patwieaf
(
ptwidrgc,
ptwivrsn
);
revoke all on patwieaf from public ; 
grant select on patwieaf to public ; 

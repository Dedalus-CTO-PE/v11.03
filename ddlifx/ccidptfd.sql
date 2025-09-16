create table ccidptaf
(
  ccdtdept    char(3) default ' ' not null,
  ccdtserv    char(2) default ' ' not null,
  ccdtlong    char(1) default ' ' not null,
  ccdtcsdp    char(4) default ' ' not null,
  dccdtlsd    char(2) default ' ' not null,
  ccdttrcs    char(5) default ' ' not null,
  ccdtspar    char(14) default ' ' not null,
  lf          char(1)
);
create unique index ccidpta1 on ccidptaf
(
ccdtdept
);
revoke all on ccidptaf from public ; 
grant select on ccidptaf to public ; 

create table ccstimaf
(
  cctmdef     char(1) default ' ' not null,
  cctmdat     char(8) default ' ' not null,
  cctmdes     char(35) default ' ' not null,
  cctmlv2     char(10) default ' ' not null,
  cctmlv3     char(10) default ' ' not null,
  cctmlv4     char(10) default ' ' not null,
  cctmspa     char(30) default ' ' not null,
  lf          char(1)
);
create unique index ccstima1 on ccstimaf
(
cctmdef,
cctmdat
);
revoke all on ccstimaf from public ; 
grant select on ccstimaf to public ; 

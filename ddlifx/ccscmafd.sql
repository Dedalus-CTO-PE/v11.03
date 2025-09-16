create table ccscmaaf
(
  ccmacom     char(4) default ' ' not null,
  ccmades     char(35) default ' ' not null,
  ccmaur1     char(15) default ' ' not null,
  ccmaur2     char(15) default ' ' not null,
  ccmaud1     char(8) default ' ' not null,
  ccmaud2     char(8) default ' ' not null,
  ccmauc1     char(3) default ' ' not null,
  ccmauc2     char(3) default ' ' not null,
  ccmauy1     char(1) default ' ' not null,
  ccmauy2     char(1) default ' ' not null,
  ccmaspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index ccscmaa1 on ccscmaaf
(
ccmacom
);
revoke all on ccscmaaf from public ; 
grant select on ccscmaaf to public ; 

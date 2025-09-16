create table emrlhiaf
(
  emlhloca    char(3) default ' ' not null,
  emlhscod    char(3) default ' ' not null,
  emlhotyp    char(1) default ' ' not null,
  emlhefdt    char(8) default ' ' not null,
  emlheftm    char(8) default ' ' not null,
  emlhdele    char(1) default ' ' not null,
  emlhactv    char(1) default ' ' not null,
  emlhssin    char(1) default ' ' not null,
  emlhmaxp    decimal(4,0) default 0 not null,
  emlhcdat    char(8) default ' ' not null,
  emlhctim    char(8) default ' ' not null,
  emlhcuid    char(10) default ' ' not null,
  emlhspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index emrlhia1 on emrlhiaf
(
emlhloca,
emlhscod,
emlhefdt,
emlheftm
);
create unique index emrlhia2 on emrlhiaf
(
emlhcdat,
emlhctim,
emlhloca,
emlhscod,
emlhefdt,
emlheftm
);
create unique index emrlhia3 on emrlhiaf
(
emlhdele,
emlhloca,
emlhscod,
emlhefdt,
emlheftm
);
revoke all on emrlhiaf from public ; 
grant select on emrlhiaf to public ; 
